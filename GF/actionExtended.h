#pragma once
#include "extendedBuilding.h"

namespace GF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для actionExtended
	/// </summary>
	public ref class actionExtended : public System::Windows::Forms::Form
	{
	public:
		actionExtended(void)
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
		~actionExtended()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(131, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 35);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(314, 61);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(130, 35);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(63, 204);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 35);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(415, 201);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(145, 35);
			this->textBox4->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::GhostWhite;
			this->button1->Location = System::Drawing::Point(527, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 45);
			this->button1->TabIndex = 5;
			this->button1->Text = L"расчитать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &actionExtended::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Сложение (полин.)", L"Вычитание (полин.)", L"Умножение (степен.)",
					L"Деление (степен.)"
			});
			this->comboBox1->Location = System::Drawing::Point(178, 207);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(188, 28);
			this->comboBox1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PeachPuff;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(131, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 22);
			this->label1->TabIndex = 7;
			this->label1->Text = L"характеристика";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::PeachPuff;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(315, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 22);
			this->label2->TabIndex = 8;
			this->label2->Text = L"размерность";
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeight = 12;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(585, 193);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Size = System::Drawing::Size(131, 50);
			this->dataGridView1->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::PeachPuff;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(232, 238);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"операции";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::PeachPuff;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(27, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 22);
			this->label4->TabIndex = 11;
			this->label4->Text = L"a^";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::PeachPuff;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(379, 209);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 22);
			this->label5->TabIndex = 12;
			this->label5->Text = L"a^";
			// 
			// actionExtended
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ClientSize = System::Drawing::Size(747, 334);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->Name = L"actionExtended";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"actionExtended";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{

			int num1, num2, result, p, n, y = 0, l = 0;

			int between1[50], between2[50], res[50];

			num1 = System::Convert::ToInt32(textBox3->Text);
			num2 = System::Convert::ToInt32(textBox4->Text);

			p = System::Convert::ToInt32(textBox1->Text);
			n = System::Convert::ToInt32(textBox2->Text);

			dataGridView1->RowCount = 1;
			dataGridView1->ColumnCount = n;

			for (int i = 0; i < n; i++)
			{
				dataGridView1->Rows[0]->Cells[i]->Value = "";
			}

			extendedBuilding sizeL;
			int* length = sizeL.sizeL(p, n);
			int f = *length;

			if (comboBox1->SelectedItem == "Умножение (степен.)")
			{
				result = (num1 + num2) % (f - 1);
				//textBox5->Text = System::Convert::ToString(textBox5->Text + result);
				dataGridView1->Rows[0]->Cells[0]->Value = result;
			}

			if (comboBox1->SelectedItem == "Деление (степен.)")
			{
				result = (num1 - num2);
				if (result < 0)
				{
					result += (f - 1);
				}
				//textBox5->Text = System::Convert::ToString(textBox5->Text + result);
				dataGridView1->Rows[0]->Cells[0]->Value = result;
			}




			if (comboBox1->SelectedItem == "Сложение (полин.)")
			{
				for (int j = 0; j < n; j++)
				{
					l = num1 % 10;
					between1[j] = l;
					y = num1 / 10;
					num1 = y;

					l = num2 % 10;
					between2[j] = l;
					y = num2 / 10;
					num2 = y;

					res[j] = between1[j] + between2[j];
					if (res[j] >= p)
					{
						res[j] -= p;
					}


					if (res[j] != 0)
					{

						if (res[j] == 1)
						{
							if (j != 0)
							{
								//textBox5->Text = System::Convert::ToString(textBox5->Text + "x" + "^" + j);
								dataGridView1->Rows[0]->Cells[j]->Value = "x" + "^" + j;
							}
							else
							{
								//textBox5->Text = System::Convert::ToString(textBox5->Text + 1);
								dataGridView1->Rows[0]->Cells[j]->Value = 1;
							}

						}
						else
						{
							if (j != 0)
							{
								//textBox5->Text = System::Convert::ToString(textBox5->Text + res[j] + "x" + "^" + j);
								dataGridView1->Rows[0]->Cells[j]->Value = res[j] + "x" + "^" + j;
							}
							else
							{
								//textBox5->Text = System::Convert::ToString(textBox5->Text + res[j]);
								dataGridView1->Rows[0]->Cells[j]->Value = res[j];
							}
						}
					}
				}
			}



			if (comboBox1->SelectedItem == "Вычитание (полин.)")
			{
				for (int j = 0; j < n; j++)
				{
					l = num1 % 10;
					between1[j] = l;
					y = num1 / 10;
					num1 = y;

					l = num2 % 10;
					between2[j] = l;
					y = num2 / 10;
					num2 = y;

					res[j] = between1[j] - between2[j];

					if (res[j] < 0)
					{
						res[j] += p;

					}
					//textBox16->Text=System::Convert::ToString(textBox16->Text+res[j]);

					if (res[j] != 0)
					{

						if (res[j] == 1)
						{
							if (j != 0)
							{
								dataGridView1->Rows[0]->Cells[j]->Value = "x" + "^" + j;
								//textBox5->Text = System::Convert::ToString(textBox5->Text + 1);

							}
							else
							{
								//textBox5->Text = System::Convert::ToString(textBox5->Text + "x" + "^" + j);
								dataGridView1->Rows[0]->Cells[j]->Value = 1;
							}

						}
						else
						{
							if (j != 0)
							{
								dataGridView1->Rows[0]->Cells[j]->Value = res[j] + "x" + "^" + j;
								//textBox5->Text = System::Convert::ToString(textBox5->Text + res[j] + "x" + "^" + j);
							}
							else
							{
								dataGridView1->Rows[0]->Cells[j]->Value = res[j];
								//textBox5->Text = System::Convert::ToString(textBox5->Text + res[j]);
							}
						}
					}
				}
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Введите корректное число");
		}
	}

	};
}
