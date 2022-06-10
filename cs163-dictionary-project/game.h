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
        TrieNode *key0;
        int wordNum1;
        String ^ gameAns;

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
        this->otp1->BackColor = System::Drawing::SystemColors::Control;
        this->otp1->Location = System::Drawing::Point(113, 158);
        this->otp1->Name = L"otp1";
        this->otp1->Size = System::Drawing::Size(194, 39);
        this->otp1->TabIndex = 0;
        this->otp1->Text = L"button1";
        this->otp1->UseVisualStyleBackColor = false;
        this->otp1->Click += gcnew System::EventHandler(this, &game::otp1_Click);
        //
        // otp2
        //
        this->otp2->Location = System::Drawing::Point(113, 203);
        this->otp2->Name = L"otp2";
        this->otp2->Size = System::Drawing::Size(194, 44);
        this->otp2->TabIndex = 1;
        this->otp2->Text = L"button2";
        this->otp2->UseVisualStyleBackColor = true;
        this->otp2->Click += gcnew System::EventHandler(this, &game::otp2_Click);
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
        this->switchGameMode->Location = System::Drawing::Point(113, 479);
        this->switchGameMode->Name = L"switchGameMode";
        this->switchGameMode->Size = System::Drawing::Size(159, 52);
        this->switchGameMode->TabIndex = 9;
        this->switchGameMode->Text = L"Swich Game Mode";
        this->switchGameMode->UseVisualStyleBackColor = true;
        this->switchGameMode->Click += gcnew System::EventHandler(this, &game::switchGameMode_Click);
        //
        // nextQuestion
        //
        this->nextQuestion->Location = System::Drawing::Point(345, 407);
        this->nextQuestion->Name = L"nextQuestion";
        this->nextQuestion->Size = System::Drawing::Size(114, 41);
        this->nextQuestion->TabIndex = 10;
        this->nextQuestion->Text = L"Next Question";
        this->nextQuestion->UseVisualStyleBackColor = true;
        this->nextQuestion->Click += gcnew System::EventHandler(this, &game::nextQuestion_Click);
        //
        // backToMenu
        //
        this->backToMenu->Location = System::Drawing::Point(11, 11);
        this->backToMenu->Name = L"backToMenu";
        this->backToMenu->Size = System::Drawing::Size(112, 34);
        this->backToMenu->TabIndex = 11;
        this->backToMenu->Text = L"Back to Menu";
        this->backToMenu->UseVisualStyleBackColor = true;
        this->backToMenu->Click += gcnew System::EventHandler(this, &game::backToMenu_Click);
        //
        // nameGameMode
        //
        this->nameGameMode->AutoSize = true;
        this->nameGameMode->Location = System::Drawing::Point(351, 20);
        this->nameGameMode->Name = L"nameGameMode";
        this->nameGameMode->Size = System::Drawing::Size(136, 17);
        this->nameGameMode->TabIndex = 12;
        this->nameGameMode->Text = L"Guess the Definition";
        //
        // game
        //
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(522, 555);
        this->Controls->Add(this->nameGameMode);
        this->Controls->Add(this->backToMenu);
        this->Controls->Add(this->nextQuestion);
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
        if (otp1->Text == gameAns) {
            otp1->BackColor = System::Drawing::Color::LimeGreen;
        } else
            otp1->BackColor = System::Drawing::Color::Red;
    }

private:
    System::Void otp2_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        if (otp2->Text == gameAns) {
            otp2->BackColor = System::Drawing::Color::LimeGreen;
        } else
            otp2->BackColor = System::Drawing::Color::Red;
    }

private:
    System::Void otp3_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        if (otp3->Text == gameAns) {
            otp3->BackColor = System::Drawing::Color::LimeGreen;
        } else
            otp3->BackColor = System::Drawing::Color::Red;
    }

private:
    System::Void otp4_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        if (otp4->Text == gameAns) {
            otp4->BackColor = System::Drawing::Color::LimeGreen;
        } else
            otp4->BackColor = System::Drawing::Color::Red;
    }

private:
    System::Void nextQuestion_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        string key1, key2, key3, key4;
        string def1, def2, def3, def4;

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

        randomWord(key0, key1, def1, x1);
        randomWord(key0, key2, def2, x2);
        randomWord(key0, key3, def3, x3);
        randomWord(key0, key4, def4, x4);

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
        otp1->Text = convertString(res[1]);
        otp2->Text = convertString(res[2]);
        otp3->Text = convertString(res[3]);
        otp4->Text = convertString(res[4]);
        quesLabel->Text = convertString(res[0]);
    }

private:
    System::Void switchGameMode_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
                nameGameMode->Text = convertString("Guess the Definition" ? "Guess the Key" : "Guess the Definition");
                nextQuestion->PerformClick();
    }

private:
    System::Void backToMenu_Click(System::Object ^ sender, System::EventArgs ^ e)
    {
        Close();
    }
};
}
