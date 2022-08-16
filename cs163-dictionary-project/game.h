#pragma once
#include "main.h"
#include "function.h"
#include "feature.h"
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
/// Summary for game
/// </summary>
public
ref class game : public System::Windows::Forms::Form {
private:
    TrieNode* key0;
    int wordNum1;
    String ^ gameAns = L"";

public:
    game(void)
    {
        InitializeComponent();
        //
        //TODO: Add the constructor code here
        //
    }

    game(TrieNode* inKey, int wordCount)
    {
        InitializeComponent();
        key0 = inKey;
        wordNum1 = wordCount;
    }

protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~game()
    {
        if (components) {
            delete components;
        }
    }

private:
    System::Windows::Forms::Button ^ otp1;

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
    System::Windows::Forms::Button ^ nextQuestion;

private:
    System::Windows::Forms::Button ^ backToMenu;

private:
    System::Windows::Forms::Label ^ nameGameMode;

private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(game::typeid));
        this->otp1 = (gcnew System::Windows::Forms::Button());
        this->otp2 = (gcnew System::Windows::Forms::Button());
        this->otp3 = (gcnew System::Windows::Forms::Button());
        this->otp4 = (gcnew System::Windows::Forms::Button());
        this->quesLabel = (gcnew System::Windows::Forms::Label());
        this->switchGameMode = (gcnew System::Windows::Forms::Button());
        this->nextQuestion = (gcnew System::Windows::Forms::Button());
        this->backToMenu = (gcnew System::Windows::Forms::Button());
        this->nameGameMode = (gcnew System::Windows::Forms::Label());
        this->SuspendLayout();
        //
        // otp1
        //
        this->otp1->BackColor = System::Drawing::Color::Transparent;
        this->otp1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
        this->otp1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
            static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
        this->otp1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->otp1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
        this->otp1->ForeColor = System::Drawing::Color::White;
        this->otp1->Location = System::Drawing::Point(221, 256);
        this->otp1->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
        this->otp1->Name = L"otp1";
        this->otp1->Size = System::Drawing::Size(365, 75);
        this->otp1->TabIndex = 0;
        this->otp1->Text = L"Option 1";
        this->otp1->UseVisualStyleBackColor = false;
        this->otp1->Visible = false;
        this->otp1->Click += gcnew System::EventHandler(this, &game::otp1_Click);
        //
        // otp2
        //
        this->otp2->BackColor = System::Drawing::Color::Transparent;
        this->otp2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
        this->otp2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
            static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
        this->otp2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->otp2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
        this->otp2->ForeColor = System::Drawing::Color::White;
        this->otp2->Location = System::Drawing::Point(221, 370);
        this->otp2->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
        this->otp2->Name = L"otp2";
        this->otp2->Size = System::Drawing::Size(365, 75);
        this->otp2->TabIndex = 1;
        this->otp2->Text = L"Option 2";
        this->otp2->UseVisualStyleBackColor = false;
        this->otp2->Visible = false;
        this->otp2->Click += gcnew System::EventHandler(this, &game::otp2_Click);
        //
        // otp3
        //
        this->otp3->BackColor = System::Drawing::Color::Transparent;
        this->otp3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
        this->otp3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
            static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
        this->otp3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->otp3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
        this->otp3->ForeColor = System::Drawing::Color::White;
        this->otp3->Location = System::Drawing::Point(221, 484);
        this->otp3->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
        this->otp3->Name = L"otp3";
        this->otp3->Size = System::Drawing::Size(365, 75);
        this->otp3->TabIndex = 2;
        this->otp3->Text = L"Option 3";
        this->otp3->UseVisualStyleBackColor = false;
        this->otp3->Visible = false;
        this->otp3->Click += gcnew System::EventHandler(this, &game::otp3_Click);
        //
        // otp4
        //
        this->otp4->BackColor = System::Drawing::Color::Transparent;
        this->otp4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
        this->otp4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
            static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
        this->otp4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->otp4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
        this->otp4->ForeColor = System::Drawing::Color::White;
        this->otp4->Location = System::Drawing::Point(221, 598);
        this->otp4->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
        this->otp4->Name = L"otp4";
        this->otp4->Size = System::Drawing::Size(365, 75);
        this->otp4->TabIndex = 3;
        this->otp4->Text = L"Option 4";
        this->otp4->UseVisualStyleBackColor = false;
        this->otp4->Visible = false;
        this->otp4->Click += gcnew System::EventHandler(this, &game::otp4_Click);
        //
        // quesLabel
        //
        this->quesLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.5F, System::Drawing::FontStyle::Bold));
        this->quesLabel->ForeColor = System::Drawing::Color::White;
        this->quesLabel->Location = System::Drawing::Point(22, 111);
        this->quesLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
        this->quesLabel->Name = L"quesLabel";
        this->quesLabel->Size = System::Drawing::Size(763, 106);
        this->quesLabel->TabIndex = 8;
        this->quesLabel->Text = L"No data";
        this->quesLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        //
        // switchGameMode
        //
        this->switchGameMode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
        this->switchGameMode->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
        this->switchGameMode->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
            static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
        this->switchGameMode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->switchGameMode->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
        this->switchGameMode->ForeColor = System::Drawing::Color::White;
        this->switchGameMode->Location = System::Drawing::Point(28, 702);
        this->switchGameMode->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
        this->switchGameMode->Name = L"switchGameMode";
        this->switchGameMode->Size = System::Drawing::Size(216, 59);
        this->switchGameMode->TabIndex = 9;
        this->switchGameMode->Text = L"⇄ Switch Gamemode";
        this->switchGameMode->UseVisualStyleBackColor = true;
        this->switchGameMode->Click += gcnew System::EventHandler(this, &game::switchGameMode_Click);
        //
        // nextQuestion
        //
        this->nextQuestion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
        this->nextQuestion->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Green;
        this->nextQuestion->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
            static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
        this->nextQuestion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->nextQuestion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
        this->nextQuestion->ForeColor = System::Drawing::Color::Lime;
        this->nextQuestion->Location = System::Drawing::Point(597, 702);
        this->nextQuestion->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
        this->nextQuestion->Name = L"nextQuestion";
        this->nextQuestion->Size = System::Drawing::Size(188, 59);
        this->nextQuestion->TabIndex = 10;
        this->nextQuestion->Text = L"Next Question ▶";
        this->nextQuestion->UseVisualStyleBackColor = true;
        this->nextQuestion->Click += gcnew System::EventHandler(this, &game::nextQuestion_Click);
        //
        // backToMenu
        //
        this->backToMenu->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"backToMenu.BackgroundImage")));
        this->backToMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
        this->backToMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->backToMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
        this->backToMenu->ForeColor = System::Drawing::Color::White;
        this->backToMenu->Location = System::Drawing::Point(15, 16);
        this->backToMenu->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
        this->backToMenu->Name = L"backToMenu";
        this->backToMenu->Size = System::Drawing::Size(40, 40);
        this->backToMenu->TabIndex = 11;
        this->backToMenu->UseVisualStyleBackColor = true;
        this->backToMenu->Click += gcnew System::EventHandler(this, &game::backToMenu_Click);
        //
        // nameGameMode
        //
        this->nameGameMode->Anchor = System::Windows::Forms::AnchorStyles::Top;
        this->nameGameMode->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.5F, System::Drawing::FontStyle::Bold));
        this->nameGameMode->ForeColor = System::Drawing::Color::White;
        this->nameGameMode->Location = System::Drawing::Point(-2, 38);
        this->nameGameMode->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
        this->nameGameMode->Name = L"nameGameMode";
        this->nameGameMode->Size = System::Drawing::Size(817, 38);
        this->nameGameMode->TabIndex = 12;
        this->nameGameMode->Text = L"Guess the Definition";
        this->nameGameMode->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        //
        // game
        //
        this->AutoScaleDimensions = System::Drawing::SizeF(15, 37);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
            static_cast<System::Int32>(static_cast<System::Byte>(5)));
        this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
        this->ClientSize = System::Drawing::Size(813, 791);
        this->Controls->Add(this->backToMenu);
        this->Controls->Add(this->nextQuestion);
        this->Controls->Add(this->switchGameMode);
        this->Controls->Add(this->quesLabel);
        this->Controls->Add(this->otp4);
        this->Controls->Add(this->otp3);
        this->Controls->Add(this->otp2);
        this->Controls->Add(this->otp1);
        this->Controls->Add(this->nameGameMode);
        this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
        this->ForeColor = System::Drawing::Color::White;
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
        this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
        this->Name = L"game";
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        this->Text = L"game";
        this->Load += gcnew System::EventHandler(this, &game::game_Load);
        this->ResumeLayout(false);
    }
#pragma endregion
private:
    System::String ^ convertString(string st) {
        return gcnew System::String(st.c_str());
    }

        private : string convertToString(System::String ^ st)
    {
        return msclr::interop::marshal_as<std::string>(st);
    }

private:
    System::Void otp1_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        otp1->Enabled = false;
        otp2->Enabled = false;
        otp3->Enabled = false;
        otp4->Enabled = false;
        if (otp1->Text == gameAns) {
            otp1->BackColor = System::Drawing::Color::LimeGreen;
        } else {
            otp1->BackColor = System::Drawing::Color::Red;
            if (otp1->Text == gameAns)
                otp1->BackColor = System::Drawing::Color::LimeGreen;
            if (otp2->Text == gameAns)
                otp2->BackColor = System::Drawing::Color::LimeGreen;
            if (otp3->Text == gameAns)
                otp3->BackColor = System::Drawing::Color::LimeGreen;
            if (otp4->Text == gameAns)
                otp4->BackColor = System::Drawing::Color::LimeGreen;
        }
    }

private:
    System::Void otp2_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        otp1->Enabled = false;
        otp2->Enabled = false;
        otp3->Enabled = false;
        otp4->Enabled = false;
        if (otp2->Text == gameAns) {
            otp2->BackColor = System::Drawing::Color::LimeGreen;
        } else {
            otp2->BackColor = System::Drawing::Color::Red;
            if (otp1->Text == gameAns)
                otp1->BackColor = System::Drawing::Color::LimeGreen;
            if (otp2->Text == gameAns)
                otp2->BackColor = System::Drawing::Color::LimeGreen;
            if (otp3->Text == gameAns)
                otp3->BackColor = System::Drawing::Color::LimeGreen;
            if (otp4->Text == gameAns)
                otp4->BackColor = System::Drawing::Color::LimeGreen;
        }
    }

private:
    System::Void otp3_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        otp1->Enabled = false;
        otp2->Enabled = false;
        otp3->Enabled = false;
        otp4->Enabled = false;
        if (otp3->Text == gameAns) {
            otp3->BackColor = System::Drawing::Color::LimeGreen;
        } else {
            otp3->BackColor = System::Drawing::Color::Red;
            if (otp1->Text == gameAns)
                otp1->BackColor = System::Drawing::Color::LimeGreen;
            if (otp2->Text == gameAns)
                otp2->BackColor = System::Drawing::Color::LimeGreen;
            if (otp3->Text == gameAns)
                otp3->BackColor = System::Drawing::Color::LimeGreen;
            if (otp4->Text == gameAns)
                otp4->BackColor = System::Drawing::Color::LimeGreen;
        }
    }

private:
    System::Void otp4_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        otp1->Enabled = false;
        otp2->Enabled = false;
        otp3->Enabled = false;
        otp4->Enabled = false;
        if (otp4->Text == gameAns) {
            otp4->BackColor = System::Drawing::Color::LimeGreen;
        } else {
            otp4->BackColor = System::Drawing::Color::Red;
            if (otp1->Text == gameAns)
                otp1->BackColor = System::Drawing::Color::LimeGreen;
            if (otp2->Text == gameAns)
                otp2->BackColor = System::Drawing::Color::LimeGreen;
            if (otp3->Text == gameAns)
                otp3->BackColor = System::Drawing::Color::LimeGreen;
            if (otp4->Text == gameAns)
                otp4->BackColor = System::Drawing::Color::LimeGreen;
        }
    }

private:
    System::Void nextQuestion_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        otp1->BackColor = System::Drawing::Color::Transparent;
        otp2->BackColor = System::Drawing::Color::Transparent;
        otp3->BackColor = System::Drawing::Color::Transparent;
        otp4->BackColor = System::Drawing::Color::Transparent;

        otp1->Enabled = true;
        otp2->Enabled = true;
        otp3->Enabled = true;
        otp4->Enabled = true;
        if (!key0 || wordNum1 < 4)
            return;

        string key1, key2, key3, key4;
        string def1, def2, def3, def4;
        //cout << "vo duoc roi ne";
        int mode = (nameGameMode->Text == convertString("Guess the Definition"));

        int x1 = randomNum(wordNum1);
        int x2, x3, x4;
        do {
            x2 = randomNum(wordNum1);
        } while (x1 == x2);

        do {
            x3 = randomNum(wordNum1);
        } while (x1 == x3 || x2 == x3);

        do {
            x4 = randomNum(wordNum1);
        } while (x1 == x4 || x2 == x4 || x3 == x4);
        //cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
        randomWord(key0, key1, def1, x1);
        randomWord(key0, key2, def2, x2);
        randomWord(key0, key3, def3, x3);
        randomWord(key0, key4, def4, x4);

        //cout << "2";
        vector<string> res;
        if (mode == 1) { // given: key, guess : def

            res.push_back(key1);
            res.push_back(def1);
            res.push_back(def2);
            res.push_back(def3);
            res.push_back(def4);
        } else if (mode == 0) { // given: def, guess: key
            res.push_back(def1);
            res.push_back(key1);
            res.push_back(key2);
            res.push_back(key3);
            res.push_back(key4);
        }

        int ans = randomNum(4);
        gameAns = convertString(res[1]);
        swap(res[1], res[ans]);
        //cout << "3";
        otp1->Show();
        otp2->Show();
        otp3->Show();
        otp4->Show();
        otp1->Text = convertString(res[1]);
        otp2->Text = convertString(res[2]);
        otp3->Text = convertString(res[3]);
        otp4->Text = convertString(res[4]);
        quesLabel->Text = convertString(res[0]);
    }
};
}
