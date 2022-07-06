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
	/// Сводка для extended
	/// </summary>
	public ref class extended : public System::Windows::Forms::Form
	{
	public:
		extended(void)
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
		~extended()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::GhostWhite;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(530, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 45);
			this->button1->TabIndex = 4;
			this->button1->Text = L"построить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &extended::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(118, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 30);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(307, 34);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(133, 30);
			this->textBox2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PeachPuff;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(124, 76);
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
			this->label2->Location = System::Drawing::Point(309, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 22);
			this->label2->TabIndex = 8;
			this->label2->Text = L"размерность";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 148);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(180, 400);
			this->dataGridView1->TabIndex = 9;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(212, 148);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(180, 400);
			this->dataGridView2->TabIndex = 10;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->dataGridView3->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(408, 148);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(180, 400);
			this->dataGridView3->TabIndex = 11;
			// 
			// dataGridView4
			// 
			this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->dataGridView4->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(607, 148);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(180, 400);
			this->dataGridView4->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::PeachPuff;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(22, 564);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 25);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Целочисленная";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::PeachPuff;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(244, 564);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 25);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Степенная";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::PeachPuff;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(414, 564);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(174, 25);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Полиномиальная";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::PeachPuff;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(637, 564);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 25);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Векторная";
			// 
			// extended
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ClientSize = System::Drawing::Size(798, 638);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"extended";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"extended";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			int p = System::Convert::ToInt32(textBox1->Text);
			int n = System::Convert::ToInt32(textBox2->Text);

			extendedBuilding sizeL;
			int* length = sizeL.sizeL(p, n);
			int l = *length;

			int* result = new int[l + 1];	// результат
			int* intermediate = new int[l + 1];	// промежуточный

			int counterForLoop = 0, counterForIntegerForm = 0;	//   counterForLoop - для перехода между строками при отображении

			dataGridView1->RowCount = l;
			dataGridView1->ColumnCount = 2;
			dataGridView2->RowCount = l;
			dataGridView2->ColumnCount = 2;
			dataGridView3->RowCount = l;
			dataGridView3->ColumnCount = n + 1;
			dataGridView4->RowCount = l;
			dataGridView4->ColumnCount = n + 1;

			extendedBuilding irred;
			int* irreducible = irred.irreducible(p, n);


			dataGridView3->Rows[0]->Cells[0]->Value = 1 + ")";
			dataGridView4->Rows[0]->Cells[0]->Value = 1 + ")";


			for (int i = 0; i < (l + 1); i++)
			{
				result[i] = 0;
				intermediate[i] = 0;
			}

			for (int h = 0; h < (n); h++)
			{
				dataGridView4->Rows[0]->Cells[h + 1]->Value = result[h];
			}

			dataGridView3->Rows[0]->Cells[1]->Value = 0;

			result[0] = 1;


			while (counterForIntegerForm < l)
			{
				if (counterForIntegerForm == 0)
				{
					dataGridView1->Rows[counterForIntegerForm]->Cells[0]->Value = (counterForIntegerForm + 1) + ")";	///////////////
					dataGridView1->Rows[counterForIntegerForm]->Cells[1]->Value = counterForIntegerForm;
					dataGridView2->Rows[counterForIntegerForm]->Cells[0]->Value = (counterForIntegerForm + 1) + ")";
					dataGridView2->Rows[counterForIntegerForm]->Cells[1]->Value = " " + "a" + "^" + "-INF";
				}
				else
				{
					dataGridView1->Rows[counterForIntegerForm]->Cells[0]->Value = (counterForIntegerForm + 1) + ")";	///////////////
					dataGridView1->Rows[counterForIntegerForm]->Cells[1]->Value = counterForIntegerForm;
					dataGridView2->Rows[counterForIntegerForm]->Cells[0]->Value = (counterForIntegerForm + 1) + ")";
					dataGridView2->Rows[counterForIntegerForm]->Cells[1]->Value = " " + "a" + "^" + (counterForIntegerForm - 1);
				}
				counterForIntegerForm++;
			}

			while (counterForLoop < (l - 1))
			{
				dataGridView3->Rows[counterForLoop + 1]->Cells[0]->Value = (counterForLoop + 2) + ")";
				dataGridView4->Rows[counterForLoop + 1]->Cells[0]->Value = (counterForLoop + 2) + ")";

				for (int h = 0; h < (n); h++)	// отображение
				{

					dataGridView4->Rows[counterForLoop + 1]->Cells[h + 1]->Value = result[h];	// заполнение первой строки в 4, потом 2 , а т.д. тута просто коэффициенты


					if (result[h] != 0)
					{
						if (result[h] == 1)
						{
							if (h != 0)
							{
								dataGridView3->Rows[counterForLoop + 1]->Cells[h + 1]->Value = "x" + "^" + h;
							}
							else
							{
								dataGridView3->Rows[counterForLoop + 1]->Cells[h + 1]->Value = 1;
							}

						}
						else
						{
							if (h != 0)
							{
								dataGridView3->Rows[counterForLoop + 1]->Cells[h + 1]->Value = result[h] + "x" + "^" + h;
							}
							else
							{
								dataGridView3->Rows[counterForLoop + 1]->Cells[h + 1]->Value = result[h];
							}

						}
					}
				}

				for (int i = 0; i < (n + 1); i++)	// логика перехода коэффициетов от строки к строке
				{
					intermediate[i + 1] = result[i];

					if (intermediate[n] != 0)
					{
						for (int j = 0; j < (n + 1); j++)
						{

							intermediate[j] -= irreducible[j];

							if (intermediate[j] < 0)
							{

								while (intermediate[j] < 0)
								{

									intermediate[j] += p;

								}

							}

							if (intermediate[j] > p)
							{
								while (intermediate[j] > p)
								{
									intermediate[j] -= p;
								}
							}
						}
					}
				}

				for (int v = 0; v < (n + 1); v++)
				{
					result[v] = intermediate[v];
				}

				for (int h = 0; h < (n + 1); h++)
				{
					intermediate[h] = 0;
				}

				counterForLoop++;
			}


			delete[] intermediate;
			delete[] result;
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Введите корректное число");
			textBox1->Text = System::Convert::ToString("");
			textBox2->Text = System::Convert::ToString("");
		}
	}
	};
}
