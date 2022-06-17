#pragma once
#include "main.h"
#include "feature.h"
#include "function.h"
#include "game.h"
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
                String ^ curDataset;
                bool Exit1 = false;

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


            private:


            private:


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
                System::Windows::Forms::Panel ^ panSwDataset;

            private:


            private:
                System::Windows::Forms::ComboBox ^ dataSetOpt;

            private:
                System::Windows::Forms::Button ^ btnResetDatset;

            private:
                System::Windows::Forms::Button ^ btnGameOn;

            private:


            private:
                System::Windows::Forms::Button ^ btMinimise;

            private:
                System::Windows::Forms::Button ^ btCloseApp;

            private:
                System::Windows::Forms::Button ^ btMinimiseBG;

            private:
                System::Windows::Forms::Button ^ btnShowFunc;

            private:


            private:
                System::Windows::Forms::Panel ^ panel2;

            private:
                System::Windows::Forms::FlowLayoutPanel ^ menuPan;

            private:


            private:
                System::ComponentModel::BackgroundWorker ^ backgroundWorker1;

            private:
                System::Windows::Forms::Panel ^ panel3;

            private:
                System::Windows::Forms::TextBox ^ inpDef;

            private:
                System::Windows::Forms::Panel ^ panel1;

            private:
                System::Windows::Forms::TextBox ^ inpKey;

            private:
                System::Windows::Forms::Button ^ butAddCancel;

            private:
                System::Windows::Forms::Button ^ butSwCancel;

            private:
                System::Windows::Forms::Button ^ btnConfSwData;

            private:
                System::Windows::Forms::Button ^ btCloseBG;

            private:


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
        void getDataSet(string cur) {
            dataSetOpt->Items->Clear();
            for (string c : datasetName) {
                dataSetOpt->Items->Add(gcnew String(convertString(c)));
            }
            curDataset = convertString(cur);
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
                System::Windows::Forms::Label ^ keyLabel;

            private:


            private:


            private:


            private:


            private:


            private:
                System::Windows::Forms::Button ^ btnSwData;

            private:
                System::Windows::Forms::Label ^ searchMode;

            private:


            private:


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
                    System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainFunction::typeid));
                    this->btnSearch = (gcnew System::Windows::Forms::Button());
                    this->searchBox = (gcnew System::Windows::Forms::TextBox());
                    this->panShowDef = (gcnew System::Windows::Forms::Panel());
                    this->btnRemove = (gcnew System::Windows::Forms::Button());
                    this->btnEdit = (gcnew System::Windows::Forms::Button());
                    this->btnAddFavor = (gcnew System::Windows::Forms::Button());
                    this->defLabel = (gcnew System::Windows::Forms::Label());
                    this->keyLabel = (gcnew System::Windows::Forms::Label());
                    this->btnSwData = (gcnew System::Windows::Forms::Button());
                    this->searchMode = (gcnew System::Windows::Forms::Label());
                    this->btnSwSearchMode = (gcnew System::Windows::Forms::Button());
                    this->btnViewFavor = (gcnew System::Windows::Forms::Button());
                    this->btnAddNewkey = (gcnew System::Windows::Forms::Button());
                    this->panAddNewkey = (gcnew System::Windows::Forms::Panel());
                    this->butAddCancel = (gcnew System::Windows::Forms::Button());
                    this->panel3 = (gcnew System::Windows::Forms::Panel());
                    this->inpDef = (gcnew System::Windows::Forms::TextBox());
                    this->panel1 = (gcnew System::Windows::Forms::Panel());
                    this->inpKey = (gcnew System::Windows::Forms::TextBox());
                    this->confAddNewkey = (gcnew System::Windows::Forms::Button());
                    this->label3 = (gcnew System::Windows::Forms::Label());
                    this->label2 = (gcnew System::Windows::Forms::Label());
                    this->panEditDef = (gcnew System::Windows::Forms::Panel());
                    this->btnConfirmEdit = (gcnew System::Windows::Forms::Button());
                    this->label4 = (gcnew System::Windows::Forms::Label());
                    this->newDef = (gcnew System::Windows::Forms::TextBox());
                    this->panSwDataset = (gcnew System::Windows::Forms::Panel());
                    this->butSwCancel = (gcnew System::Windows::Forms::Button());
                    this->btnConfSwData = (gcnew System::Windows::Forms::Button());
                    this->dataSetOpt = (gcnew System::Windows::Forms::ComboBox());
                    this->btnResetDatset = (gcnew System::Windows::Forms::Button());
                    this->btnGameOn = (gcnew System::Windows::Forms::Button());
                    this->btMinimise = (gcnew System::Windows::Forms::Button());
                    this->btCloseApp = (gcnew System::Windows::Forms::Button());
                    this->btMinimiseBG = (gcnew System::Windows::Forms::Button());
                    this->btnShowFunc = (gcnew System::Windows::Forms::Button());
                    this->panel2 = (gcnew System::Windows::Forms::Panel());
                    this->menuPan = (gcnew System::Windows::Forms::FlowLayoutPanel());
                    this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
                    this->btCloseBG = (gcnew System::Windows::Forms::Button());
                    this->panShowDef->SuspendLayout();
                    this->panAddNewkey->SuspendLayout();
                    this->panEditDef->SuspendLayout();
                    this->panSwDataset->SuspendLayout();
                    this->menuPan->SuspendLayout();
                    this->SuspendLayout();
                    //
                    // btnSearch
                    //
                    this->btnSearch->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->btnSearch->BackColor = System::Drawing::Color::Transparent;
                    this->btnSearch->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"btnSearch.BackgroundImage")));
                    this->btnSearch->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
                    this->btnSearch->FlatAppearance->BorderSize = 0;
                    this->btnSearch->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btnSearch->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnSearch->Location = System::Drawing::Point(912, 102);
                    this->btnSearch->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->btnSearch->Name = L"btnSearch";
                    this->btnSearch->Size = System::Drawing::Size(33, 35);
                    this->btnSearch->TabIndex = 0;
                    this->btnSearch->UseVisualStyleBackColor = false;
                    this->btnSearch->Click += gcnew System::EventHandler(this, &mainFunction::btnSearch_Click);
                    //
                    // searchBox
                    //
                    this->searchBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->searchBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->searchBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->searchBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.5F, System::Drawing::FontStyle::Bold));
                    this->searchBox->ForeColor = System::Drawing::SystemColors::Window;
                    this->searchBox->HideSelection = false;
                    this->searchBox->Location = System::Drawing::Point(46, 104);
                    this->searchBox->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->searchBox->Name = L"searchBox";
                    this->searchBox->Size = System::Drawing::Size(858, 28);
                    this->searchBox->TabIndex = 1;
                    //
                    // panShowDef
                    //
                    this->panShowDef->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
                    this->panShowDef->Controls->Add(this->btnRemove);
                    this->panShowDef->Controls->Add(this->btnEdit);
                    this->panShowDef->Controls->Add(this->btnAddFavor);
                    this->panShowDef->Controls->Add(this->defLabel);
                    this->panShowDef->Controls->Add(this->keyLabel);
                    this->panShowDef->Location = System::Drawing::Point(47, 172);
                    this->panShowDef->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->panShowDef->Name = L"panShowDef";
                    this->panShowDef->Size = System::Drawing::Size(886, 500);
                    this->panShowDef->TabIndex = 2;
                    //
                    // btnRemove
                    //
                    this->btnRemove->BackColor = System::Drawing::Color::Transparent;
                    this->btnRemove->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"btnRemove.BackgroundImage")));
                    this->btnRemove->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
                    this->btnRemove->FlatAppearance->BorderSize = 0;
                    this->btnRemove->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
                    this->btnRemove->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnRemove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnRemove->Location = System::Drawing::Point(832, 132);
                    this->btnRemove->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->btnRemove->Name = L"btnRemove";
                    this->btnRemove->Size = System::Drawing::Size(26, 26);
                    this->btnRemove->TabIndex = 4;
                    this->btnRemove->UseVisualStyleBackColor = false;
                    this->btnRemove->Click += gcnew System::EventHandler(this, &mainFunction::btnRemove_Click);
                    //
                    // btnEdit
                    //
                    this->btnEdit->BackColor = System::Drawing::Color::Transparent;
                    this->btnEdit->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"btnEdit.BackgroundImage")));
                    this->btnEdit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
                    this->btnEdit->FlatAppearance->BorderSize = 0;
                    this->btnEdit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
                    this->btnEdit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnEdit->Location = System::Drawing::Point(832, 76);
                    this->btnEdit->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->btnEdit->Name = L"btnEdit";
                    this->btnEdit->Size = System::Drawing::Size(26, 26);
                    this->btnEdit->TabIndex = 3;
                    this->btnEdit->UseVisualStyleBackColor = false;
                    this->btnEdit->Click += gcnew System::EventHandler(this, &mainFunction::btnEdit_Click);
                    //
                    // btnAddFavor
                    //
                    this->btnAddFavor->BackColor = System::Drawing::Color::Transparent;
                    this->btnAddFavor->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"btnAddFavor.BackgroundImage")));
                    this->btnAddFavor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
                    this->btnAddFavor->FlatAppearance->BorderSize = 0;
                    this->btnAddFavor->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
                    this->btnAddFavor->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnAddFavor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnAddFavor->ForeColor = System::Drawing::Color::Transparent;
                    this->btnAddFavor->Location = System::Drawing::Point(832, 26);
                    this->btnAddFavor->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->btnAddFavor->Name = L"btnAddFavor";
                    this->btnAddFavor->Size = System::Drawing::Size(26, 26);
                    this->btnAddFavor->TabIndex = 2;
                    this->btnAddFavor->UseVisualStyleBackColor = false;
                    this->btnAddFavor->Click += gcnew System::EventHandler(this, &mainFunction::btnAddFavor_Click);
                    //
                    // defLabel
                    //
                    this->defLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->defLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
                    this->defLabel->Location = System::Drawing::Point(64, 129);
                    this->defLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->defLabel->Name = L"defLabel";
                    this->defLabel->Size = System::Drawing::Size(706, 320);
                    this->defLabel->TabIndex = 1;
                    this->defLabel->Text = resources->GetString(L"defLabel.Text");
                    //
                    // keyLabel
                    //
                    this->keyLabel->AutoSize = true;
                    this->keyLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
                    this->keyLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->keyLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
                    this->keyLabel->Location = System::Drawing::Point(62, 61);
                    this->keyLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->keyLabel->Name = L"keyLabel";
                    this->keyLabel->Size = System::Drawing::Size(161, 40);
                    this->keyLabel->TabIndex = 0;
                    this->keyLabel->Text = L"addsasdasd";
                    //
                    // btnSwData
                    //
                    this->btnSwData->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
                        static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->btnSwData->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnSwData->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnSwData->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
                    this->btnSwData->ForeColor = System::Drawing::SystemColors::Control;
                    this->btnSwData->Location = System::Drawing::Point(6, 59);
                    this->btnSwData->Margin = System::Windows::Forms::Padding(6, 3, 6, 3);
                    this->btnSwData->Name = L"btnSwData";
                    this->btnSwData->Size = System::Drawing::Size(200, 50);
                    this->btnSwData->TabIndex = 3;
                    this->btnSwData->Text = L"Switch dataset";
                    this->btnSwData->UseVisualStyleBackColor = true;
                    this->btnSwData->Click += gcnew System::EventHandler(this, &mainFunction::btnSwData_Click);
                    //
                    // searchMode
                    //
                    this->searchMode->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->searchMode->AutoSize = true;
                    this->searchMode->BackColor = System::Drawing::Color::Transparent;
                    this->searchMode->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.5F));
                    this->searchMode->ForeColor = System::Drawing::Color::White;
                    this->searchMode->Location = System::Drawing::Point(39, 67);
                    this->searchMode->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->searchMode->Name = L"searchMode";
                    this->searchMode->Size = System::Drawing::Size(147, 30);
                    this->searchMode->TabIndex = 5;
                    this->searchMode->Text = L"Input Keyword";
                    //
                    // btnSwSearchMode
                    //
                    this->btnSwSearchMode->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->btnSwSearchMode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnSwSearchMode->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
                    this->btnSwSearchMode->ForeColor = System::Drawing::Color::White;
                    this->btnSwSearchMode->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
                    this->btnSwSearchMode->Location = System::Drawing::Point(220, 49);
                    this->btnSwSearchMode->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->btnSwSearchMode->Name = L"btnSwSearchMode";
                    this->btnSwSearchMode->Size = System::Drawing::Size(226, 48);
                    this->btnSwSearchMode->TabIndex = 6;
                    this->btnSwSearchMode->Text = L"Search by Definition";
                    this->btnSwSearchMode->UseVisualStyleBackColor = true;
                    this->btnSwSearchMode->Click += gcnew System::EventHandler(this, &mainFunction::btnSwSearchMode_Click);
                    //
                    // btnViewFavor
                    //
                    this->btnViewFavor->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)),
                        static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
                    this->btnViewFavor->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(129)),
                        static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
                    this->btnViewFavor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnViewFavor->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
                    this->btnViewFavor->ForeColor = System::Drawing::Color::Gold;
                    this->btnViewFavor->Location = System::Drawing::Point(6, 171);
                    this->btnViewFavor->Margin = System::Windows::Forms::Padding(6, 3, 6, 3);
                    this->btnViewFavor->Name = L"btnViewFavor";
                    this->btnViewFavor->Size = System::Drawing::Size(200, 50);
                    this->btnViewFavor->TabIndex = 7;
                    this->btnViewFavor->Text = L"View favorite";
                    this->btnViewFavor->UseVisualStyleBackColor = true;
                    //
                    // btnAddNewkey
                    //
                    this->btnAddNewkey->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->btnAddNewkey->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnAddNewkey->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnAddNewkey->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
                    this->btnAddNewkey->Location = System::Drawing::Point(6, 3);
                    this->btnAddNewkey->Margin = System::Windows::Forms::Padding(6, 3, 6, 3);
                    this->btnAddNewkey->Name = L"btnAddNewkey";
                    this->btnAddNewkey->Size = System::Drawing::Size(200, 50);
                    this->btnAddNewkey->TabIndex = 8;
                    this->btnAddNewkey->Text = L"New word";
                    this->btnAddNewkey->UseVisualStyleBackColor = true;
                    this->btnAddNewkey->Click += gcnew System::EventHandler(this, &mainFunction::btnAddNewkey_Click);
                    //
                    // panAddNewkey
                    //
                    this->panAddNewkey->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->panAddNewkey->Controls->Add(this->butAddCancel);
                    this->panAddNewkey->Controls->Add(this->panel3);
                    this->panAddNewkey->Controls->Add(this->inpDef);
                    this->panAddNewkey->Controls->Add(this->panel1);
                    this->panAddNewkey->Controls->Add(this->inpKey);
                    this->panAddNewkey->Controls->Add(this->confAddNewkey);
                    this->panAddNewkey->Controls->Add(this->label3);
                    this->panAddNewkey->Controls->Add(this->label2);
                    this->panAddNewkey->Location = System::Drawing::Point(44, 178);
                    this->panAddNewkey->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->panAddNewkey->Name = L"panAddNewkey";
                    this->panAddNewkey->Size = System::Drawing::Size(894, 324);
                    this->panAddNewkey->TabIndex = 9;
                    //
                    // butAddCancel
                    //
                    this->butAddCancel->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->butAddCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->butAddCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->butAddCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
                    this->butAddCancel->ForeColor = System::Drawing::SystemColors::Control;
                    this->butAddCancel->Location = System::Drawing::Point(439, 243);
                    this->butAddCancel->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->butAddCancel->Name = L"butAddCancel";
                    this->butAddCancel->Size = System::Drawing::Size(176, 46);
                    this->butAddCancel->TabIndex = 35;
                    this->butAddCancel->Text = L"Cancel";
                    this->butAddCancel->UseVisualStyleBackColor = true;
                    this->butAddCancel->Click += gcnew System::EventHandler(this, &mainFunction::butAddCancel_Click);
                    //
                    // panel3
                    //
                    this->panel3->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->panel3->BackColor = System::Drawing::Color::White;
                    this->panel3->ForeColor = System::Drawing::Color::White;
                    this->panel3->Location = System::Drawing::Point(160, 222);
                    this->panel3->Name = L"panel3";
                    this->panel3->Size = System::Drawing::Size(594, 1);
                    this->panel3->TabIndex = 34;
                    //
                    // inpDef
                    //
                    this->inpDef->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->inpDef->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->inpDef->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->inpDef->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.5F, System::Drawing::FontStyle::Bold));
                    this->inpDef->ForeColor = System::Drawing::SystemColors::Window;
                    this->inpDef->HideSelection = false;
                    this->inpDef->Location = System::Drawing::Point(160, 190);
                    this->inpDef->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->inpDef->Name = L"inpDef";
                    this->inpDef->Size = System::Drawing::Size(594, 28);
                    this->inpDef->TabIndex = 33;
                    //
                    // panel1
                    //
                    this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->panel1->BackColor = System::Drawing::Color::White;
                    this->panel1->ForeColor = System::Drawing::Color::White;
                    this->panel1->Location = System::Drawing::Point(160, 99);
                    this->panel1->Name = L"panel1";
                    this->panel1->Size = System::Drawing::Size(594, 1);
                    this->panel1->TabIndex = 32;
                    //
                    // inpKey
                    //
                    this->inpKey->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->inpKey->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->inpKey->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->inpKey->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.5F, System::Drawing::FontStyle::Bold));
                    this->inpKey->ForeColor = System::Drawing::SystemColors::Window;
                    this->inpKey->HideSelection = false;
                    this->inpKey->Location = System::Drawing::Point(160, 67);
                    this->inpKey->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->inpKey->Name = L"inpKey";
                    this->inpKey->Size = System::Drawing::Size(594, 28);
                    this->inpKey->TabIndex = 31;
                    //
                    // confAddNewkey
                    //
                    this->confAddNewkey->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->confAddNewkey->BackColor = System::Drawing::Color::DodgerBlue;
                    this->confAddNewkey->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkCyan;
                    this->confAddNewkey->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DeepSkyBlue;
                    this->confAddNewkey->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->confAddNewkey->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
                    this->confAddNewkey->ForeColor = System::Drawing::SystemColors::Control;
                    this->confAddNewkey->Location = System::Drawing::Point(227, 243);
                    this->confAddNewkey->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->confAddNewkey->Name = L"confAddNewkey";
                    this->confAddNewkey->Size = System::Drawing::Size(176, 46);
                    this->confAddNewkey->TabIndex = 4;
                    this->confAddNewkey->Text = L"Add";
                    this->confAddNewkey->UseVisualStyleBackColor = false;
                    this->confAddNewkey->Click += gcnew System::EventHandler(this, &mainFunction::confAddNewkey_Click);
                    //
                    // label3
                    //
                    this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->label3->AutoSize = true;
                    this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.5F));
                    this->label3->ForeColor = System::Drawing::SystemColors::Control;
                    this->label3->Location = System::Drawing::Point(155, 153);
                    this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->label3->Name = L"label3";
                    this->label3->Size = System::Drawing::Size(104, 30);
                    this->label3->TabIndex = 3;
                    this->label3->Text = L"Definition";
                    //
                    // label2
                    //
                    this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->label2->AutoSize = true;
                    this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.5F));
                    this->label2->ForeColor = System::Drawing::SystemColors::Control;
                    this->label2->Location = System::Drawing::Point(155, 30);
                    this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->label2->Name = L"label2";
                    this->label2->Size = System::Drawing::Size(92, 30);
                    this->label2->TabIndex = 2;
                    this->label2->Text = L"Keyword";
                    //
                    // panEditDef
                    //
                    this->panEditDef->Controls->Add(this->btnConfirmEdit);
                    this->panEditDef->Controls->Add(this->label4);
                    this->panEditDef->Controls->Add(this->newDef);
                    this->panEditDef->Location = System::Drawing::Point(3, 705);
                    this->panEditDef->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->panEditDef->Name = L"panEditDef";
                    this->panEditDef->Size = System::Drawing::Size(1313, 474);
                    this->panEditDef->TabIndex = 10;
                    this->panEditDef->Visible = false;
                    //
                    // btnConfirmEdit
                    //
                    this->btnConfirmEdit->Location = System::Drawing::Point(485, 280);
                    this->btnConfirmEdit->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->btnConfirmEdit->Name = L"btnConfirmEdit";
                    this->btnConfirmEdit->Size = System::Drawing::Size(176, 81);
                    this->btnConfirmEdit->TabIndex = 4;
                    this->btnConfirmEdit->Text = L"Change";
                    this->btnConfirmEdit->UseVisualStyleBackColor = true;
                    this->btnConfirmEdit->Click += gcnew System::EventHandler(this, &mainFunction::btnConfirmEdit_Click);
                    //
                    // label4
                    //
                    this->label4->AutoSize = true;
                    this->label4->Location = System::Drawing::Point(193, 200);
                    this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->label4->Name = L"label4";
                    this->label4->Size = System::Drawing::Size(139, 38);
                    this->label4->TabIndex = 3;
                    this->label4->Text = L"Definition";
                    //
                    // newDef
                    //
                    this->newDef->Location = System::Drawing::Point(391, 200);
                    this->newDef->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->newDef->Name = L"newDef";
                    this->newDef->Size = System::Drawing::Size(616, 43);
                    this->newDef->TabIndex = 1;
                    //
                    // panSwDataset
                    //
                    this->panSwDataset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
                    this->panSwDataset->Controls->Add(this->butSwCancel);
                    this->panSwDataset->Controls->Add(this->btnConfSwData);
                    this->panSwDataset->Controls->Add(this->dataSetOpt);
                    this->panSwDataset->Location = System::Drawing::Point(44, 268);
                    this->panSwDataset->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->panSwDataset->Name = L"panSwDataset";
                    this->panSwDataset->Size = System::Drawing::Size(894, 216);
                    this->panSwDataset->TabIndex = 11;
                    this->panSwDataset->Visible = false;
                    //
                    // butSwCancel
                    //
                    this->butSwCancel->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->butSwCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->butSwCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->butSwCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
                    this->butSwCancel->ForeColor = System::Drawing::SystemColors::Control;
                    this->butSwCancel->Location = System::Drawing::Point(651, 134);
                    this->butSwCancel->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->butSwCancel->Name = L"butSwCancel";
                    this->butSwCancel->Size = System::Drawing::Size(176, 46);
                    this->butSwCancel->TabIndex = 37;
                    this->butSwCancel->Text = L"Cancel";
                    this->butSwCancel->UseVisualStyleBackColor = true;
                    this->butSwCancel->Click += gcnew System::EventHandler(this, &mainFunction::butSwCancel_Click);
                    //
                    // btnConfSwData
                    //
                    this->btnConfSwData->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->btnConfSwData->BackColor = System::Drawing::Color::DodgerBlue;
                    this->btnConfSwData->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkCyan;
                    this->btnConfSwData->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DeepSkyBlue;
                    this->btnConfSwData->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnConfSwData->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
                    this->btnConfSwData->ForeColor = System::Drawing::SystemColors::Control;
                    this->btnConfSwData->Location = System::Drawing::Point(439, 134);
                    this->btnConfSwData->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->btnConfSwData->Name = L"btnConfSwData";
                    this->btnConfSwData->Size = System::Drawing::Size(176, 46);
                    this->btnConfSwData->TabIndex = 36;
                    this->btnConfSwData->Text = L"Switch";
                    this->btnConfSwData->UseVisualStyleBackColor = false;
                    //
                    // dataSetOpt
                    //
                    this->dataSetOpt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
                    this->dataSetOpt->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
                    this->dataSetOpt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.5F));
                    this->dataSetOpt->FormattingEnabled = true;
                    this->dataSetOpt->Location = System::Drawing::Point(68, 82);
                    this->dataSetOpt->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->dataSetOpt->Name = L"dataSetOpt";
                    this->dataSetOpt->Size = System::Drawing::Size(759, 38);
                    this->dataSetOpt->TabIndex = 0;
                    //
                    // btnResetDatset
                    //
                    this->btnResetDatset->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkRed;
                    this->btnResetDatset->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
                    this->btnResetDatset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnResetDatset->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
                    this->btnResetDatset->ForeColor = System::Drawing::Color::Red;
                    this->btnResetDatset->Location = System::Drawing::Point(6, 115);
                    this->btnResetDatset->Margin = System::Windows::Forms::Padding(6, 3, 6, 3);
                    this->btnResetDatset->Name = L"btnResetDatset";
                    this->btnResetDatset->Size = System::Drawing::Size(200, 50);
                    this->btnResetDatset->TabIndex = 12;
                    this->btnResetDatset->Text = L"Reset";
                    this->btnResetDatset->UseVisualStyleBackColor = true;
                    this->btnResetDatset->Click += gcnew System::EventHandler(this, &mainFunction::btnResetDatset_Click);
                    //
                    // btnGameOn
                    //
                    this->btnGameOn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkCyan;
                    this->btnGameOn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnGameOn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnGameOn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
                    this->btnGameOn->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->btnGameOn->Location = System::Drawing::Point(6, 227);
                    this->btnGameOn->Margin = System::Windows::Forms::Padding(6, 3, 6, 3);
                    this->btnGameOn->Name = L"btnGameOn";
                    this->btnGameOn->Size = System::Drawing::Size(200, 50);
                    this->btnGameOn->TabIndex = 13;
                    this->btnGameOn->Text = L"Practice";
                    this->btnGameOn->UseVisualStyleBackColor = true;
                    this->btnGameOn->Click += gcnew System::EventHandler(this, &mainFunction::btnGameOn_Click);
                    //
                    // btMinimise
                    //
                    this->btMinimise->BackColor = System::Drawing::Color::Transparent;
                    this->btMinimise->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"btMinimise.BackgroundImage")));
                    this->btMinimise->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->btMinimise->FlatAppearance->BorderColor = System::Drawing::Color::Black;
                    this->btMinimise->FlatAppearance->BorderSize = 0;
                    this->btMinimise->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btMinimise->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btMinimise->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btMinimise->ForeColor = System::Drawing::Color::Transparent;
                    this->btMinimise->Location = System::Drawing::Point(918, 24);
                    this->btMinimise->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->btMinimise->Name = L"btMinimise";
                    this->btMinimise->Size = System::Drawing::Size(20, 1);
                    this->btMinimise->TabIndex = 27;
                    this->btMinimise->UseMnemonic = false;
                    this->btMinimise->UseVisualStyleBackColor = false;
                    this->btMinimise->Click += gcnew System::EventHandler(this, &mainFunction::btMinimiseBG_Click);
                    this->btMinimise->MouseEnter += gcnew System::EventHandler(this, &mainFunction::btMinimiseBG_MouseEnter);
                    this->btMinimise->MouseLeave += gcnew System::EventHandler(this, &mainFunction::btMinimiseBG_MouseLeave);
                    this->btMinimise->MouseHover += gcnew System::EventHandler(this, &mainFunction::btMinimiseBG_MouseEnter);
                    //
                    // btCloseApp
                    //
                    this->btCloseApp->BackColor = System::Drawing::Color::Transparent;
                    this->btCloseApp->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"btCloseApp.BackgroundImage")));
                    this->btCloseApp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->btCloseApp->FlatAppearance->BorderColor = System::Drawing::Color::Black;
                    this->btCloseApp->FlatAppearance->BorderSize = 0;
                    this->btCloseApp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btCloseApp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btCloseApp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btCloseApp->ForeColor = System::Drawing::Color::Transparent;
                    this->btCloseApp->Location = System::Drawing::Point(956, 16);
                    this->btCloseApp->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->btCloseApp->Name = L"btCloseApp";
                    this->btCloseApp->Size = System::Drawing::Size(16, 16);
                    this->btCloseApp->TabIndex = 26;
                    this->btCloseApp->UseMnemonic = false;
                    this->btCloseApp->UseVisualStyleBackColor = false;
                    this->btCloseApp->Click += gcnew System::EventHandler(this, &mainFunction::btCloseBG_Click);
                    this->btCloseApp->MouseEnter += gcnew System::EventHandler(this, &mainFunction::btCloseBG_MouseEnter);
                    this->btCloseApp->MouseLeave += gcnew System::EventHandler(this, &mainFunction::btCloseBG_MouseLeave);
                    this->btCloseApp->MouseHover += gcnew System::EventHandler(this, &mainFunction::btCloseBG_MouseEnter);
                    //
                    // btMinimiseBG
                    //
                    this->btMinimiseBG->BackColor = System::Drawing::Color::Transparent;
                    this->btMinimiseBG->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->btMinimiseBG->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->btMinimiseBG->FlatAppearance->BorderSize = 0;
                    this->btMinimiseBG->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btMinimiseBG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btMinimiseBG->ForeColor = System::Drawing::Color::Transparent;
                    this->btMinimiseBG->Location = System::Drawing::Point(913, 9);
                    this->btMinimiseBG->Name = L"btMinimiseBG";
                    this->btMinimiseBG->Size = System::Drawing::Size(30, 30);
                    this->btMinimiseBG->TabIndex = 28;
                    this->btMinimiseBG->UseVisualStyleBackColor = false;
                    this->btMinimiseBG->Click += gcnew System::EventHandler(this, &mainFunction::btMinimiseBG_Click);
                    this->btMinimiseBG->MouseEnter += gcnew System::EventHandler(this, &mainFunction::btMinimiseBG_MouseEnter);
                    this->btMinimiseBG->MouseLeave += gcnew System::EventHandler(this, &mainFunction::btMinimiseBG_MouseLeave);
                    this->btMinimiseBG->MouseHover += gcnew System::EventHandler(this, &mainFunction::btMinimiseBG_MouseEnter);
                    //
                    // btnShowFunc
                    //
                    this->btnShowFunc->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->btnShowFunc->BackColor = System::Drawing::Color::Transparent;
                    this->btnShowFunc->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"btnShowFunc.BackgroundImage")));
                    this->btnShowFunc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
                    this->btnShowFunc->FlatAppearance->BorderSize = 0;
                    this->btnShowFunc->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btnShowFunc->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btnShowFunc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnShowFunc->ForeColor = System::Drawing::Color::Transparent;
                    this->btnShowFunc->Location = System::Drawing::Point(953, 49);
                    this->btnShowFunc->Name = L"btnShowFunc";
                    this->btnShowFunc->Size = System::Drawing::Size(20, 20);
                    this->btnShowFunc->TabIndex = 29;
                    this->btnShowFunc->UseVisualStyleBackColor = false;
                    this->btnShowFunc->Click += gcnew System::EventHandler(this, &mainFunction::btnShowFunc_Click);
                    //
                    // panel2
                    //
                    this->panel2->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->panel2->BackColor = System::Drawing::Color::White;
                    this->panel2->ForeColor = System::Drawing::Color::White;
                    this->panel2->Location = System::Drawing::Point(46, 132);
                    this->panel2->Name = L"panel2";
                    this->panel2->Size = System::Drawing::Size(858, 1);
                    this->panel2->TabIndex = 30;
                    //
                    // menuPan
                    //
                    this->menuPan->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->menuPan->BackColor = System::Drawing::Color::Transparent;
                    this->menuPan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->menuPan->Controls->Add(this->btnAddNewkey);
                    this->menuPan->Controls->Add(this->btnSwData);
                    this->menuPan->Controls->Add(this->btnResetDatset);
                    this->menuPan->Controls->Add(this->btnViewFavor);
                    this->menuPan->Controls->Add(this->btnGameOn);
                    this->menuPan->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
                    this->menuPan->ForeColor = System::Drawing::Color::Transparent;
                    this->menuPan->Location = System::Drawing::Point(769, 78);
                    this->menuPan->Name = L"menuPan";
                    this->menuPan->Size = System::Drawing::Size(211, 283);
                    this->menuPan->TabIndex = 31;
                    this->menuPan->Visible = false;
                    //
                    // btCloseBG
                    //
                    this->btCloseBG->BackColor = System::Drawing::Color::Transparent;
                    this->btCloseBG->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->btCloseBG->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->btCloseBG->FlatAppearance->BorderSize = 0;
                    this->btCloseBG->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btCloseBG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btCloseBG->ForeColor = System::Drawing::Color::Transparent;
                    this->btCloseBG->Location = System::Drawing::Point(950, 9);
                    this->btCloseBG->Name = L"btCloseBG";
                    this->btCloseBG->Size = System::Drawing::Size(30, 30);
                    this->btCloseBG->TabIndex = 32;
                    this->btCloseBG->UseVisualStyleBackColor = false;
                    this->btCloseBG->Click += gcnew System::EventHandler(this, &mainFunction::btCloseBG_Click);
                    this->btCloseBG->MouseEnter += gcnew System::EventHandler(this, &mainFunction::btCloseBG_MouseEnter);
                    this->btCloseBG->MouseLeave += gcnew System::EventHandler(this, &mainFunction::btCloseBG_MouseLeave);
                    this->btCloseBG->MouseHover += gcnew System::EventHandler(this, &mainFunction::btCloseBG_MouseEnter);
                    //
                    // mainFunction
                    //
                    this->AutoScaleDimensions = System::Drawing::SizeF(15, 37);
                    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
                    this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->ClientSize = System::Drawing::Size(995, 682);
                    this->Controls->Add(this->menuPan);
                    this->Controls->Add(this->panel2);
                    this->Controls->Add(this->btnShowFunc);
                    this->Controls->Add(this->btMinimise);
                    this->Controls->Add(this->btCloseApp);
                    this->Controls->Add(this->btMinimiseBG);
                    this->Controls->Add(this->btnSwSearchMode);
                    this->Controls->Add(this->searchMode);
                    this->Controls->Add(this->searchBox);
                    this->Controls->Add(this->btnSearch);
                    this->Controls->Add(this->panEditDef);
                    this->Controls->Add(this->panSwDataset);
                    this->Controls->Add(this->btCloseBG);
                    this->Controls->Add(this->panShowDef);
                    this->Controls->Add(this->panAddNewkey);
                    this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
                    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
                    this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->Name = L"mainFunction";
                    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
                    this->Text = L"Fantastic Dictionary";
                    this->panShowDef->ResumeLayout(false);
                    this->panShowDef->PerformLayout();
                    this->panAddNewkey->ResumeLayout(false);
                    this->panAddNewkey->PerformLayout();
                    this->panEditDef->ResumeLayout(false);
                    this->panEditDef->PerformLayout();
                    this->panSwDataset->ResumeLayout(false);
                    this->menuPan->ResumeLayout(false);
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

            string keyword = search(key, convertToString(keyLabel->Text))->content;
            editDefinition(def, key, search(key, keyword), convertToString(newDef->Text));
            defLabel->Text = newDef->Text;
            btnConfirmEdit->PerformClick();
        }

    private:
        System::Void btnSearch_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            TrieNode* result;
            if (searchMode->Text == L"Input Keyword") {
                result = search(key, convertToString(searchBox->Text));
                if (!result)
                    return;
                panShowDef->Show();
                keyLabel->Text = searchBox->Text;
                defLabel->Text = convertString(result->content);
            } else {
                result = search(def, convertToString(searchBox->Text));
                if (!result)
                    return;
                panShowDef->Show();
                keyLabel->Text = convertString(result->content);
                defLabel->Text = searchBox->Text;
            }
        }

    private:
        System::Void btnRemove_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Are you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
            if (dialogResult == System::Windows::Forms::DialogResult::No) {
                return;
            }
            remove(key, convertToString(keyLabel->Text));
            panShowDef->Hide();
            MessageBox::Show("Deleted " + keyLabel->Text + " succesfully!", "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
        }

    private:
        System::Void btnSwSearchMode_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            if (searchMode->Text == L"Input Keyword") {
                searchMode->Text = L"Input Definition";
                btnSwSearchMode->Text = L"Search by Keyword";
                panShowDef->Hide();
                searchBox->Text = L"";
            } else {
                searchMode->Text = L"Input Keyword";
                btnSwSearchMode->Text = L"Search by Definition";
                panShowDef->Hide();
                searchBox->Text = L"";
            }
        }

    private:
        System::Void btnSwData_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            if (panSwDataset->Visible)
                panSwDataset->Hide();
            else {
                dataSetOpt->Text = curDataset;
                panSwDataset->Show();
            }
        }

    private:
        System::Void btnConfSwData_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            if (dataSetOpt->Text != curDataset) {
                curDataset = dataSetOpt->Text;
                FullDictTree dictTree = ChooseDataSet(key, def, convertToString(curDataset));
                key = dictTree.key;
                def = dictTree.def;
                panShowDef->Hide();
            }
            btnSwData->PerformClick();
        }

    private:
        System::Void btnResetDatset_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Are you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
            if (dialogResult == System::Windows::Forms::DialogResult::No) {
                return;
            }
            FullDictTree dictTree = ChooseDataSet(key, def, convertToString(curDataset));
            key = dictTree.key;
            def = dictTree.def;
            MessageBox::Show("Dataset " + curDataset + " loaded!", "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
        }

    private:
        System::Void btnGameOn_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            game^ gam = gcnew game(def, wordNum);
            gam->ShowDialog();
        }

    private:
        System::Void butAddCancel_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            panAddNewkey->Hide();
        }

    private:
        System::Void butSwCancel_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            panSwDataset->Hide();
        }

    private:
        System::Void btMinimiseBG_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            this->WindowState = FormWindowState::Minimized;
        }

    private:
        System::Void btCloseBG_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            Exit1 = true;
            Close();
        }

    private:
        System::Void btCloseBG_MouseEnter(System::Object ^ sender, System::EventArgs ^ e)
        {
            btCloseBG->FlatAppearance->BorderSize = 1;
        }

    private:
        System::Void btMinimiseBG_MouseEnter(System::Object ^ sender, System::EventArgs ^ e)
        {
            btMinimiseBG->FlatAppearance->BorderSize = 1;
        }

    private:
        System::Void btCloseBG_MouseLeave(System::Object ^ sender, System::EventArgs ^ e)
        {
            btCloseBG->FlatAppearance->BorderSize = 0;
        }

    private:
        System::Void btMinimiseBG_MouseLeave(System::Object ^ sender, System::EventArgs ^ e)
        {
            btMinimiseBG->FlatAppearance->BorderSize = 0;
        }

    private:
        System::Void btnShowFunc_Click(System::Object ^ sender, System::EventArgs ^ e)
        {
            if (menuPan->Visible)
                menuPan->Hide();
            else
                menuPan->Show();
        }
            };
            }
