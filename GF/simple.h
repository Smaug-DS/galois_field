#pragma once
#include "simpleBuilding.h"

namespace GF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для simple
	/// </summary>
	public ref class simple : public System::Windows::Forms::Form
	{
	public:
		simple(void)
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
		~simple()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CausesValidation = false;
			this->dataGridView1->ColumnHeadersHeight = 12;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dataGridView1->Location = System::Drawing::Point(37, 107);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridView1->Size = System::Drawing::Size(300, 300);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeight = 12;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView2->Location = System::Drawing::Point(384, 107);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridView2->Size = System::Drawing::Size(300, 300);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->dataGridView3->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->ColumnHeadersHeight = 12;
			this->dataGridView3->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView3->Location = System::Drawing::Point(37, 446);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridView3->Size = System::Drawing::Size(300, 300);
			this->dataGridView3->TabIndex = 6;
			// 
			// dataGridView4
			// 
			this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->dataGridView4->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView4->ColumnHeadersHeight = 12;
			this->dataGridView4->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView4->Location = System::Drawing::Point(384, 446);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridView4->Size = System::Drawing::Size(300, 300);
			this->dataGridView4->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(192, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(145, 26);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PeachPuff;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(193, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"характеристика";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::GhostWhite;
			this->button1->Location = System::Drawing::Point(384, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 45);
			this->button1->TabIndex = 7;
			this->button1->Text = L"построить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &simple::button1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Plum;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(116, 423);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Вычитание";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Plum;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(481, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Умножение";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Plum;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(502, 423);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Деление";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Plum;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(134, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Сложение";
			// 
			// simple
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(722, 758);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"simple";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Simple";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{

			int counterNoSimple = 0;
			int p = System::Convert::ToInt32(textBox1->Text);

			for (int i = 2; i < sqrt(p); i++)
			{
				if (p % i == 0)
				{
					counterNoSimple++;
				}
			}

			if (counterNoSimple)
			{
				throw "Число не соответствует простому";
				//MessageBox::Show("Число не соответствует простому");
			}
			else
			{
				dataGridView1->RowCount = p;
				dataGridView1->ColumnCount = p;
				dataGridView2->RowCount = p;
				dataGridView2->ColumnCount = p;
				dataGridView3->RowCount = p;
				dataGridView3->ColumnCount = p;
				dataGridView4->RowCount = p;
				dataGridView4->ColumnCount = p;

				simpleBuilding add;
				int** tempAdd = add.addition(p);
				for (int i = 0; i < p; i++)
				{
					for (int j = 0; j < p; j++)
					{
						dataGridView1->Rows[i]->Cells[j]->Value = tempAdd[i][j];
					}
				}

				simpleBuilding multi;
				int** tempMulti = multi.multiplication(p);
				for (int i = 0; i < p; i++)
				{
					for (int j = 0; j < p; j++)
					{
						dataGridView2->Rows[i]->Cells[j]->Value = tempMulti[i][j];
					}
				}

				simpleBuilding substac;
				int** tempSubstac = substac.subtraction(p);
				for (int i = 0; i < p; i++)
				{
					for (int j = 0; j < p; j++)
					{
						dataGridView3->Rows[i]->Cells[j]->Value = tempSubstac[i][j];
					}
				}

				simpleBuilding div;
				int** tempDiv = div.division(p);
				for (int i = 0; i < p; i++)
				{
					for (int j = 0; j < p; j++)
					{
						dataGridView4->Rows[i]->Cells[j]->Value = tempDiv[i][j];
					}
				}
			}
		}
		catch (const char* ex)
		{
			MessageBox::Show("Число не соответствует простому");
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Введите корректное число");
			textBox1->Text = System::Convert::ToString("");
		}

	}
	};
}
