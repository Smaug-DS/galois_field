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
	/// Сводка для actionSimple
	/// </summary>
	public ref class actionSimple : public System::Windows::Forms::Form
	{
	public:
		actionSimple(void)
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
		~actionSimple()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(171, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 35);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PeachPuff;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(173, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"характеристика";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(49, 154);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 35);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(307, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 35);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(447, 150);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 35);
			this->textBox4->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::GhostWhite;
			this->button1->Location = System::Drawing::Point(381, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 45);
			this->button1->TabIndex = 7;
			this->button1->Text = L"расчитать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &actionSimple::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Сложение", L"Умножение", L"Вычитание", L"Деление" });
			this->comboBox1->Location = System::Drawing::Point(168, 157);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(124, 32);
			this->comboBox1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::PeachPuff;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(182, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 22);
			this->label2->TabIndex = 9;
			this->label2->Text = L"операции";
			// 
			// actionSimple
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ClientSize = System::Drawing::Size(605, 323);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->Name = L"actionSimple";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"actionSimple";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		try
		{
			textBox4->Text = System::Convert::ToString("");

			int num1, num2, result, p;
			int counterNoSimple = 0;

			p = System::Convert::ToInt32(textBox1->Text);
			num1 = System::Convert::ToInt32(textBox2->Text);
			num2 = System::Convert::ToInt32(textBox3->Text);

			if (num1 > p || num2 > p)
			{
				int i = 1;
				throw i;
				//MessageBox::Show("Число не соответствует простому");
			}

			for (int i = 2; i < sqrt(p); i++)
			{
				if (p % i == 0)
				{
					counterNoSimple++;
				}
			}

			if (counterNoSimple)
			{
				throw "исключение для непростого числа";
				//MessageBox::Show("Число не соответствует простому");
			}

			simpleBuilding multi;
			int** tempMulti = multi.multiplication(p); // tempMulti - массив умножение

			simpleBuilding div;
			int** tempDiv = div.division(p);	// tempMulti - массив деление

			if (comboBox1->SelectedItem == "Сложение")
			{
				result = (num1 + num2) % p;
				textBox4->Text = System::Convert::ToString(textBox4->Text + result);
			}

			if (comboBox1->SelectedItem == "Умножение")
			{
				result = (num1 * num2) % p;
				textBox4->Text = System::Convert::ToString(textBox4->Text + result);
			}

			if (comboBox1->SelectedItem == "Вычитание")
			{
				result = (num1 - num2);

				if (result < 0)
				{
					result += p;
				}

				textBox4->Text = System::Convert::ToString(textBox4->Text + result);
			}

			if (comboBox1->SelectedItem == "Деление")
			{

				for (int i = 1; i < p; i++)
				{
					for (int j = 1; j < p; j++)
					{

						for (int k = 1, g = 0; k < p; k++)
						{
							if (tempMulti[j][k] == i)
							{
								g = k;
							}
							tempDiv[i][j] = g;
						}
					}

				}

				result = tempDiv[num1][num2];

				textBox4->Text = System::Convert::ToString(textBox4->Text + result);
			}
		}
		catch (const char* ex)
		{
			MessageBox::Show("Введенное число не соответствует простому");
		}
		catch (const int& ex)
		{
			MessageBox::Show("Операнды не соответствуют диапозону поля");
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Введите корректное число");
		}
	}
	};
}
