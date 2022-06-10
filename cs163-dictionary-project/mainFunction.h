#pragma once
#include "main.h"
#include "feature.h"
#include "function.h"
namespace cs163dictionaryproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace std;
    using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for mainFunction
	/// </summary>
	public ref class mainFunction : public System::Windows::Forms::Form
	{
            public:
                TrieNode *def, *key, *fav;
                HistoryNode* his;
                int wordNum;

            private:
                System::Windows::Forms::Panel ^ panAddNewkey;

            public: 

            private:


            public:
            private:
                System::Windows::Forms::Button ^ confAddNewkey;

            private:
                System::Windows::Forms::Label ^ label3;

            private:
                System::Windows::Forms::Label ^ label2;

            private:
                System::Windows::Forms::TextBox ^ inpDef;

            private:


            private:
                System::Windows::Forms::TextBox ^ inpKey;

            private:
                System::Windows::Forms::Panel ^ panEditDef;

            private:


            private:
                System::Windows::Forms::Button ^ btnConfirmEdit;

            private:
                System::Windows::Forms::Label ^ label4;

            private:
                System::Windows::Forms::TextBox ^ newDef;

            private:


            private:
                System::Windows::Forms::Button ^ btnAddNewkey;

            public: 

            private:


            public:
            public:
		mainFunction(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void getData(TrieNode* inDef, TrieNode* inKey, TrieNode* inFav, HistoryNode * inHist, int wordCount)  {
            def = inDef;
            key = inKey;
            fav = inFav;
            his = inHist;
            wordNum = wordCount;
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

            private:
                System::Windows::Forms::Panel ^ panShowDef;

            protected:
            private:


            private:


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
                    this->panShowDef = (gcnew System::Windows::Forms::Panel());
                    this->btnRemove = (gcnew System::Windows::Forms::Button());
                    this->btnEdit = (gcnew System::Windows::Forms::Button());
                    this->btnAddFavor = (gcnew System::Windows::Forms::Button());
                    this->defLabel = (gcnew System::Windows::Forms::Label());
                    this->kwLabel = (gcnew System::Windows::Forms::Label());
                    this->btnSwData = (gcnew System::Windows::Forms::Button());
                    this->label1 = (gcnew System::Windows::Forms::Label());
                    this->btnSwSearchMode = (gcnew System::Windows::Forms::Button());
                    this->btnViewFavor = (gcnew System::Windows::Forms::Button());
                    this->btnAddNewkey = (gcnew System::Windows::Forms::Button());
                    this->panAddNewkey = (gcnew System::Windows::Forms::Panel());
                    this->confAddNewkey = (gcnew System::Windows::Forms::Button());
                    this->label3 = (gcnew System::Windows::Forms::Label());
                    this->label2 = (gcnew System::Windows::Forms::Label());
                    this->inpDef = (gcnew System::Windows::Forms::TextBox());
                    this->inpKey = (gcnew System::Windows::Forms::TextBox());
                    this->panEditDef = (gcnew System::Windows::Forms::Panel());
                    this->btnConfirmEdit = (gcnew System::Windows::Forms::Button());
                    this->label4 = (gcnew System::Windows::Forms::Label());
                    this->newDef = (gcnew System::Windows::Forms::TextBox());
                    this->panShowDef->SuspendLayout();
                    this->panAddNewkey->SuspendLayout();
                    this->panEditDef->SuspendLayout();
                    this->SuspendLayout();
                    //
                    // btnSearch
                    //
                    this->btnSearch->Location = System::Drawing::Point(245, 56);
                    this->btnSearch->Name = L"btnSearch";
                    this->btnSearch->Size = System::Drawing::Size(70, 31);
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
                    // panShowDef
                    //
                    this->panShowDef->Controls->Add(this->btnRemove);
                    this->panShowDef->Controls->Add(this->btnEdit);
                    this->panShowDef->Controls->Add(this->btnAddFavor);
                    this->panShowDef->Controls->Add(this->defLabel);
                    this->panShowDef->Controls->Add(this->kwLabel);
                    this->panShowDef->Location = System::Drawing::Point(12, 101);
                    this->panShowDef->Name = L"panShowDef";
                    this->panShowDef->Size = System::Drawing::Size(540, 471);
                    this->panShowDef->TabIndex = 2;
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
                    // btnEdit
                    //
                    this->btnEdit->Location = System::Drawing::Point(405, 65);
                    this->btnEdit->Name = L"btnEdit";
                    this->btnEdit->Size = System::Drawing::Size(75, 23);
                    this->btnEdit->TabIndex = 3;
                    this->btnEdit->Text = L"Edit";
                    this->btnEdit->UseVisualStyleBackColor = true;
                    this->btnEdit->Click += gcnew System::EventHandler(this, &mainFunction::btnEdit_Click);
                    //
                    // btnAddFavor
                    //
                    this->btnAddFavor->Location = System::Drawing::Point(405, 3);
                    this->btnAddFavor->Name = L"btnAddFavor";
                    this->btnAddFavor->Size = System::Drawing::Size(75, 56);
                    this->btnAddFavor->TabIndex = 2;
                    this->btnAddFavor->Text = L"Add to favorite";
                    this->btnAddFavor->UseVisualStyleBackColor = true;
                    this->btnAddFavor->Click += gcnew System::EventHandler(this, &mainFunction::btnAddFavor_Click);
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
                    // kwLabel
                    //
                    this->kwLabel->AutoSize = true;
                    this->kwLabel->Location = System::Drawing::Point(35, 20);
                    this->kwLabel->Name = L"kwLabel";
                    this->kwLabel->Size = System::Drawing::Size(62, 17);
                    this->kwLabel->TabIndex = 0;
                    this->kwLabel->Text = L"Keyword";
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
                    this->btnSwSearchMode->Location = System::Drawing::Point(321, 12);
                    this->btnSwSearchMode->Name = L"btnSwSearchMode";
                    this->btnSwSearchMode->Size = System::Drawing::Size(75, 75);
                    this->btnSwSearchMode->TabIndex = 6;
                    this->btnSwSearchMode->Text = L"Definition -> Keyword";
                    this->btnSwSearchMode->UseVisualStyleBackColor = true;
                    //
                    // btnViewFavor
                    //
                    this->btnViewFavor->Location = System::Drawing::Point(124, 19);
                    this->btnViewFavor->Name = L"btnViewFavor";
                    this->btnViewFavor->Size = System::Drawing::Size(106, 37);
                    this->btnViewFavor->TabIndex = 7;
                    this->btnViewFavor->Text = L"View favorite";
                    this->btnViewFavor->UseVisualStyleBackColor = true;
                    //
                    // btnAddNewkey
                    //
                    this->btnAddNewkey->Location = System::Drawing::Point(402, 29);
                    this->btnAddNewkey->Name = L"btnAddNewkey";
                    this->btnAddNewkey->Size = System::Drawing::Size(66, 56);
                    this->btnAddNewkey->TabIndex = 8;
                    this->btnAddNewkey->Text = L"New word";
                    this->btnAddNewkey->UseVisualStyleBackColor = true;
                    this->btnAddNewkey->Click += gcnew System::EventHandler(this, &mainFunction::btnAddNewkey_Click);
                    //
                    // panAddNewkey
                    //
                    this->panAddNewkey->Controls->Add(this->confAddNewkey);
                    this->panAddNewkey->Controls->Add(this->label3);
                    this->panAddNewkey->Controls->Add(this->label2);
                    this->panAddNewkey->Controls->Add(this->inpDef);
                    this->panAddNewkey->Controls->Add(this->inpKey);
                    this->panAddNewkey->Location = System::Drawing::Point(15, 91);
                    this->panAddNewkey->Name = L"panAddNewkey";
                    this->panAddNewkey->Size = System::Drawing::Size(416, 164);
                    this->panAddNewkey->TabIndex = 9;
                    this->panAddNewkey->Visible = false;
                    //
                    // confAddNewkey
                    //
                    this->confAddNewkey->Location = System::Drawing::Point(167, 112);
                    this->confAddNewkey->Name = L"confAddNewkey";
                    this->confAddNewkey->Size = System::Drawing::Size(75, 23);
                    this->confAddNewkey->TabIndex = 4;
                    this->confAddNewkey->Text = L"Add";
                    this->confAddNewkey->UseVisualStyleBackColor = true;
                    this->confAddNewkey->Click += gcnew System::EventHandler(this, &mainFunction::confAddNewkey_Click);
                    //
                    // label3
                    //
                    this->label3->AutoSize = true;
                    this->label3->Location = System::Drawing::Point(82, 69);
                    this->label3->Name = L"label3";
                    this->label3->Size = System::Drawing::Size(67, 17);
                    this->label3->TabIndex = 3;
                    this->label3->Text = L"Definition";
                    //
                    // label2
                    //
                    this->label2->AutoSize = true;
                    this->label2->Location = System::Drawing::Point(79, 25);
                    this->label2->Name = L"label2";
                    this->label2->Size = System::Drawing::Size(62, 17);
                    this->label2->TabIndex = 2;
                    this->label2->Text = L"Keyword";
                    //
                    // inpDef
                    //
                    this->inpDef->Location = System::Drawing::Point(167, 69);
                    this->inpDef->Name = L"inpDef";
                    this->inpDef->Size = System::Drawing::Size(212, 22);
                    this->inpDef->TabIndex = 1;
                    //
                    // inpKey
                    //
                    this->inpKey->Location = System::Drawing::Point(167, 25);
                    this->inpKey->Name = L"inpKey";
                    this->inpKey->Size = System::Drawing::Size(100, 22);
                    this->inpKey->TabIndex = 0;
                    //
                    // panEditDef
                    //
                    this->panEditDef->Controls->Add(this->btnConfirmEdit);
                    this->panEditDef->Controls->Add(this->label4);
                    this->panEditDef->Controls->Add(this->newDef);
                    this->panEditDef->Location = System::Drawing::Point(1, 244);
                    this->panEditDef->Name = L"panEditDef";
                    this->panEditDef->Size = System::Drawing::Size(560, 164);
                    this->panEditDef->TabIndex = 10;
                    this->panEditDef->Visible = false;
                    //
                    // btnConfirmEdit
                    //
                    this->btnConfirmEdit->Location = System::Drawing::Point(207, 97);
                    this->btnConfirmEdit->Name = L"btnConfirmEdit";
                    this->btnConfirmEdit->Size = System::Drawing::Size(75, 28);
                    this->btnConfirmEdit->TabIndex = 4;
                    this->btnConfirmEdit->Text = L"Change";
                    this->btnConfirmEdit->UseVisualStyleBackColor = true;
                    this->btnConfirmEdit->Click += gcnew System::EventHandler(this, &mainFunction::btnConfirmEdit_Click);
                    //
                    // label4
                    //
                    this->label4->AutoSize = true;
                    this->label4->Location = System::Drawing::Point(82, 69);
                    this->label4->Name = L"label4";
                    this->label4->Size = System::Drawing::Size(67, 17);
                    this->label4->TabIndex = 3;
                    this->label4->Text = L"Definition";
                    //
                    // newDef
                    //
                    this->newDef->Location = System::Drawing::Point(167, 69);
                    this->newDef->Name = L"newDef";
                    this->newDef->Size = System::Drawing::Size(212, 22);
                    this->newDef->TabIndex = 1;
                    //
                    // mainFunction
                    //
                    this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
                    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
                    this->ClientSize = System::Drawing::Size(565, 609);
                    this->Controls->Add(this->panEditDef);
                    this->Controls->Add(this->panAddNewkey);
                    this->Controls->Add(this->btnAddNewkey);
                    this->Controls->Add(this->btnViewFavor);
                    this->Controls->Add(this->btnSwSearchMode);
                    this->Controls->Add(this->label1);
                    this->Controls->Add(this->btnSwData);
                    this->Controls->Add(this->panShowDef);
                    this->Controls->Add(this->searchBox);
                    this->Controls->Add(this->btnSearch);
                    this->Name = L"mainFunction";
                    this->Text = L"mainFunction";
                    this->panShowDef->ResumeLayout(false);
                    this->panShowDef->PerformLayout();
                    this->panAddNewkey->ResumeLayout(false);
                    this->panAddNewkey->PerformLayout();
                    this->panEditDef->ResumeLayout(false);
                    this->panEditDef->PerformLayout();
                    this->ResumeLayout(false);
                    this->PerformLayout();
                }
#pragma endregion

    private: System::String ^ convertString(string st) {
        return gcnew System::String(st.c_str());
    }

    private : string convertToString(System::String ^ st)
    {
        return msclr::interop::marshal_as<std::string>(st);
    }

	private: System::Void btnAddFavor_Click(System::Object^ sender, System::EventArgs^ e) {
		AddFavourite(fav, convertToString(searchBox->Text));
	}
	private: System::Void btnAddKeyword_Click(System::Object^ sender, System::EventArgs^ e) {
        AddKey(key, def, convertToString(inpKey->Text), convertToString(inpDef->Text));
	}

    private:
        System::Void btnEdit_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            if (panEditDef->Visible)
                panEditDef->Hide();
            else
                panEditDef->Show();
        }

    private:
        System::Void btnAddNewkey_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            if (panAddNewkey->Visible)
                panAddNewkey->Hide();
            else panAddNewkey->Show();
        }

    private:
        System::Void confAddNewkey_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            if (inpKey->Text == L"" || inpDef->Text == L"") {
                System::Windows::Forms::DialogResult dialogResult
                    = MessageBox::Show("Missing Keyword or Definition!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            AddKey(def, key, convertToString(inpKey->Text), convertToString(inpDef->Text));
            btnAddNewkey->PerformClick();
        }

    private:
        System::Void btnConfirmEdit_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            if (newDef->Text == L"" || inpDef->Text == L"") {
                System::Windows::Forms::DialogResult dialogResult
                    = MessageBox::Show("Missing definition!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            string keyword = search(key, convertToString(kwLabel->Text))->content;
            editDefinition(def, key, search(key, keyword), convertToString(newDef->Text));
            defLabel->Text = newDef->Text;
            btnConfirmEdit->PerformClick();
        }
};
}
