#pragma once
namespace item4UI {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Gamigo;

	/// <summary>
	/// Summary for Elevator
	/// </summary>
	public ref class Elevator : public System::Windows::Forms::Form
	{
	public:
		Elevator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Elevator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ floorContainer;
	private: System::Windows::Forms::Label^ floor1;
	private: System::Windows::Forms::Button^ firstFloorUpBtn;
	private: System::Windows::Forms::Button^ firstFloorDownBtn;





	private: System::Windows::Forms::Button^ gFloorUpBtn;








	private: System::Windows::Forms::Label^ groundfloorLabel;
	private: System::Windows::Forms::Button^ eighthFloorDownBtn;
	private: System::Windows::Forms::Button^ sixthFloorDownBtn;
	private: System::Windows::Forms::Button^ secondFloorDownBtn;



	private: System::Windows::Forms::Button^ fourthFloorDownBtn;

	private: System::Windows::Forms::Button^ eighthFloorUpBtn;
	private: System::Windows::Forms::Button^ seventhFloorDownBtn;
	private: System::Windows::Forms::Button^ fifthFloorDownBtn;
	private: System::Windows::Forms::Button^ thirdFloorDownBtn;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ sixthFloorUpBtn;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ fourthFloorUpBtn;

	private: System::Windows::Forms::Button^ secondFloorUpBtn;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ seventhFloorUpBtn;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ thirdFloorUpBtn;
	private: System::Windows::Forms::Button^ fifthFloorUpBtn;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ thenthFloorDownBtn;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ ninethFloorUpBtn;
	private: System::Windows::Forms::Button^ ninethFloorDownBtn;








	protected:

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Elevator::typeid));
			this->floorContainer = (gcnew System::Windows::Forms::GroupBox());
			this->thenthFloorDownBtn = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->ninethFloorUpBtn = (gcnew System::Windows::Forms::Button());
			this->ninethFloorDownBtn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->eighthFloorDownBtn = (gcnew System::Windows::Forms::Button());
			this->sixthFloorDownBtn = (gcnew System::Windows::Forms::Button());
			this->secondFloorDownBtn = (gcnew System::Windows::Forms::Button());
			this->fourthFloorDownBtn = (gcnew System::Windows::Forms::Button());
			this->eighthFloorUpBtn = (gcnew System::Windows::Forms::Button());
			this->seventhFloorDownBtn = (gcnew System::Windows::Forms::Button());
			this->fifthFloorDownBtn = (gcnew System::Windows::Forms::Button());
			this->thirdFloorDownBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->firstFloorDownBtn = (gcnew System::Windows::Forms::Button());
			this->sixthFloorUpBtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->fourthFloorUpBtn = (gcnew System::Windows::Forms::Button());
			this->secondFloorUpBtn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->gFloorUpBtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->seventhFloorUpBtn = (gcnew System::Windows::Forms::Button());
			this->groundfloorLabel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->thirdFloorUpBtn = (gcnew System::Windows::Forms::Button());
			this->fifthFloorUpBtn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->firstFloorUpBtn = (gcnew System::Windows::Forms::Button());
			this->floor1 = (gcnew System::Windows::Forms::Label());
			this->floorContainer->SuspendLayout();
			this->SuspendLayout();
			// 
			// floorContainer
			// 
			this->floorContainer->Controls->Add(this->thenthFloorDownBtn);
			this->floorContainer->Controls->Add(this->label9);
			this->floorContainer->Controls->Add(this->ninethFloorUpBtn);
			this->floorContainer->Controls->Add(this->ninethFloorDownBtn);
			this->floorContainer->Controls->Add(this->label6);
			this->floorContainer->Controls->Add(this->eighthFloorDownBtn);
			this->floorContainer->Controls->Add(this->sixthFloorDownBtn);
			this->floorContainer->Controls->Add(this->secondFloorDownBtn);
			this->floorContainer->Controls->Add(this->fourthFloorDownBtn);
			this->floorContainer->Controls->Add(this->eighthFloorUpBtn);
			this->floorContainer->Controls->Add(this->seventhFloorDownBtn);
			this->floorContainer->Controls->Add(this->fifthFloorDownBtn);
			this->floorContainer->Controls->Add(this->thirdFloorDownBtn);
			this->floorContainer->Controls->Add(this->label1);
			this->floorContainer->Controls->Add(this->firstFloorDownBtn);
			this->floorContainer->Controls->Add(this->sixthFloorUpBtn);
			this->floorContainer->Controls->Add(this->label2);
			this->floorContainer->Controls->Add(this->fourthFloorUpBtn);
			this->floorContainer->Controls->Add(this->secondFloorUpBtn);
			this->floorContainer->Controls->Add(this->label5);
			this->floorContainer->Controls->Add(this->gFloorUpBtn);
			this->floorContainer->Controls->Add(this->label3);
			this->floorContainer->Controls->Add(this->seventhFloorUpBtn);
			this->floorContainer->Controls->Add(this->groundfloorLabel);
			this->floorContainer->Controls->Add(this->label7);
			this->floorContainer->Controls->Add(this->thirdFloorUpBtn);
			this->floorContainer->Controls->Add(this->fifthFloorUpBtn);
			this->floorContainer->Controls->Add(this->label4);
			this->floorContainer->Controls->Add(this->label8);
			this->floorContainer->Controls->Add(this->firstFloorUpBtn);
			this->floorContainer->Controls->Add(this->floor1);
			this->floorContainer->ForeColor = System::Drawing::SystemColors::ControlText;
			this->floorContainer->Location = System::Drawing::Point(12, 12);
			this->floorContainer->Name = L"floorContainer";
			this->floorContainer->Size = System::Drawing::Size(230, 443);
			this->floorContainer->TabIndex = 0;
			this->floorContainer->TabStop = false;
			this->floorContainer->Text = L"Floor Elevator Buttons";
			// 
			// thenthFloorDownBtn
			// 
			this->thenthFloorDownBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"thenthFloorDownBtn.BackgroundImage")));
			this->thenthFloorDownBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->thenthFloorDownBtn->Location = System::Drawing::Point(156, 46);
			this->thenthFloorDownBtn->Name = L"thenthFloorDownBtn";
			this->thenthFloorDownBtn->Size = System::Drawing::Size(42, 29);
			this->thenthFloorDownBtn->TabIndex = 45;
			this->thenthFloorDownBtn->Tag = L"10,Down";
			this->thenthFloorDownBtn->UseVisualStyleBackColor = true;
			this->thenthFloorDownBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(34, 54);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 13);
			this->label9->TabIndex = 44;
			this->label9->Text = L"10nt Floor";
			// 
			// ninethFloorUpBtn
			// 
			this->ninethFloorUpBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ninethFloorUpBtn.BackgroundImage")));
			this->ninethFloorUpBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ninethFloorUpBtn->Location = System::Drawing::Point(94, 82);
			this->ninethFloorUpBtn->Name = L"ninethFloorUpBtn";
			this->ninethFloorUpBtn->Size = System::Drawing::Size(42, 29);
			this->ninethFloorUpBtn->TabIndex = 40;
			this->ninethFloorUpBtn->Tag = L"9,Up";
			this->ninethFloorUpBtn->UseVisualStyleBackColor = true;
			this->ninethFloorUpBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// ninethFloorDownBtn
			// 
			this->ninethFloorDownBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ninethFloorDownBtn.BackgroundImage")));
			this->ninethFloorDownBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ninethFloorDownBtn->Location = System::Drawing::Point(156, 82);
			this->ninethFloorDownBtn->Name = L"ninethFloorDownBtn";
			this->ninethFloorDownBtn->Size = System::Drawing::Size(42, 29);
			this->ninethFloorDownBtn->TabIndex = 39;
			this->ninethFloorDownBtn->Tag = L"9,Down";
			this->ninethFloorDownBtn->UseVisualStyleBackColor = true;
			this->ninethFloorDownBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(40, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 37;
			this->label6->Text = L"9th Floor";
			// 
			// eighthFloorDownBtn
			// 
			this->eighthFloorDownBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eighthFloorDownBtn.BackgroundImage")));
			this->eighthFloorDownBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->eighthFloorDownBtn->Location = System::Drawing::Point(156, 117);
			this->eighthFloorDownBtn->Name = L"eighthFloorDownBtn";
			this->eighthFloorDownBtn->Size = System::Drawing::Size(42, 29);
			this->eighthFloorDownBtn->TabIndex = 32;
			this->eighthFloorDownBtn->Tag = L"8,Down";
			this->eighthFloorDownBtn->UseVisualStyleBackColor = true;
			this->eighthFloorDownBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// sixthFloorDownBtn
			// 
			this->sixthFloorDownBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sixthFloorDownBtn.BackgroundImage")));
			this->sixthFloorDownBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->sixthFloorDownBtn->Location = System::Drawing::Point(156, 186);
			this->sixthFloorDownBtn->Name = L"sixthFloorDownBtn";
			this->sixthFloorDownBtn->Size = System::Drawing::Size(42, 29);
			this->sixthFloorDownBtn->TabIndex = 33;
			this->sixthFloorDownBtn->Tag = L"6,Down";
			this->sixthFloorDownBtn->UseVisualStyleBackColor = true;
			this->sixthFloorDownBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// secondFloorDownBtn
			// 
			this->secondFloorDownBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondFloorDownBtn.BackgroundImage")));
			this->secondFloorDownBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->secondFloorDownBtn->Location = System::Drawing::Point(156, 324);
			this->secondFloorDownBtn->Name = L"secondFloorDownBtn";
			this->secondFloorDownBtn->Size = System::Drawing::Size(42, 29);
			this->secondFloorDownBtn->TabIndex = 18;
			this->secondFloorDownBtn->Tag = L"2,Down";
			this->secondFloorDownBtn->UseVisualStyleBackColor = true;
			this->secondFloorDownBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// fourthFloorDownBtn
			// 
			this->fourthFloorDownBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fourthFloorDownBtn.BackgroundImage")));
			this->fourthFloorDownBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->fourthFloorDownBtn->Location = System::Drawing::Point(156, 255);
			this->fourthFloorDownBtn->Name = L"fourthFloorDownBtn";
			this->fourthFloorDownBtn->Size = System::Drawing::Size(42, 29);
			this->fourthFloorDownBtn->TabIndex = 24;
			this->fourthFloorDownBtn->Tag = L"4,Down";
			this->fourthFloorDownBtn->UseVisualStyleBackColor = true;
			this->fourthFloorDownBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// eighthFloorUpBtn
			// 
			this->eighthFloorUpBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eighthFloorUpBtn.BackgroundImage")));
			this->eighthFloorUpBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->eighthFloorUpBtn->Location = System::Drawing::Point(94, 117);
			this->eighthFloorUpBtn->Name = L"eighthFloorUpBtn";
			this->eighthFloorUpBtn->Size = System::Drawing::Size(42, 29);
			this->eighthFloorUpBtn->TabIndex = 30;
			this->eighthFloorUpBtn->Tag = L"8,Up";
			this->eighthFloorUpBtn->UseVisualStyleBackColor = true;
			this->eighthFloorUpBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// seventhFloorDownBtn
			// 
			this->seventhFloorDownBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seventhFloorDownBtn.BackgroundImage")));
			this->seventhFloorDownBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->seventhFloorDownBtn->Location = System::Drawing::Point(156, 151);
			this->seventhFloorDownBtn->Name = L"seventhFloorDownBtn";
			this->seventhFloorDownBtn->Size = System::Drawing::Size(42, 29);
			this->seventhFloorDownBtn->TabIndex = 27;
			this->seventhFloorDownBtn->Tag = L"7,Down";
			this->seventhFloorDownBtn->UseVisualStyleBackColor = true;
			this->seventhFloorDownBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// fifthFloorDownBtn
			// 
			this->fifthFloorDownBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fifthFloorDownBtn.BackgroundImage")));
			this->fifthFloorDownBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->fifthFloorDownBtn->Location = System::Drawing::Point(156, 220);
			this->fifthFloorDownBtn->Name = L"fifthFloorDownBtn";
			this->fifthFloorDownBtn->Size = System::Drawing::Size(42, 29);
			this->fifthFloorDownBtn->TabIndex = 21;
			this->fifthFloorDownBtn->Tag = L"5,Down";
			this->fifthFloorDownBtn->UseVisualStyleBackColor = true;
			this->fifthFloorDownBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// thirdFloorDownBtn
			// 
			this->thirdFloorDownBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"thirdFloorDownBtn.BackgroundImage")));
			this->thirdFloorDownBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->thirdFloorDownBtn->Location = System::Drawing::Point(156, 289);
			this->thirdFloorDownBtn->Name = L"thirdFloorDownBtn";
			this->thirdFloorDownBtn->Size = System::Drawing::Size(42, 29);
			this->thirdFloorDownBtn->TabIndex = 12;
			this->thirdFloorDownBtn->Tag = L"3,Down";
			this->thirdFloorDownBtn->UseVisualStyleBackColor = true;
			this->thirdFloorDownBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 28;
			this->label1->Text = L"8th Floor";
			// 
			// firstFloorDownBtn
			// 
			this->firstFloorDownBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstFloorDownBtn.BackgroundImage")));
			this->firstFloorDownBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->firstFloorDownBtn->Location = System::Drawing::Point(156, 358);
			this->firstFloorDownBtn->Name = L"firstFloorDownBtn";
			this->firstFloorDownBtn->Size = System::Drawing::Size(42, 29);
			this->firstFloorDownBtn->TabIndex = 6;
			this->firstFloorDownBtn->Tag = L"1,Down";
			this->firstFloorDownBtn->UseVisualStyleBackColor = true;
			this->firstFloorDownBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// sixthFloorUpBtn
			// 
			this->sixthFloorUpBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sixthFloorUpBtn.BackgroundImage")));
			this->sixthFloorUpBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->sixthFloorUpBtn->Location = System::Drawing::Point(94, 186);
			this->sixthFloorUpBtn->Name = L"sixthFloorUpBtn";
			this->sixthFloorUpBtn->Size = System::Drawing::Size(42, 29);
			this->sixthFloorUpBtn->TabIndex = 31;
			this->sixthFloorUpBtn->Tag = L"6,Up";
			this->sixthFloorUpBtn->UseVisualStyleBackColor = true;
			this->sixthFloorUpBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 263);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"4th Floor";
			// 
			// fourthFloorUpBtn
			// 
			this->fourthFloorUpBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fourthFloorUpBtn.BackgroundImage")));
			this->fourthFloorUpBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->fourthFloorUpBtn->Location = System::Drawing::Point(94, 255);
			this->fourthFloorUpBtn->Name = L"fourthFloorUpBtn";
			this->fourthFloorUpBtn->Size = System::Drawing::Size(42, 29);
			this->fourthFloorUpBtn->TabIndex = 23;
			this->fourthFloorUpBtn->Tag = L"4,Up";
			this->fourthFloorUpBtn->UseVisualStyleBackColor = true;
			this->fourthFloorUpBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// secondFloorUpBtn
			// 
			this->secondFloorUpBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondFloorUpBtn.BackgroundImage")));
			this->secondFloorUpBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->secondFloorUpBtn->Location = System::Drawing::Point(94, 324);
			this->secondFloorUpBtn->Name = L"secondFloorUpBtn";
			this->secondFloorUpBtn->Size = System::Drawing::Size(42, 29);
			this->secondFloorUpBtn->TabIndex = 16;
			this->secondFloorUpBtn->Tag = L"2,Up";
			this->secondFloorUpBtn->UseVisualStyleBackColor = true;
			this->secondFloorUpBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 13);
			this->label5->TabIndex = 29;
			this->label5->Text = L"6th Floor";
			// 
			// gFloorUpBtn
			// 
			this->gFloorUpBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gFloorUpBtn.BackgroundImage")));
			this->gFloorUpBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->gFloorUpBtn->Location = System::Drawing::Point(94, 393);
			this->gFloorUpBtn->Name = L"gFloorUpBtn";
			this->gFloorUpBtn->Size = System::Drawing::Size(42, 29);
			this->gFloorUpBtn->TabIndex = 8;
			this->gFloorUpBtn->Tag = L"0,Up";
			this->gFloorUpBtn->UseVisualStyleBackColor = true;
			this->gFloorUpBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 332);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"2nd Floor";
			// 
			// seventhFloorUpBtn
			// 
			this->seventhFloorUpBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seventhFloorUpBtn.BackgroundImage")));
			this->seventhFloorUpBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->seventhFloorUpBtn->Location = System::Drawing::Point(94, 151);
			this->seventhFloorUpBtn->Name = L"seventhFloorUpBtn";
			this->seventhFloorUpBtn->Size = System::Drawing::Size(42, 29);
			this->seventhFloorUpBtn->TabIndex = 26;
			this->seventhFloorUpBtn->Tag = L"7,Up";
			this->seventhFloorUpBtn->UseVisualStyleBackColor = true;
			this->seventhFloorUpBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// groundfloorLabel
			// 
			this->groundfloorLabel->AutoSize = true;
			this->groundfloorLabel->Location = System::Drawing::Point(20, 401);
			this->groundfloorLabel->Name = L"groundfloorLabel";
			this->groundfloorLabel->Size = System::Drawing::Size(68, 13);
			this->groundfloorLabel->TabIndex = 7;
			this->groundfloorLabel->Text = L"Ground Floor";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(40, 159);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"7th Floor";
			// 
			// thirdFloorUpBtn
			// 
			this->thirdFloorUpBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"thirdFloorUpBtn.BackgroundImage")));
			this->thirdFloorUpBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->thirdFloorUpBtn->Location = System::Drawing::Point(94, 289);
			this->thirdFloorUpBtn->Name = L"thirdFloorUpBtn";
			this->thirdFloorUpBtn->Size = System::Drawing::Size(42, 29);
			this->thirdFloorUpBtn->TabIndex = 11;
			this->thirdFloorUpBtn->Tag = L"3,Up";
			this->thirdFloorUpBtn->UseVisualStyleBackColor = true;
			this->thirdFloorUpBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// fifthFloorUpBtn
			// 
			this->fifthFloorUpBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fifthFloorUpBtn.BackgroundImage")));
			this->fifthFloorUpBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->fifthFloorUpBtn->Location = System::Drawing::Point(94, 220);
			this->fifthFloorUpBtn->Name = L"fifthFloorUpBtn";
			this->fifthFloorUpBtn->Size = System::Drawing::Size(42, 29);
			this->fifthFloorUpBtn->TabIndex = 20;
			this->fifthFloorUpBtn->Tag = L"5,Up";
			this->fifthFloorUpBtn->UseVisualStyleBackColor = true;
			this->fifthFloorUpBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 297);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"3rd Floor";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(41, 228);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"5th Floor";
			// 
			// firstFloorUpBtn
			// 
			this->firstFloorUpBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstFloorUpBtn.BackgroundImage")));
			this->firstFloorUpBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->firstFloorUpBtn->Location = System::Drawing::Point(94, 358);
			this->firstFloorUpBtn->Name = L"firstFloorUpBtn";
			this->firstFloorUpBtn->Size = System::Drawing::Size(42, 29);
			this->firstFloorUpBtn->TabIndex = 2;
			this->firstFloorUpBtn->Tag = L"1,Up";
			this->firstFloorUpBtn->UseVisualStyleBackColor = true;
			this->firstFloorUpBtn->Click += gcnew System::EventHandler(this, &Elevator::summonElevator);
			// 
			// floor1
			// 
			this->floor1->AutoSize = true;
			this->floor1->Location = System::Drawing::Point(41, 366);
			this->floor1->Name = L"floor1";
			this->floor1->Size = System::Drawing::Size(47, 13);
			this->floor1->TabIndex = 0;
			this->floor1->Text = L"1st Floor";
			// 
			// Elevator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(903, 584);
			this->Controls->Add(this->floorContainer);
			this->Name = L"Elevator";
			this->Text = L"Elevator";
			this->Load += gcnew System::EventHandler(this, &Elevator::Elevator_Load);
			this->floorContainer->ResumeLayout(false);
			this->floorContainer->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: ElevatorMotor::Direction getDirection(String^ direction)
	{
		if (direction == "Up")
		{
			return ElevatorMotor::Direction::Up;
		}
		if (direction == "Down") 
		{
			return ElevatorMotor::Direction::Down;
		}
		else 
		{
			return ElevatorMotor::Direction::None;
		}
	}
	private: ElevatorController* elevatorController;

	private: System::Void Elevator_Load(System::Object^ sender, System::EventArgs^ e) {
		// Initialize the elevator controller or any other setup needed
		elevatorController = new ElevatorController(new ElevatorMotor());
	}

	private: System::Void summonElevator(System::Object^ sender, System::EventArgs^ e) 
	{
		
		Button^ button = dynamic_cast<Button^>(sender);
		String^ tag = button->Tag->ToString();
		cli::array<String^>^ parts = tag->Split(',');
		if (parts->Length == 2)
		{
			int floor = Convert::ToInt32(parts[0]);
			//String^ direction = parts[1];

			ElevatorMotor::Direction direction = getDirection(parts[1]);
			// Call the elevator motor logic here
			// Example: _elevatorMotor->floorButtonPushed(floor, direction);
			// For demonstration, just show a message box
			
			elevatorController->summonButtonPushed(floor, direction);
			//MessageBox::Show("Button pressed for floor: " + floor + " Direction: " + direction);
		}
		else
		{
			MessageBox::Show("Invalid button tag format.");
		}
		
	}
};
}

