#pragma once

namespace cs163dictionaryproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainFunction
	/// </summary>
	public ref class mainFunction : public System::Windows::Forms::Form
	{
	public:
		mainFunction(void)
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
		~mainFunction()
		{
			if (components)
			{
				delete components;
			}
		}

            private:
                System::Windows::Forms::Button ^ btnSearch;

            protected: 

            private:


            private:
                System::Windows::Forms::TextBox ^ searchBox;

            protected:
            private:


            private:
                System::Windows::Forms::Panel ^ panel1;

            private:
                System::Windows::Forms::Button ^ btnRemove;

            private:


            private:
                System::Windows::Forms::Button ^ btnEdit;

            private:


            private:
                System::Windows::Forms::Button ^ btnAddFavor;

            private:
                System::Windows::Forms::Label ^ defLabel;

            private:
                System::Windows::Forms::Label ^ kwLabel;

            private:


            private:


            private:


            private:


            private:
                System::Windows::Forms::Button ^ btnSwData;

            private:


            private:
                System::Windows::Forms::Label ^ label1;

            private:
                System::Windows::Forms::Button ^ btnSwSearchMode;

            private:


            private:
                System::Windows::Forms::Button ^ btnViewFavor;

            private:


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
                    this->btnSearch = (gcnew System::Windows::Forms::Button());
                    this->searchBox = (gcnew System::Windows::Forms::TextBox());
                    this->panel1 = (gcnew System::Windows::Forms::Panel());
                    this->btnSwData = (gcnew System::Windows::Forms::Button());
                    this->label1 = (gcnew System::Windows::Forms::Label());
                    this->btnSwSearchMode = (gcnew System::Windows::Forms::Button());
                    this->kwLabel = (gcnew System::Windows::Forms::Label());
                    this->defLabel = (gcnew System::Windows::Forms::Label());
                    this->btnAddFavor = (gcnew System::Windows::Forms::Button());
                    this->btnEdit = (gcnew System::Windows::Forms::Button());
                    this->btnRemove = (gcnew System::Windows::Forms::Button());
                    this->btnViewFavor = (gcnew System::Windows::Forms::Button());
                    this->panel1->SuspendLayout();
                    this->SuspendLayout();
                    //
                    // btnSearch
                    //
                    this->btnSearch->Location = System::Drawing::Point(281, 20);
                    this->btnSearch->Name = L"btnSearch";
                    this->btnSearch->Size = System::Drawing::Size(93, 56);
                    this->btnSearch->TabIndex = 0;
                    this->btnSearch->Text = L"Search";
                    this->btnSearch->UseVisualStyleBackColor = true;
                    //
                    // searchBox
                    //
                    this->searchBox->Location = System::Drawing::Point(12, 63);
                    this->searchBox->Name = L"searchBox";
                    this->searchBox->Size = System::Drawing::Size(227, 22);
                    this->searchBox->TabIndex = 1;
                    //
                    // panel1
                    //
                    this->panel1->Controls->Add(this->btnRemove);
                    this->panel1->Controls->Add(this->btnEdit);
                    this->panel1->Controls->Add(this->btnAddFavor);
                    this->panel1->Controls->Add(this->defLabel);
                    this->panel1->Controls->Add(this->kwLabel);
                    this->panel1->Location = System::Drawing::Point(12, 101);
                    this->panel1->Name = L"panel1";
                    this->panel1->Size = System::Drawing::Size(540, 471);
                    this->panel1->TabIndex = 2;
                    //
                    // btnSwData
                    //
                    this->btnSwData->Location = System::Drawing::Point(474, 29);
                    this->btnSwData->Name = L"btnSwData";
                    this->btnSwData->Size = System::Drawing::Size(63, 56);
                    this->btnSwData->TabIndex = 3;
                    this->btnSwData->Text = L"Switch data";
                    this->btnSwData->UseVisualStyleBackColor = true;
                    //
                    // label1
                    //
                    this->label1->AutoSize = true;
                    this->label1->Location = System::Drawing::Point(12, 29);
                    this->label1->Name = L"label1";
                    this->label1->Size = System::Drawing::Size(97, 17);
                    this->label1->TabIndex = 5;
                    this->label1->Text = L"Input Keyword";
                    //
                    // btnSwSearchMode
                    //
                    this->btnSwSearchMode->Location = System::Drawing::Point(393, 20);
                    this->btnSwSearchMode->Name = L"btnSwSearchMode";
                    this->btnSwSearchMode->Size = System::Drawing::Size(75, 75);
                    this->btnSwSearchMode->TabIndex = 6;
                    this->btnSwSearchMode->Text = L"Definition -> Keyword";
                    this->btnSwSearchMode->UseVisualStyleBackColor = true;
                    //
                    // kwLabel
                    //
                    this->kwLabel->AutoSize = true;
                    this->kwLabel->Location = System::Drawing::Point(35, 20);
                    this->kwLabel->Name = L"kwLabel";
                    this->kwLabel->Size = System::Drawing::Size(62, 17);
                    this->kwLabel->TabIndex = 0;
                    this->kwLabel->Text = L"Keyword";
                    //
                    // defLabel
                    //
                    this->defLabel->AutoSize = true;
                    this->defLabel->Location = System::Drawing::Point(35, 65);
                    this->defLabel->Name = L"defLabel";
                    this->defLabel->Size = System::Drawing::Size(67, 17);
                    this->defLabel->TabIndex = 1;
                    this->defLabel->Text = L"Definition";
                    //
                    // btnAddFavor
                    //
                    this->btnAddFavor->Location = System::Drawing::Point(405, 0);
                    this->btnAddFavor->Name = L"btnAddFavor";
                    this->btnAddFavor->Size = System::Drawing::Size(75, 56);
                    this->btnAddFavor->TabIndex = 2;
                    this->btnAddFavor->Text = L"Add to favorite";
                    this->btnAddFavor->UseVisualStyleBackColor = true;
                    //
                    // btnEdit
                    //
                    this->btnEdit->Location = System::Drawing::Point(405, 65);
                    this->btnEdit->Name = L"btnEdit";
                    this->btnEdit->Size = System::Drawing::Size(75, 23);
                    this->btnEdit->TabIndex = 3;
                    this->btnEdit->Text = L"Edit";
                    this->btnEdit->UseVisualStyleBackColor = true;
                    //
                    // btnRemove
                    //
                    this->btnRemove->Location = System::Drawing::Point(405, 102);
                    this->btnRemove->Name = L"btnRemove";
                    this->btnRemove->Size = System::Drawing::Size(75, 23);
                    this->btnRemove->TabIndex = 4;
                    this->btnRemove->Text = L"Remove";
                    this->btnRemove->UseVisualStyleBackColor = true;
                    //
                    // btnViewFavor
                    //
                    this->btnViewFavor->Location = System::Drawing::Point(153, 12);
                    this->btnViewFavor->Name = L"btnViewFavor";
                    this->btnViewFavor->Size = System::Drawing::Size(106, 37);
                    this->btnViewFavor->TabIndex = 7;
                    this->btnViewFavor->Text = L"View favorite";
                    this->btnViewFavor->UseVisualStyleBackColor = true;
                    //
                    // mainFunction
                    //
                    this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
                    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
                    this->ClientSize = System::Drawing::Size(565, 609);
                    this->Controls->Add(this->btnViewFavor);
                    this->Controls->Add(this->btnSwSearchMode);
                    this->Controls->Add(this->label1);
                    this->Controls->Add(this->btnSwData);
                    this->Controls->Add(this->panel1);
                    this->Controls->Add(this->searchBox);
                    this->Controls->Add(this->btnSearch);
                    this->Name = L"mainFunction";
                    this->Text = L"mainFunction";
                    this->panel1->ResumeLayout(false);
                    this->panel1->PerformLayout();
                    this->ResumeLayout(false);
                    this->PerformLayout();
                }
#pragma endregion
	};
}
