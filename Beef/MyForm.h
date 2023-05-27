#pragma once
#include "Terminal.h"
#include <msclr\marshal_cppstd.h>
#include <ctime>


namespace controls {
	DataBus s;
	Terminal Panel(&s);
	bool automode;
}



namespace Beef {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{

	

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ MonitorPanel;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ EnterButton;

	private: System::Windows::Forms::TextBox^ commandentry;


	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ ClearButton;

	private: System::Windows::Forms::TextBox^ LogConsole;
	private: System::Windows::Forms::VScrollBar^ LogScroll;
	private: System::Windows::Forms::TextBox^ Tipbox;


	private: System::Windows::Forms::Label^ WaterTempMonitor;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ AirTempMonitor;
	private: System::Windows::Forms::Label^ FloorTempMonitor;
	private: System::Windows::Forms::Label^ HumidityMonitor;
	private: System::Windows::Forms::Label^ VentRoom1Monitor;
	private: System::Windows::Forms::Label^ VentRoom2Monitor;
	private: System::Windows::Forms::Label^ VentBathMonitor;
	private: System::Windows::Forms::Label^ VentKitchenMonitor;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ AirTempPanel;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ WaterTempPanel;
	private: System::Windows::Forms::Label^ HumidityPanel;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ FloorTempPanel;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ PowerCostMonitor;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ AutoButton;
	private: System::Windows::Forms::Label^ AutoHumidityPanel;
	private: System::Windows::Forms::Label^ AutoFloorPanel;
	private: System::Windows::Forms::Label^ AutoAirPanel;
	private: System::Windows::Forms::Label^ AutoWaterPanel;
	private: System::Windows::Forms::Label^ ShutDownLabel;
	private: System::Windows::Forms::Label^ FilterMonitorPanel;
	private: System::Windows::Forms::Label^ label3;













	private:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ misc1;
			System::Windows::Forms::Label^ misc2;
			System::Windows::Forms::Label^ misc3;
			System::Windows::Forms::Label^ misc4;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->ShutDownLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->VentRoom1Monitor = (gcnew System::Windows::Forms::Label());
			this->VentRoom2Monitor = (gcnew System::Windows::Forms::Label());
			this->VentBathMonitor = (gcnew System::Windows::Forms::Label());
			this->VentKitchenMonitor = (gcnew System::Windows::Forms::Label());
			this->HumidityMonitor = (gcnew System::Windows::Forms::Label());
			this->FloorTempMonitor = (gcnew System::Windows::Forms::Label());
			this->AirTempMonitor = (gcnew System::Windows::Forms::Label());
			this->WaterTempMonitor = (gcnew System::Windows::Forms::Label());
			this->MonitorPanel = (gcnew System::Windows::Forms::GroupBox());
			this->FilterMonitorPanel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->AutoHumidityPanel = (gcnew System::Windows::Forms::Label());
			this->AutoFloorPanel = (gcnew System::Windows::Forms::Label());
			this->AutoAirPanel = (gcnew System::Windows::Forms::Label());
			this->AutoWaterPanel = (gcnew System::Windows::Forms::Label());
			this->PowerCostMonitor = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->HumidityPanel = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->FloorTempPanel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->AirTempPanel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->WaterTempPanel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->AutoButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->EnterButton = (gcnew System::Windows::Forms::Button());
			this->commandentry = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->Tipbox = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->LogScroll = (gcnew System::Windows::Forms::VScrollBar());
			this->LogConsole = (gcnew System::Windows::Forms::TextBox());
			misc1 = (gcnew System::Windows::Forms::Label());
			misc2 = (gcnew System::Windows::Forms::Label());
			misc3 = (gcnew System::Windows::Forms::Label());
			misc4 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->MonitorPanel->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// misc1
			// 
			misc1->AutoSize = true;
			misc1->ForeColor = System::Drawing::Color::LightCoral;
			misc1->Location = System::Drawing::Point(93, 98);
			misc1->Name = L"misc1";
			misc1->Size = System::Drawing::Size(19, 13);
			misc1->TabIndex = 6;
			misc1->Text = L"🔘";
			// 
			// misc2
			// 
			misc2->AutoSize = true;
			misc2->ForeColor = System::Drawing::Color::LightCoral;
			misc2->Location = System::Drawing::Point(197, 88);
			misc2->Name = L"misc2";
			misc2->Size = System::Drawing::Size(19, 13);
			misc2->TabIndex = 7;
			misc2->Text = L"🔘";
			// 
			// misc3
			// 
			misc3->AutoSize = true;
			misc3->ForeColor = System::Drawing::Color::LightCoral;
			misc3->Location = System::Drawing::Point(281, 88);
			misc3->Name = L"misc3";
			misc3->Size = System::Drawing::Size(19, 13);
			misc3->TabIndex = 8;
			misc3->Text = L"🔘";
			// 
			// misc4
			// 
			misc4->AutoSize = true;
			misc4->ForeColor = System::Drawing::Color::LightCoral;
			misc4->Location = System::Drawing::Point(421, 16);
			misc4->Name = L"misc4";
			misc4->Size = System::Drawing::Size(19, 13);
			misc4->TabIndex = 9;
			misc4->Text = L"🔘";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(781, 550);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->ShutDownLabel);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->MonitorPanel);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(773, 524);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Управление";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// ShutDownLabel
			// 
			this->ShutDownLabel->AutoSize = true;
			this->ShutDownLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ShutDownLabel->ForeColor = System::Drawing::Color::Transparent;
			this->ShutDownLabel->Location = System::Drawing::Point(359, 40);
			this->ShutDownLabel->Name = L"ShutDownLabel";
			this->ShutDownLabel->Size = System::Drawing::Size(323, 50);
			this->ShutDownLabel->TabIndex = 4;
			this->ShutDownLabel->Text = L"Работа приостановлена\r\nнажмите, чтобы продолжить";
			this->ShutDownLabel->Click += gcnew System::EventHandler(this, &MyForm::ShutDownLabel_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->VentRoom1Monitor);
			this->panel1->Controls->Add(this->VentRoom2Monitor);
			this->panel1->Controls->Add(this->VentBathMonitor);
			this->panel1->Controls->Add(this->VentKitchenMonitor);
			this->panel1->Controls->Add(misc4);
			this->panel1->Controls->Add(misc3);
			this->panel1->Controls->Add(misc2);
			this->panel1->Controls->Add(misc1);
			this->panel1->Controls->Add(this->HumidityMonitor);
			this->panel1->Controls->Add(this->FloorTempMonitor);
			this->panel1->Controls->Add(this->AirTempMonitor);
			this->panel1->Controls->Add(this->WaterTempMonitor);
			this->panel1->Location = System::Drawing::Point(295, 114);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(465, 342);
			this->panel1->TabIndex = 3;
			// 
			// VentRoom1Monitor
			// 
			this->VentRoom1Monitor->AutoSize = true;
			this->VentRoom1Monitor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->VentRoom1Monitor->ForeColor = System::Drawing::Color::Crimson;
			this->VentRoom1Monitor->Location = System::Drawing::Point(161, 120);
			this->VentRoom1Monitor->Name = L"VentRoom1Monitor";
			this->VentRoom1Monitor->Size = System::Drawing::Size(35, 25);
			this->VentRoom1Monitor->TabIndex = 12;
			this->VentRoom1Monitor->Text = L"🏐\r\n";
			// 
			// VentRoom2Monitor
			// 
			this->VentRoom2Monitor->AutoSize = true;
			this->VentRoom2Monitor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->VentRoom2Monitor->ForeColor = System::Drawing::Color::Crimson;
			this->VentRoom2Monitor->Location = System::Drawing::Point(287, 120);
			this->VentRoom2Monitor->Name = L"VentRoom2Monitor";
			this->VentRoom2Monitor->Size = System::Drawing::Size(35, 25);
			this->VentRoom2Monitor->TabIndex = 11;
			this->VentRoom2Monitor->Text = L"🏐\r\n";
			// 
			// VentBathMonitor
			// 
			this->VentBathMonitor->AutoSize = true;
			this->VentBathMonitor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->VentBathMonitor->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->VentBathMonitor->Location = System::Drawing::Point(419, 98);
			this->VentBathMonitor->Name = L"VentBathMonitor";
			this->VentBathMonitor->Size = System::Drawing::Size(35, 25);
			this->VentBathMonitor->TabIndex = 10;
			this->VentBathMonitor->Text = L"🏐\r\n";
			// 
			// VentKitchenMonitor
			// 
			this->VentKitchenMonitor->AutoSize = true;
			this->VentKitchenMonitor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->VentKitchenMonitor->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->VentKitchenMonitor->Location = System::Drawing::Point(438, 184);
			this->VentKitchenMonitor->Name = L"VentKitchenMonitor";
			this->VentKitchenMonitor->Size = System::Drawing::Size(35, 25);
			this->VentKitchenMonitor->TabIndex = 1;
			this->VentKitchenMonitor->Text = L"🏐\r\n";
			// 
			// HumidityMonitor
			// 
			this->HumidityMonitor->AutoSize = true;
			this->HumidityMonitor->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HumidityMonitor->ForeColor = System::Drawing::Color::Indigo;
			this->HumidityMonitor->Location = System::Drawing::Point(269, 58);
			this->HumidityMonitor->Name = L"HumidityMonitor";
			this->HumidityMonitor->Size = System::Drawing::Size(55, 30);
			this->HumidityMonitor->TabIndex = 5;
			this->HumidityMonitor->Text = L"54%";
			// 
			// FloorTempMonitor
			// 
			this->FloorTempMonitor->AutoSize = true;
			this->FloorTempMonitor->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FloorTempMonitor->ForeColor = System::Drawing::Color::SaddleBrown;
			this->FloorTempMonitor->Location = System::Drawing::Point(82, 68);
			this->FloorTempMonitor->Name = L"FloorTempMonitor";
			this->FloorTempMonitor->Size = System::Drawing::Size(45, 30);
			this->FloorTempMonitor->TabIndex = 4;
			this->FloorTempMonitor->Text = L"26°";
			// 
			// AirTempMonitor
			// 
			this->AirTempMonitor->AutoSize = true;
			this->AirTempMonitor->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AirTempMonitor->ForeColor = System::Drawing::Color::Olive;
			this->AirTempMonitor->Location = System::Drawing::Point(184, 58);
			this->AirTempMonitor->Name = L"AirTempMonitor";
			this->AirTempMonitor->Size = System::Drawing::Size(61, 30);
			this->AirTempMonitor->TabIndex = 3;
			this->AirTempMonitor->Text = L"23.7°\r\n";
			// 
			// WaterTempMonitor
			// 
			this->WaterTempMonitor->BackColor = System::Drawing::Color::Transparent;
			this->WaterTempMonitor->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WaterTempMonitor->ForeColor = System::Drawing::Color::DarkBlue;
			this->WaterTempMonitor->Location = System::Drawing::Point(365, 16);
			this->WaterTempMonitor->Margin = System::Windows::Forms::Padding(0);
			this->WaterTempMonitor->Name = L"WaterTempMonitor";
			this->WaterTempMonitor->Size = System::Drawing::Size(75, 37);
			this->WaterTempMonitor->TabIndex = 2;
			this->WaterTempMonitor->Text = L"19.5°";
			// 
			// MonitorPanel
			// 
			this->MonitorPanel->Controls->Add(this->FilterMonitorPanel);
			this->MonitorPanel->Controls->Add(this->label3);
			this->MonitorPanel->Controls->Add(this->AutoHumidityPanel);
			this->MonitorPanel->Controls->Add(this->AutoFloorPanel);
			this->MonitorPanel->Controls->Add(this->AutoAirPanel);
			this->MonitorPanel->Controls->Add(this->AutoWaterPanel);
			this->MonitorPanel->Controls->Add(this->PowerCostMonitor);
			this->MonitorPanel->Controls->Add(this->label10);
			this->MonitorPanel->Controls->Add(this->HumidityPanel);
			this->MonitorPanel->Controls->Add(this->label8);
			this->MonitorPanel->Controls->Add(this->FloorTempPanel);
			this->MonitorPanel->Controls->Add(this->label7);
			this->MonitorPanel->Controls->Add(this->AirTempPanel);
			this->MonitorPanel->Controls->Add(this->label5);
			this->MonitorPanel->Controls->Add(this->WaterTempPanel);
			this->MonitorPanel->Controls->Add(this->label2);
			this->MonitorPanel->Controls->Add(this->label1);
			this->MonitorPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MonitorPanel->Location = System::Drawing::Point(24, 40);
			this->MonitorPanel->Name = L"MonitorPanel";
			this->MonitorPanel->Size = System::Drawing::Size(258, 298);
			this->MonitorPanel->TabIndex = 1;
			this->MonitorPanel->TabStop = false;
			this->MonitorPanel->Text = L"Состояние";
			// 
			// FilterMonitorPanel
			// 
			this->FilterMonitorPanel->BackColor = System::Drawing::Color::Transparent;
			this->FilterMonitorPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FilterMonitorPanel->ForeColor = System::Drawing::Color::Crimson;
			this->FilterMonitorPanel->Location = System::Drawing::Point(186, 207);
			this->FilterMonitorPanel->Margin = System::Windows::Forms::Padding(0);
			this->FilterMonitorPanel->Name = L"FilterMonitorPanel";
			this->FilterMonitorPanel->Size = System::Drawing::Size(54, 27);
			this->FilterMonitorPanel->TabIndex = 27;
			this->FilterMonitorPanel->Text = L"Выкл\r\n\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(2, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 21);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Фильтрация воздуха:";
			// 
			// AutoHumidityPanel
			// 
			this->AutoHumidityPanel->AutoSize = true;
			this->AutoHumidityPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AutoHumidityPanel->ForeColor = System::Drawing::Color::IndianRed;
			this->AutoHumidityPanel->Location = System::Drawing::Point(171, 172);
			this->AutoHumidityPanel->Name = L"AutoHumidityPanel";
			this->AutoHumidityPanel->Size = System::Drawing::Size(36, 17);
			this->AutoHumidityPanel->TabIndex = 25;
			this->AutoHumidityPanel->Text = L"авто";
			// 
			// AutoFloorPanel
			// 
			this->AutoFloorPanel->AutoSize = true;
			this->AutoFloorPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AutoFloorPanel->ForeColor = System::Drawing::Color::IndianRed;
			this->AutoFloorPanel->Location = System::Drawing::Point(171, 103);
			this->AutoFloorPanel->Name = L"AutoFloorPanel";
			this->AutoFloorPanel->Size = System::Drawing::Size(36, 17);
			this->AutoFloorPanel->TabIndex = 24;
			this->AutoFloorPanel->Text = L"авто";
			// 
			// AutoAirPanel
			// 
			this->AutoAirPanel->AutoSize = true;
			this->AutoAirPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AutoAirPanel->ForeColor = System::Drawing::Color::IndianRed;
			this->AutoAirPanel->Location = System::Drawing::Point(171, 78);
			this->AutoAirPanel->Name = L"AutoAirPanel";
			this->AutoAirPanel->Size = System::Drawing::Size(36, 17);
			this->AutoAirPanel->TabIndex = 23;
			this->AutoAirPanel->Text = L"авто";
			// 
			// AutoWaterPanel
			// 
			this->AutoWaterPanel->AutoSize = true;
			this->AutoWaterPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AutoWaterPanel->ForeColor = System::Drawing::Color::IndianRed;
			this->AutoWaterPanel->Location = System::Drawing::Point(171, 54);
			this->AutoWaterPanel->Name = L"AutoWaterPanel";
			this->AutoWaterPanel->Size = System::Drawing::Size(36, 17);
			this->AutoWaterPanel->TabIndex = 22;
			this->AutoWaterPanel->Text = L"авто";
			// 
			// PowerCostMonitor
			// 
			this->PowerCostMonitor->AutoSize = true;
			this->PowerCostMonitor->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PowerCostMonitor->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->PowerCostMonitor->Location = System::Drawing::Point(21, 263);
			this->PowerCostMonitor->Name = L"PowerCostMonitor";
			this->PowerCostMonitor->Size = System::Drawing::Size(54, 20);
			this->PowerCostMonitor->TabIndex = 21;
			this->PowerCostMonitor->Text = L"label11";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(6, 237);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(183, 21);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Потребление энергии:";
			// 
			// HumidityPanel
			// 
			this->HumidityPanel->BackColor = System::Drawing::Color::Transparent;
			this->HumidityPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HumidityPanel->ForeColor = System::Drawing::Color::Indigo;
			this->HumidityPanel->Location = System::Drawing::Point(77, 169);
			this->HumidityPanel->Margin = System::Windows::Forms::Padding(0);
			this->HumidityPanel->Name = L"HumidityPanel";
			this->HumidityPanel->Size = System::Drawing::Size(54, 27);
			this->HumidityPanel->TabIndex = 19;
			this->HumidityPanel->Text = L"54%\r\n";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(2, 148);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(159, 21);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Влажность воздуха:";
			// 
			// FloorTempPanel
			// 
			this->FloorTempPanel->BackColor = System::Drawing::Color::Transparent;
			this->FloorTempPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FloorTempPanel->ForeColor = System::Drawing::Color::SaddleBrown;
			this->FloorTempPanel->Location = System::Drawing::Point(77, 100);
			this->FloorTempPanel->Margin = System::Windows::Forms::Padding(0);
			this->FloorTempPanel->Name = L"FloorTempPanel";
			this->FloorTempPanel->Size = System::Drawing::Size(54, 27);
			this->FloorTempPanel->TabIndex = 17;
			this->FloorTempPanel->Text = L"26°";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(22, 103);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Пол";
			// 
			// AirTempPanel
			// 
			this->AirTempPanel->BackColor = System::Drawing::Color::Transparent;
			this->AirTempPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AirTempPanel->ForeColor = System::Drawing::Color::Olive;
			this->AirTempPanel->Location = System::Drawing::Point(86, 75);
			this->AirTempPanel->Margin = System::Windows::Forms::Padding(0);
			this->AirTempPanel->Name = L"AirTempPanel";
			this->AirTempPanel->Size = System::Drawing::Size(54, 27);
			this->AirTempPanel->TabIndex = 15;
			this->AirTempPanel->Text = L"23.7°";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(22, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 17);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Воздух";
			// 
			// WaterTempPanel
			// 
			this->WaterTempPanel->BackColor = System::Drawing::Color::Transparent;
			this->WaterTempPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WaterTempPanel->ForeColor = System::Drawing::Color::DarkBlue;
			this->WaterTempPanel->Location = System::Drawing::Point(66, 51);
			this->WaterTempPanel->Margin = System::Windows::Forms::Padding(0);
			this->WaterTempPanel->Name = L"WaterTempPanel";
			this->WaterTempPanel->Size = System::Drawing::Size(54, 27);
			this->WaterTempPanel->TabIndex = 13;
			this->WaterTempPanel->Text = L"19.5°";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(22, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Вода\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Температурные датчики:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->AutoButton);
			this->groupBox1->Controls->Add(this->ClearButton);
			this->groupBox1->Controls->Add(this->EnterButton);
			this->groupBox1->Controls->Add(this->commandentry);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(24, 344);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(258, 148);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод команд";
			// 
			// AutoButton
			// 
			this->AutoButton->BackColor = System::Drawing::Color::IndianRed;
			this->AutoButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->AutoButton->FlatAppearance->BorderColor = System::Drawing::Color::IndianRed;
			this->AutoButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AutoButton->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->AutoButton->Location = System::Drawing::Point(151, 96);
			this->AutoButton->Margin = System::Windows::Forms::Padding(0);
			this->AutoButton->Name = L"AutoButton";
			this->AutoButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->AutoButton->Size = System::Drawing::Size(89, 30);
			this->AutoButton->TabIndex = 3;
			this->AutoButton->Text = L"авто\r\n";
			this->AutoButton->UseMnemonic = false;
			this->AutoButton->UseVisualStyleBackColor = false;
			this->AutoButton->Click += gcnew System::EventHandler(this, &MyForm::AutoButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearButton->ForeColor = System::Drawing::Color::Firebrick;
			this->ClearButton->Location = System::Drawing::Point(220, 44);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(32, 29);
			this->ClearButton->TabIndex = 2;
			this->ClearButton->Text = L"X\r\n";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// EnterButton
			// 
			this->EnterButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EnterButton->ForeColor = System::Drawing::Color::SeaGreen;
			this->EnterButton->Location = System::Drawing::Point(6, 96);
			this->EnterButton->Name = L"EnterButton";
			this->EnterButton->Size = System::Drawing::Size(99, 30);
			this->EnterButton->TabIndex = 1;
			this->EnterButton->Text = L"выполнить";
			this->EnterButton->UseVisualStyleBackColor = true;
			this->EnterButton->Click += gcnew System::EventHandler(this, &MyForm::EnterButton_Click);
			// 
			// commandentry
			// 
			this->commandentry->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->commandentry->Location = System::Drawing::Point(6, 44);
			this->commandentry->Name = L"commandentry";
			this->commandentry->Size = System::Drawing::Size(208, 29);
			this->commandentry->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->Tipbox);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(773, 524);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Справка";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Tipbox
			// 
			this->Tipbox->AcceptsReturn = true;
			this->Tipbox->AcceptsTab = true;
			this->Tipbox->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Tipbox->Location = System::Drawing::Point(6, 6);
			this->Tipbox->Multiline = true;
			this->Tipbox->Name = L"Tipbox";
			this->Tipbox->ReadOnly = true;
			this->Tipbox->Size = System::Drawing::Size(761, 515);
			this->Tipbox->TabIndex = 0;
			this->Tipbox->Text = resources->GetString(L"Tipbox.Text");
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->LogScroll);
			this->tabPage3->Controls->Add(this->LogConsole);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(773, 524);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Журнал";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// LogScroll
			// 
			this->LogScroll->Location = System::Drawing::Point(740, 15);
			this->LogScroll->Name = L"LogScroll";
			this->LogScroll->Size = System::Drawing::Size(16, 486);
			this->LogScroll->TabIndex = 1;
			// 
			// LogConsole
			// 
			this->LogConsole->AcceptsReturn = true;
			this->LogConsole->AcceptsTab = true;
			this->LogConsole->Location = System::Drawing::Point(6, 6);
			this->LogConsole->Multiline = true;
			this->LogConsole->Name = L"LogConsole";
			this->LogConsole->ReadOnly = true;
			this->LogConsole->Size = System::Drawing::Size(761, 512);
			this->LogConsole->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 574);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Умный Дом";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->MonitorPanel->ResumeLayout(false);
			this->MonitorPanel->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	LogConsole->AppendText(__TIME__ + "  :  Начало сессии." + Environment::NewLine + Environment::NewLine);
	PowerCostMonitor->Text = powercost(controls::s).ToString() + " кВт";
	AutoWaterPanel->Text = controls::Panel.autowatertemp.ToString() + "°";
	AutoAirPanel->Text = controls::Panel.autoairtemp.ToString() + "°";
	AutoFloorPanel->Text = controls::Panel.autofloortemp.ToString() + "°";
	AutoHumidityPanel->Text = controls::Panel.autohumidity.ToString() + "%";;
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (controls::automode) return;
	String^ command = commandentry->Text;
	command = command->Replace("  ", " ");
	command = command->Replace(".", ",");
	command = command->ToLower();
	if (!command->Contains(" ")) {
		if (command == "exit") {
			commandentry->Clear();
			AutoButton->BackColor = Color::IndianRed;
			AutoWaterPanel->ForeColor = Color::IndianRed;
			AutoAirPanel->ForeColor = Color::IndianRed;
			AutoFloorPanel->ForeColor = Color::IndianRed;
			AutoHumidityPanel->ForeColor = Color::IndianRed;
			controls::automode = false;
			commandentry->Enabled = false;
			AutoButton->Enabled = false;
			EnterButton->Enabled = false;
			ShutDownLabel->ForeColor = Color::IndianRed;
			LogConsole->AppendText("> Работа программы приостановлена" + Environment::NewLine);
			return;
		}
		commandentry->Clear();
		LogConsole->AppendText("> Нераспознанная команда: " + command + Environment::NewLine);
		return;
	}
	
	String^ value;
	if (command->Split(' ')->Length == 3) {
		value = command->Split(' ')[command->Split(' ')->Length - 1];
		for (int i = 0; i < value->Length; i++) {
			if (!isdigit(value[i])) {
				LogConsole->AppendText("> Введен неверный / неподдерживаемый параметр: " + value + Environment::NewLine);
				commandentry->Clear();
				return;
			}
		}
		if (System::Convert::ToDouble(value) > 40){
			if (System::Convert::ToDouble(value) < 100 && command->Contains("hum")) {}
			else {
				LogConsole->AppendText("> Введен неверный / неподдерживаемый параметр: " + value + Environment::NewLine);
				commandentry->Clear();
				return;
			}	
		}
	}
	else value = "8192";
	String^ commandwithspace = command->Split(' ')[0] + " " + command->Split(' ')[1];
	command = command->Split(' ')[0] + command->Split(' ')[1];
	
	
	unsigned int cmdcode = (unsigned)command->GetHashCode();
	
	
	//LogConsole->AppendText("> Автоматический режим: Вкл" + Environment::NewLine);
	/*
	* 1N - water controls 
	* 2N - air controls 
	* 3N - floor controls 
	* 4N - humidity controls 
	* {1 : set, 2 : add, 3 : reduce}
	* 5N - vent controls {1 : kitchen, 2 : room1, 3 : room2, 4 : bath}
	* 6N - auto controls
	*/
	switch (controls::Panel.process(cmdcode, System::Convert::ToDouble(value))) {
	// water
	case 11:
		LogConsole->AppendText("> Установлена температура воды: " + value + "°" + Environment::NewLine);
		break;
	case 12:
		LogConsole->AppendText("> Добавлена температура воды: " + value + "°" + Environment::NewLine);
		break;
	case 13:
		LogConsole->AppendText("> Температура воды убавлена: " + value + "°" + Environment::NewLine);
		break;
	//air
	case 21:
		LogConsole->AppendText("> Установлена температура воздуха: " + value + "°" + Environment::NewLine);
		break;
	case 22:
		LogConsole->AppendText("> Добавлена температура воздуха: " + value + "°" + Environment::NewLine);
		break;
	case 23:
		LogConsole->AppendText("> Температура воздуха убавлена: " + value + "°" + Environment::NewLine);
		break;
	// floor
	case 31:
		LogConsole->AppendText("> Установлена температура пола: " + value + "°" + Environment::NewLine);
		break;
	case 32:
		LogConsole->AppendText("> Добавлена температура пола: " + value + "°" + Environment::NewLine);
		break;
	case 33:
		LogConsole->AppendText("> Температура пола убавлена: " + value + "°" + Environment::NewLine);
		break;
	// humidity
	case 41:
		LogConsole->AppendText("> Установлена влажность воздуха: " + value + "%" + Environment::NewLine);
		break;
	case 42:
		LogConsole->AppendText("> Добавлена влажность воздуха: " + value + "%" + Environment::NewLine);
		break;
	case 43:
		LogConsole->AppendText("> Убавлена влажность воздуха: " + value + "%" + Environment::NewLine);
		break;
	// vent
	case 51:
		if (controls::Panel.getventstatus(1)) VentKitchenMonitor->ForeColor = Color::DarkOliveGreen;
		else VentKitchenMonitor->ForeColor = Color::Crimson;
		LogConsole->AppendText("> Переключена вентиляция на кухне: " + (controls::Panel.getventstatus(1) ? "Вкл" : "Выкл") + Environment::NewLine);
		break;
	case 52:
		if (controls::Panel.getventstatus(2)) VentRoom1Monitor->ForeColor = Color::DarkOliveGreen;
		else VentRoom1Monitor->ForeColor = Color::Crimson;
		LogConsole->AppendText("> Переключена вентиляция в спальне: " + (controls::Panel.getventstatus(2) ? "Вкл" : "Выкл") + Environment::NewLine);
		break;
	case 53:
		if (controls::Panel.getventstatus(3)) VentRoom2Monitor->ForeColor = Color::DarkOliveGreen;
		else VentRoom2Monitor->ForeColor = Color::Crimson;
		LogConsole->AppendText("> Переключена вентиляция в спальне: " + (controls::Panel.getventstatus(3) ? "Вкл" : "Выкл") + Environment::NewLine);
		break;
	case 54:
		if (controls::Panel.getventstatus(4)) VentBathMonitor->ForeColor = Color::DarkOliveGreen;
		else VentBathMonitor->ForeColor = Color::Crimson;
		LogConsole->AppendText("> Переключена вентиляция в ванной: " + (controls::Panel.getventstatus(4) ? "Вкл" : "Выкл") + Environment::NewLine);
		break;
	case 55:
		if (controls::Panel.getventstatus(5)) { FilterMonitorPanel->ForeColor = Color::DarkOliveGreen; FilterMonitorPanel->Text = "Вкл"; }
		else {FilterMonitorPanel->ForeColor = Color::Crimson; FilterMonitorPanel->Text = "Выкл"; }
		LogConsole->AppendText("> Переключена система фильтрации воздуха: " + (controls::Panel.getventstatus(5) ? "Вкл" : "Выкл") + Environment::NewLine);
		break;
	// auto
	case 61:
		LogConsole->AppendText("> Авто-поддержание температуры воды: " + value + "°" + Environment::NewLine);
		AutoWaterPanel->Text = controls::Panel.autowatertemp.ToString() + "°";
		break;
	case 62:
		LogConsole->AppendText("> Авто-поддержание температуры воздуха: " + value + "°" + Environment::NewLine);
		AutoAirPanel->Text = controls::Panel.autoairtemp.ToString() + "°";
		break;
	case 63:
		LogConsole->AppendText("> Авто-поддержание температуры пола: " + value + "°" + Environment::NewLine);
		AutoFloorPanel->Text = controls::Panel.autofloortemp.ToString() + "°";
		break;
	case 64:
		LogConsole->AppendText("> Авто-поддержание влажности воздуха: " + value + "%" + Environment::NewLine);
		AutoHumidityPanel->Text = controls::Panel.autohumidity.ToString() + "%";
		break;
	case -1:
		LogConsole->AppendText("> Введен неверный / неподдерживаемый параметр: " + value + Environment::NewLine);
		break;

	default:
		LogConsole->AppendText("> Нераспознанная команда: " + commandwithspace + Environment::NewLine);
		break;
	}
	WaterTempMonitor->Text = (controls::Panel.getwatertemp()).ToString() + "°";
	WaterTempPanel->Text = WaterTempMonitor->Text;
	AirTempMonitor->Text = (controls::Panel.getairtemp()).ToString() + "°";
	AirTempPanel->Text = AirTempMonitor->Text;
	FloorTempMonitor->Text = (controls::Panel.getfloortemp()).ToString() + "°";
	FloorTempPanel->Text = FloorTempMonitor->Text;
	HumidityMonitor->Text = (controls::Panel.gethumidity()).ToString() + "%";
	HumidityPanel->Text = HumidityMonitor->Text;
	PowerCostMonitor->Text = powercost(controls::s).ToString() + " кВт";


	commandentry->Clear();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	commandentry->Text = "";
}
private: System::Void AutoButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!controls::automode) {
		AutoButton->BackColor = Color::ForestGreen;
		commandentry->ReadOnly = true;
		EnterButton->Enabled = false;
		commandentry->Clear();
		controls::automode = true;

		WaterTempPanel->Text = controls::Panel.autowatertemp.ToString() + "°";
		AirTempPanel->Text = controls::Panel.autoairtemp.ToString() + "°";
		FloorTempPanel->Text = controls::Panel.autofloortemp.ToString() + "°";
		HumidityPanel->Text = controls::Panel.autohumidity.ToString() + "%";
		AutoWaterPanel->ForeColor = Color::ForestGreen;
		AutoAirPanel->ForeColor = Color::ForestGreen;
		AutoFloorPanel->ForeColor = Color::ForestGreen;
		AutoHumidityPanel->ForeColor = Color::ForestGreen;
		
		LogConsole->AppendText("> Авто-режим включён" + Environment::NewLine);

	}
	else {
		AutoButton->BackColor = Color::IndianRed;
		AutoWaterPanel->ForeColor = Color::IndianRed;
		AutoAirPanel->ForeColor = Color::IndianRed;
		AutoFloorPanel->ForeColor = Color::IndianRed;
		AutoHumidityPanel->ForeColor = Color::IndianRed;

		commandentry->ReadOnly = false;
		EnterButton->Enabled = true;
		controls::automode = false;
		LogConsole->AppendText("> Авто-режим выключен" + Environment::NewLine);

	}
}
private: System::Void ShutDownLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	commandentry->Enabled = true;
	AutoButton->Enabled = true;
	EnterButton->Enabled = true;
	AutoButton->BackColor = Color::IndianRed;
	AutoWaterPanel->ForeColor = Color::IndianRed;
	AutoAirPanel->ForeColor = Color::IndianRed;
	AutoFloorPanel->ForeColor = Color::IndianRed;
	AutoHumidityPanel->ForeColor = Color::IndianRed;
	ShutDownLabel->ForeColor = Color::Transparent;
	LogConsole->AppendText("> Работа программы возобновлена" + Environment::NewLine);
	return;
}
};
}
