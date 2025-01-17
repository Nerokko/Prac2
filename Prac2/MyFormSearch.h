#pragma once
#include "Header.h"

namespace Prac2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyFormSearch
	/// </summary>
	public ref class MyFormSearch : public System::Windows::Forms::Form
	{
	public:
		int* last;
		Medicine* medicines;
	private: System::Windows::Forms::CheckBox^ checkBoxSave;
	public:

	private: System::Windows::Forms::ComboBox^ comboBoxCategory;
	private: System::Windows::Forms::ComboBox^ comboBoxForm;


	public:
		System::Windows::Forms::DataGridView^ dataGridView1;
		MyFormSearch(Medicine* medicines, int* last, System::Windows::Forms::DataGridView^ dataGridView1)
		{
			this->medicines = medicines;
			this->last = last;
			this->dataGridView1 = dataGridView1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyFormSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonOk;
	protected:

	private: System::Windows::Forms::TextBox^ textBoxMaker;
	protected:



	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPrice;


	private: System::Windows::Forms::NumericUpDown^ numericUpDownCount;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormSearch::typeid));
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->textBoxMaker = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDownPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBoxSave = (gcnew System::Windows::Forms::CheckBox());
			this->comboBoxCategory = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxForm = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCount))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonOk
			// 
			this->buttonOk->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->buttonOk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOk->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonOk->Location = System::Drawing::Point(272, 412);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(124, 36);
			this->buttonOk->TabIndex = 25;
			this->buttonOk->Text = L"������";
			this->buttonOk->UseVisualStyleBackColor = false;
			this->buttonOk->Click += gcnew System::EventHandler(this, &MyFormSearch::buttonOk_Click);
			// 
			// textBoxMaker
			// 
			this->textBoxMaker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBoxMaker->Location = System::Drawing::Point(272, 141);
			this->textBoxMaker->Name = L"textBoxMaker";
			this->textBoxMaker->Size = System::Drawing::Size(122, 26);
			this->textBoxMaker->TabIndex = 22;
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBoxName->Location = System::Drawing::Point(272, 89);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(122, 26);
			this->textBoxName->TabIndex = 21;
			// 
			// numericUpDownPrice
			// 
			this->numericUpDownPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->numericUpDownPrice->Location = System::Drawing::Point(272, 355);
			this->numericUpDownPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDownPrice->Name = L"numericUpDownPrice";
			this->numericUpDownPrice->Size = System::Drawing::Size(124, 26);
			this->numericUpDownPrice->TabIndex = 20;
			// 
			// numericUpDownCount
			// 
			this->numericUpDownCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->numericUpDownCount->Location = System::Drawing::Point(270, 196);
			this->numericUpDownCount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDownCount->Name = L"numericUpDownCount";
			this->numericUpDownCount->Size = System::Drawing::Size(123, 26);
			this->numericUpDownCount->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(39, 357);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 26);
			this->label6->TabIndex = 18;
			this->label6->Text = L"����";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(39, 301);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(174, 26);
			this->label5->TabIndex = 17;
			this->label5->Text = L"���";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(39, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 26);
			this->label4->TabIndex = 16;
			this->label4->Text = L"�����������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(39, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 26);
			this->label3->TabIndex = 15;
			this->label3->Text = L"����������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(39, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 26);
			this->label2->TabIndex = 14;
			this->label2->Text = L"��������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 26);
			this->label1->TabIndex = 13;
			this->label1->Text = L"����";
			this->label1->Click += gcnew System::EventHandler(this, &MyFormSearch::label1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label7->Location = System::Drawing::Point(9, 7);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(424, 66);
			this->label7->TabIndex = 26;
			this->label7->Text = L"������� ����������, �� ������� ������ ������.\r\n���� �����-�� ���� ��� �� ��������"
				L"��, ��\r\n�������� ��� ������ ��� �������\r\n";
			// 
			// checkBoxSave
			// 
			this->checkBoxSave->AutoSize = true;
			this->checkBoxSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxSave->Location = System::Drawing::Point(20, 420);
			this->checkBoxSave->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBoxSave->Name = L"checkBoxSave";
			this->checkBoxSave->Size = System::Drawing::Size(235, 24);
			this->checkBoxSave->TabIndex = 27;
			this->checkBoxSave->Text = L"��������� ������� � ����\r\n";
			this->checkBoxSave->UseVisualStyleBackColor = true;
			// 
			// comboBoxCategory
			// 
			this->comboBoxCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->comboBoxCategory->FormattingEnabled = true;
			this->comboBoxCategory->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"���->���", L"���->���", L"���->�����������",
					L"�����������->���", L"�����������->���"
			});
			this->comboBoxCategory->Location = System::Drawing::Point(272, 247);
			this->comboBoxCategory->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBoxCategory->Name = L"comboBoxCategory";
			this->comboBoxCategory->Size = System::Drawing::Size(126, 24);
			this->comboBoxCategory->TabIndex = 28;
			// 
			// comboBoxForm
			// 
			this->comboBoxForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->comboBoxForm->FormattingEnabled = true;
			this->comboBoxForm->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"����", L"����", L"����", L"����", L"�����"
			});
			this->comboBoxForm->Location = System::Drawing::Point(272, 297);
			this->comboBoxForm->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBoxForm->Name = L"comboBoxForm";
			this->comboBoxForm->Size = System::Drawing::Size(125, 28);
			this->comboBoxForm->TabIndex = 29;
			// 
			// MyFormSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->ClientSize = System::Drawing::Size(450, 464);
			this->Controls->Add(this->comboBoxForm);
			this->Controls->Add(this->comboBoxCategory);
			this->Controls->Add(this->checkBoxSave);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->textBoxMaker);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->numericUpDownPrice);
			this->Controls->Add(this->numericUpDownCount);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->Name = L"MyFormSearch";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�����";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCount))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonOk_Click(System::Object^ sender, System::EventArgs^ e) {
		Medicine med{};
		Medicine medArr[102]{};
		int j = 0;
		med.price = Convert::ToInt32(numericUpDownPrice->Value);
		med.quantity = Convert::ToInt32(numericUpDownCount->Value);
		med.name = msclr::interop::marshal_as<std::string>(textBoxName->Text);
		med.maker = msclr::interop::marshal_as<std::string>(textBoxMaker->Text);
		med.category = msclr::interop::marshal_as<std::string>(comboBoxCategory->Text);
		med.form = msclr::interop::marshal_as<std::string>(comboBoxForm->Text);
		for (int i = 0; i < *last; ++i) {
			bool flag = true;
			if (med.name.length() != 0 && medicines[i].name != med.name) {
				flag = false;
			}
			if (med.maker.length() != 0 && medicines[i].maker != med.maker) {
				flag = false;
			}
			if (med.category.length() != 0 && medicines[i].category != med.category) {
				flag = false;
			}
			if (med.form.length() != 0 && medicines[i].form != med.form) {
				flag = false;
			}
			if (med.price != 0 && medicines[i].price != med.price) {
				flag = false;
			}
			if (med.quantity != 0 && medicines[i].quantity != med.quantity) {
				flag = false;
			}
			if (flag) {
				medArr[j] = medicines[i];
				j += 1;
			}
		}
		while (0 != dataGridView1->RowCount)
			dataGridView1->Rows->RemoveAt(0);
		for (int i = 0; i < j; ++i) {
			this->dataGridView1->Rows->Add(1);
			dataGridView1->Rows[i]->Cells[0]->Value = medArr[i].id.ToString();
			dataGridView1->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<String^>(medArr[i].name);
			dataGridView1->Rows[i]->Cells[2]->Value = msclr::interop::marshal_as<String^>(medArr[i].maker);
			dataGridView1->Rows[i]->Cells[3]->Value = msclr::interop::marshal_as<String^>(medArr[i].category);
			dataGridView1->Rows[i]->Cells[4]->Value = msclr::interop::marshal_as<String^>(medArr[i].form);
			dataGridView1->Rows[i]->Cells[5]->Value = medArr[i].price.ToString();
			dataGridView1->Rows[i]->Cells[6]->Value = medArr[i].quantity.ToString();
		}

		if (checkBoxSave->Checked == true) {
			save_medicines_to_txt2(medArr, j);
		}
		Close();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
