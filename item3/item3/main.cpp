/*
* @file main.cpp
* @brief File for the Exam Item Number 3 : bool Room::PathExistsTo(const char* endingRoomName);
*
*
* 3. Imagine a maze of interconnected rooms:
* - Each room has a unique name and can be connected to between zero and four other rooms through doors
* named north, south, east, and west.
* - Rooms aren’t necessarily spatially coherent. If A is north of B, B might not be south of A.
* - Doors aren’t necessarily bidirectional. If A can be reached from B, B might not be reachable from A.
* - Rooms might connect to themselves.
*
* 3a. Write a class or struct declaration that shows the structure of a Room. Include a constructor (for classes)
* or initialization function (for structs).
*
* 3b. Write a function to connect a new Room to an existing Room.
*
* 3c. Write a function to determine if any path exists between a starting room and an ending room with a given name.
*	You may add additional members and methods to your Room class or struct as needed.
*	You don’t need to worry about finding the shortest path. It’s only necessary to determine if any path exists.
*
* Use this prototype:
* bool Room::PathExistsTo(const char* endingRoomName);
*
* @author Von Wilhelm Guiang
* Contact: guiang.vw@gmail.com
*/

#include <iostream>
#include <unordered_map>

using namespace std;

class Room
{
	private:
		string name;
		bool visited = false;
		unordered_map<string, Room*> door;

		/*
		* @brief Check if there is a connection to the other room.
		* @param direction - The direction of the door (north, south, east, west).
		*/
		bool isConnectedToRooms(const char* endingRoomName, Room& room)
		{

			for (const auto& connectedRoom : room.door)
			{
				if (connectedRoom.second->name == endingRoomName)
				{
					return true;
				}

				if (connectedRoom.second->visited)
				{
					continue;
				}

				connectedRoom.second->visited = true;

				if (isConnectedToRooms(endingRoomName, *connectedRoom.second))
				{
					return true;
				}

			}

			return false;
		}

	public:
		Room(const string& name) :
			name(name)
		{

		}

		/*
		* @brief Connects a new Room to an existing Room.
		* @param direction - The direction of the door (north, south, east, west).
		*/
		void CreateDoorTo(Room* targetRoom, const string& direction)
		{
			door[direction] = targetRoom;
		}

		bool PathExistsTo(const char* endingRoomName)
		{
			bool exists = isConnectedToRooms(endingRoomName, *this);
			return exists;
		}

};

int main()
{
	Room roomA = Room("A");
	Room roomB = Room("B");
	Room roomC = Room("C");
	Room roomD = Room("D");
	
	roomA.CreateDoorTo(&roomB, "north");
	roomB.CreateDoorTo(&roomC, "south");
	roomC.CreateDoorTo(&roomD, "east");

	bool pathAExiststoD = roomA.PathExistsTo("D");
	bool pathAExiststoA = roomA.PathExistsTo("A");
	bool pathAExiststoB = roomA.PathExistsTo("B");
	bool pathBexiststoA = roomB.PathExistsTo("A");

	cout << "Path exists from Room A to Room D: " << (pathAExiststoD ? "Yes" : "No") << endl;
	cout << "Path exists from Room A to Room A: " << (pathAExiststoA ? "Yes" : "No") << endl;
	cout << "Path exists from Room A to Room B: " << (pathAExiststoB ? "Yes" : "No") << endl;
	cout << "Path exists from Room B to Room A: " << (pathBexiststoA ? "Yes" : "No") << endl;

	// Avoid closing the console window immediately
	system("pause");

	return 0;
}
