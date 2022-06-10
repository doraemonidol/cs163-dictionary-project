#pragma once

namespace cs163dictionaryproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		game(void)
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
		~game()
		{
			if (components)
			{
				delete components;
			}
		}

            private:
                System::Windows::Forms::Button ^ otp1;

            protected:
            private:
                System::Windows::Forms::Button ^ otp2;

            private:
                System::Windows::Forms::Button ^ otp3;

            private:
                System::Windows::Forms::Button ^ otp4;

            private:
                System::Windows::Forms::Label ^ quesLabel;

            private:
                System::Windows::Forms::Button ^ switchGameMode;

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
                    this->otp1 = (gcnew System::Windows::Forms::Button());
                    this->otp2 = (gcnew System::Windows::Forms::Button());
                    this->otp3 = (gcnew System::Windows::Forms::Button());
                    this->otp4 = (gcnew System::Windows::Forms::Button());
                    this->quesLabel = (gcnew System::Windows::Forms::Label());
                    this->switchGameMode = (gcnew System::Windows::Forms::Button());
                    this->SuspendLayout();
                    //
                    // otp1
                    //
                    this->otp1->Location = System::Drawing::Point(113, 158);
                    this->otp1->Name = L"otp1";
                    this->otp1->Size = System::Drawing::Size(194, 39);
                    this->otp1->TabIndex = 0;
                    this->otp1->Text = L"button1";
                    this->otp1->UseVisualStyleBackColor = true;
                    //
                    // otp2
                    //
                    this->otp2->Location = System::Drawing::Point(113, 203);
                    this->otp2->Name = L"otp2";
                    this->otp2->Size = System::Drawing::Size(194, 44);
                    this->otp2->TabIndex = 1;
                    this->otp2->Text = L"button2";
                    this->otp2->UseVisualStyleBackColor = true;
                    //
                    // otp3
                    //
                    this->otp3->Location = System::Drawing::Point(113, 253);
                    this->otp3->Name = L"otp3";
                    this->otp3->Size = System::Drawing::Size(194, 44);
                    this->otp3->TabIndex = 2;
                    this->otp3->Text = L"button3";
                    this->otp3->UseVisualStyleBackColor = true;
                    //
                    // otp4
                    //
                    this->otp4->Location = System::Drawing::Point(113, 303);
                    this->otp4->Name = L"otp4";
                    this->otp4->Size = System::Drawing::Size(194, 56);
                    this->otp4->TabIndex = 3;
                    this->otp4->Text = L"button4";
                    this->otp4->UseVisualStyleBackColor = true;
                    //
                    // quesLabel
                    //
                    this->quesLabel->AutoSize = true;
                    this->quesLabel->Location = System::Drawing::Point(187, 88);
                    this->quesLabel->Name = L"quesLabel";
                    this->quesLabel->Size = System::Drawing::Size(46, 17);
                    this->quesLabel->TabIndex = 8;
                    this->quesLabel->Text = L"label5";
                    //
                    // switchGameMode
                    //
                    this->switchGameMode->Location = System::Drawing::Point(178, 469);
                    this->switchGameMode->Name = L"switchGameMode";
                    this->switchGameMode->Size = System::Drawing::Size(75, 78);
                    this->switchGameMode->TabIndex = 9;
                    this->switchGameMode->Text = L"Switch";
                    this->switchGameMode->UseVisualStyleBackColor = true;
                    //
                    // game
                    //
                    this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
                    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
                    this->ClientSize = System::Drawing::Size(493, 559);
                    this->Controls->Add(this->switchGameMode);
                    this->Controls->Add(this->quesLabel);
                    this->Controls->Add(this->otp4);
                    this->Controls->Add(this->otp3);
                    this->Controls->Add(this->otp2);
                    this->Controls->Add(this->otp1);
                    this->Name = L"game";
                    this->Text = L"game";
                    this->ResumeLayout(false);
                    this->PerformLayout();
                }
#pragma endregion
	};
}
