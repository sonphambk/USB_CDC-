#pragma once

namespace USBCDCGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Threading;
	using namespace System::Runtime::InteropServices;

	using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			array<Object^>^ port = SerialPort::GetPortNames();
			this->cbbox_Portname->Items->AddRange(port);
			this->cbbox_Baudrate->Items->Add("1200");//1200, 2400, 4800, 9600, 14400, 19200, 38400, 57600, 115200, 128000, and 256000
			this->cbbox_Baudrate->Items->Add("2400");
			this->cbbox_Baudrate->Items->Add("4800");
			this->cbbox_Baudrate->Items->Add("9600");
			this->cbbox_Baudrate->Items->Add("14400");
			this->cbbox_Baudrate->Items->Add("19200");
			this->cbbox_Baudrate->Items->Add("38400");//57600, 115200, 128000, and 256000
			this->cbbox_Baudrate->Items->Add("57600");
			this->cbbox_Baudrate->Items->Add("115200");
			this->cbbox_Baudrate->Items->Add("128000");
			this->cbbox_Baudrate->Items->Add("256000");
		}
	private: System::Windows::Forms::TextBox^  NumberbyteSend;
	public:

	public:


	private: System::Windows::Forms::Button^  Send_Data;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  listbox_receiver;
	private: System::Windows::Forms::TextBox^  numberbyteReceive;


	private: System::Windows::Forms::Button^  Receive_Data;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox4;

	private: System::Windows::Forms::TextBox^  textBox1;


	private: System::Windows::Forms::GroupBox^  groupBox3;





	public:
	public:
		SerialPort^ serialport = gcnew SerialPort();

		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btconnect;
	protected:
	private: System::Windows::Forms::ComboBox^  cbbox_Portname;
	private: System::Windows::Forms::ComboBox^  cbbox_Baudrate;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ProgressBar^  progressBar1;

	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btconnect = (gcnew System::Windows::Forms::Button());
			this->cbbox_Portname = (gcnew System::Windows::Forms::ComboBox());
			this->cbbox_Baudrate = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->NumberbyteSend = (gcnew System::Windows::Forms::TextBox());
			this->Send_Data = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listbox_receiver = (gcnew System::Windows::Forms::ListBox());
			this->numberbyteReceive = (gcnew System::Windows::Forms::TextBox());
			this->Receive_Data = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// btconnect
			// 
			this->btconnect->AutoSize = true;
			this->btconnect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btconnect->Location = System::Drawing::Point(66, 97);
			this->btconnect->Name = L"btconnect";
			this->btconnect->Size = System::Drawing::Size(102, 30);
			this->btconnect->TabIndex = 0;
			this->btconnect->Text = L"Connect";
			this->btconnect->UseVisualStyleBackColor = true;
			this->btconnect->Click += gcnew System::EventHandler(this, &MyForm::btconnect_Click);
			// 
			// cbbox_Portname
			// 
			this->cbbox_Portname->FormattingEnabled = true;
			this->cbbox_Portname->Location = System::Drawing::Point(94, 21);
			this->cbbox_Portname->Name = L"cbbox_Portname";
			this->cbbox_Portname->Size = System::Drawing::Size(121, 24);
			this->cbbox_Portname->TabIndex = 1;
			// 
			// cbbox_Baudrate
			// 
			this->cbbox_Baudrate->FormattingEnabled = true;
			this->cbbox_Baudrate->Location = System::Drawing::Point(94, 56);
			this->cbbox_Baudrate->Name = L"cbbox_Baudrate";
			this->cbbox_Baudrate->Size = System::Drawing::Size(121, 24);
			this->cbbox_Baudrate->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Port Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Baudrate";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(6, 148);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(163, 20);
			this->progressBar1->TabIndex = 5;
			// 
			// NumberbyteSend
			// 
			this->NumberbyteSend->Location = System::Drawing::Point(287, 180);
			this->NumberbyteSend->Multiline = true;
			this->NumberbyteSend->Name = L"NumberbyteSend";
			this->NumberbyteSend->Size = System::Drawing::Size(179, 23);
			this->NumberbyteSend->TabIndex = 7;
			// 
			// Send_Data
			// 
			this->Send_Data->AutoSize = true;
			this->Send_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Send_Data->Location = System::Drawing::Point(472, 170);
			this->Send_Data->Name = L"Send_Data";
			this->Send_Data->Size = System::Drawing::Size(107, 33);
			this->Send_Data->TabIndex = 8;
			this->Send_Data->Text = L"Send";
			this->Send_Data->UseVisualStyleBackColor = true;
			this->Send_Data->Click += gcnew System::EventHandler(this, &MyForm::Send_Data_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(284, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Number byte of send ";
			// 
			// listbox_receiver
			// 
			this->listbox_receiver->FormattingEnabled = true;
			this->listbox_receiver->Location = System::Drawing::Point(287, 219);
			this->listbox_receiver->Name = L"listbox_receiver";
			this->listbox_receiver->Size = System::Drawing::Size(292, 147);
			this->listbox_receiver->TabIndex = 10;
			// 
			// numberbyteReceive
			// 
			this->numberbyteReceive->Location = System::Drawing::Point(287, 382);
			this->numberbyteReceive->Multiline = true;
			this->numberbyteReceive->Name = L"numberbyteReceive";
			this->numberbyteReceive->Size = System::Drawing::Size(179, 23);
			this->numberbyteReceive->TabIndex = 11;
			// 
			// Receive_Data
			// 
			this->Receive_Data->AutoSize = true;
			this->Receive_Data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Receive_Data->Location = System::Drawing::Point(472, 372);
			this->Receive_Data->Name = L"Receive_Data";
			this->Receive_Data->Size = System::Drawing::Size(107, 33);
			this->Receive_Data->TabIndex = 12;
			this->Receive_Data->Text = L"Receiver";
			this->Receive_Data->UseVisualStyleBackColor = true;
			this->Receive_Data->Click += gcnew System::EventHandler(this, &MyForm::Receive_Data_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(284, 366);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Number byte of receive";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->progressBar1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->cbbox_Baudrate);
			this->groupBox1->Controls->Add(this->cbbox_Portname);
			this->groupBox1->Controls->Add(this->btconnect);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(11, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(253, 177);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Connect USB with PC";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(185, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 16);
			this->label5->TabIndex = 6;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(15, 30);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(60, 20);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"LED1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(89, 30);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(60, 20);
			this->checkBox2->TabIndex = 16;
			this->checkBox2->Text = L"LED2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(161, 30);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(60, 20);
			this->checkBox3->TabIndex = 17;
			this->checkBox3->Text = L"LED3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 195);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(252, 106);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Control Led";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(127, 66);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"OFF";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(33, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"ON";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(287, 13);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(292, 147);
			this->textBox3->TabIndex = 19;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(13, 30);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(60, 20);
			this->checkBox4->TabIndex = 20;
			this->checkBox4->Text = L"LED4";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 22);
			this->textBox1->TabIndex = 22;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->checkBox4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(14, 307);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(250, 72);
			this->groupBox3->TabIndex = 25;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Control PWM";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 416);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Receive_Data);
			this->Controls->Add(this->numberbyteReceive);
			this->Controls->Add(this->listbox_receiver);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Send_Data);
			this->Controls->Add(this->NumberbyteSend);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btconnect_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (btconnect->Text == "Connect")
		{
				this->serialport->PortName = this->cbbox_Portname->Text;
				this->serialport->BaudRate = Int32::Parse(this->cbbox_Baudrate->Text);
				this->serialport->Parity = Parity::None;
				this->serialport->StopBits = StopBits::One;
				this->serialport->DataBits = 8;
				this->serialport->Handshake = Handshake::None;
				this->serialport->Open();
				this->serialport->ReadTimeout = 500;
				this->serialport->WriteTimeout = 500;
				btconnect->Text = "Disconnect";
				progressBar1->Value = 100;
				if (serialport->IsOpen)
					label5->Text = "Open";
				else
					label5->Text = "Close";
		}
		else if (btconnect->Text == "Disconnect")
		{
			btconnect->Text = "Connect";
			this->serialport->Close();
			progressBar1->Value = 0;
			label5->Text = "Close";

		}
	}
private: System::Void Send_Data_Click(System::Object^  sender, System::EventArgs^  e) {
	if (serialport->IsOpen)
	{
		try
		{
			int numberbyte = textBox3->TextLength;
			//Byte a = Convert::ToByte(textBox3->TextLength);
			NumberbyteSend->Text = numberbyte.ToString();
			String^ send_data = textBox3->Text;
			//IntPtr ptrtoNativeString = Marshal::StringToHGlobalAnsi(send_data);
			//char* naviveString = static_cast<char*>(ptrtoNativeString.ToPointer());
			//label6->Text = send_data;
			array<Byte>^ array_data = gcnew array<Byte>(numberbyte);
			array_data = System::Text::Encoding::UTF8->GetBytes(send_data);
			serialport->Write(send_data);
			
		}
		catch (Exception^  err)
		{
			MessageBox::Show("Can Not Send Data To USB Device\nDetails: " + err, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void Receive_Data_Click(System::Object^  sender, System::EventArgs^  e) {
	if (serialport->IsOpen)
	{
		try
		{
			String^ data = serialport->ReadLine();
			listbox_receiver->Items->Add(data);
			this->numberbyteReceive->Text = data->Length.ToString();
		}
		catch (TimeoutException^)
		{
			this->listbox_receiver->Text = "TimeOut Exception";
		}
	}
	else
		MessageBox::Show("Port Not Opened");
}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (MessageBox::Show("Are you want to exit ?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
	{
	}
	else
	{
		e->Cancel = true;
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (serialport->IsOpen)
	{
		try
		{
			if (checkBox1->Checked == true)
				serialport->Write("ON1");
			if (checkBox2->Checked == true)
				serialport->Write("ON2");
			if (checkBox3->Checked == true)
				serialport->Write("ON3");
			if (checkBox1->Checked == true && checkBox2->Checked == true && checkBox3->Checked == false )
				serialport->Write("ON12");
			if (checkBox1->Checked == true && checkBox2->Checked == false && checkBox3->Checked == true)
				serialport->Write("ON13");
			if (checkBox1->Checked == false && checkBox2->Checked == true && checkBox3->Checked == true)
				serialport->Write("ON23");
			if (checkBox1->Checked == true && checkBox2->Checked == true && checkBox3->Checked == true)
				serialport->Write("ON123");
		}
		catch (Exception^  err)
		{
			MessageBox::Show("Can Not Send Data To USB Device\nDetails: " + err, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (serialport->IsOpen)
	{
		try
		{
			if (checkBox1->Checked == true)
				serialport->Write("OFF1");
			if (checkBox2->Checked == true)
				serialport->Write("OFF2");
			if (checkBox3->Checked == true)
				serialport->Write("OFF3");
			if (checkBox1->Checked == true && checkBox2->Checked == true && checkBox3->Checked == false)
				serialport->Write("OFF12");
			if (checkBox1->Checked == true && checkBox2->Checked == false && checkBox3->Checked == true)
				serialport->Write("OFF13");
			if (checkBox1->Checked == false && checkBox2->Checked == true && checkBox3->Checked == true)
				serialport->Write("OFF23");
			if (checkBox1->Checked == true && checkBox2->Checked == true && checkBox3->Checked == true)
				serialport->Write("OFF123");
		}
		catch (Exception^  err)
		{
			MessageBox::Show("Can Not Send Data To USB Device\nDetails: " + err, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (checkBox4->Checked == true)
	{
		if (e->KeyChar == 13)
		{
			Int16 duty = Convert::ToInt16(textBox1->Text);
			serialport->Write(Convert::ToString(duty/10));
		}
	}
}
};
}
