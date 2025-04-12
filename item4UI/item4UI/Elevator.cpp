/*
* @file main.cpp
* @brief File for the Exam Item Number 4 : ElevatorController
*
* 4. Design an elevator controller for a building of ten floors (including the ground floor).
* You will need to complete the supplied ElevatorMotor class by writing implementations of the given methods,
* getCurrentFloor, getCurrentDirection, setCurrentDirection and step.
* Your ElevatorController class should implement the interface in ElevatorControllerBase and should defer to the
* completed ElevatorMotor class for all movement and tracking of position.
*
* Design your controller to achieve the following goals (listed in order of priority, first being highest priority) to
* minimize user irritation and/or ensure proper function:
*
* 1. At no time should an idle elevator be unresponsive to summon calls or when a floor button is pressed.
*
* 2. At no time should a running elevator car attempt to go below or above the lowest, highest floor respectively.
*
* 3. For an embarking user, the maximum time for the user to pick a destination floor after boarding the elevator car is 5 seconds.
* After which, the car can switch to moving.
*
* 4. For an individual user, minimize the time between boarding an elevator car and reaching the destination floor and disembarking.
*
* 5. For an individual user, minimize the time between summoning an elevator car and embarking.
*
* @author Von Wilhelm Guiang
* Contact: guiang.vw@gmail.com
*/

#include <iostream>
#include <unordered_set> 
#include <functional> 

namespace Gamigo
{
    class IFloorEventListener
    {
        public:
            virtual void floorReached(int) = 0;
    };

    class ElevatorMotor
    {
        private:
            std::unordered_set<IFloorEventListener*> _floorReachedEventListeners;

        public:
            enum Direction {
                Down = -1,
                None,
                Up,
            };

        private:
            Direction _currentDirection = None;
            int _currentFloor = 0;

        public:
            Direction getCurrentDirection() const
            {
                return _currentDirection;
            }

            void setCurrentDirection(Direction direction)
            {
                _currentDirection = direction;
            }

            int getCurrentFloor() const
            {
                return _currentFloor;
            }

            // Advances the simulation by deltaSeconds seconds  
            virtual void step(float deltaSeconds)
            {
                const float speed = 1.0f;
                float elevatorArriveTime = speed * deltaSeconds;

                if (_currentFloor < 0)
                {
                    _currentFloor = 0;
                    _currentDirection = None;
                }
                if (_currentFloor >= 10)
                {
                    _currentFloor = 10;
                    _currentDirection = None;
                }

                if (_currentDirection == Up)
                {
                    _currentFloor++;
                }
                if (_currentDirection == Down)
                {
                    _currentFloor--;
                }

                // Notify listeners that the elevator has reached a floor
                notifyReachedFloor(_currentFloor);
            }

            void addFloorReachedListener(IFloorEventListener* listener)
            {
                _floorReachedEventListeners.insert(listener);
            }

            void removeFloorReachedListener(IFloorEventListener* listener)
            {
                _floorReachedEventListeners.erase(listener);
            }

            // called when the car has reached a particular floor  
            virtual void notifyReachedFloor(int floor)
            {
                for (auto listener : _floorReachedEventListeners)
                {
                    listener->floorReached(floor);
                }
            }


    };


    // Interface
    class ElevatorControllerBase
    {
        protected:
            ElevatorMotor* _elevatorMotor;

        public:
            ElevatorControllerBase(ElevatorMotor* elevatorMotor) :
                _elevatorMotor(elevatorMotor)
            {
            }

            // called when an up or down button was pushed on a floor  
            virtual void summonButtonPushed(int summoningFloor, ElevatorMotor::Direction direction) = 0;

            // called when a button for a floor is pushed inside the car 
            virtual void floorButtonPushed(int destinationFloor) = 0;
    };

    // Inheritance
    class ElevatorController : public ElevatorControllerBase
    {
        private:
            ElevatorMotor* _elevatorMotor;
        public:
			ElevatorController(ElevatorMotor* elevatorMotor) :
				_elevatorMotor(elevatorMotor),
                ElevatorControllerBase(elevatorMotor)
			{
			}

            /*
            * 1. At no time should an idle elevator be unresponsive to summon calls or when a floor button is pressed.
            *
            * @brief This function is called when a summon button is pushed.
            * @param summoningFloor The floor number where the summon button was pushed.
            * @param direction The direction of the elevator (up or down).
            */
            void summonButtonPushed(int summoningFloor, ElevatorMotor::Direction direction)
            {
				int currentFloor = _elevatorMotor->getCurrentFloor();

				switch (direction)
				{
				    case ElevatorMotor::Up:
					    if (currentFloor < summoningFloor)
					    {
						    _elevatorMotor->setCurrentDirection(ElevatorMotor::Up);
					    }
					    break;
				    case ElevatorMotor::Down:
					    if (currentFloor > summoningFloor)
					    {
						    _elevatorMotor->setCurrentDirection(ElevatorMotor::Down);
					    }
					    break;
				    default:
                        _elevatorMotor->setCurrentDirection(ElevatorMotor::None);
					    break;
				}

                if (currentFloor != summoningFloor)
                {
					_elevatorMotor->step(1.0f);
                }
            }

            void floorButtonPushed(int destinationFloor)
            {
                int currentFloor = _elevatorMotor->getCurrentFloor();

                if (currentFloor < destinationFloor)
                {
                    _elevatorMotor->setCurrentDirection(ElevatorMotor::Up);
                }
                else if (currentFloor > destinationFloor)
                {
                    _elevatorMotor->setCurrentDirection(ElevatorMotor::Down);
                }
                else
                {
                    _elevatorMotor->setCurrentDirection(ElevatorMotor::None);
                }

                if (currentFloor != destinationFloor)
                {
                    _elevatorMotor->step(1.0f);
                }
            }
            
    };

}

using namespace Gamigo;
#include "Elevator.h"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;

int main() 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// Create the Elevator form and run it
	item4UI::Elevator^ elevatorForm = gcnew item4UI::Elevator();
	Application::Run(elevatorForm);

	return 0;
}