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

System::Void switchGameMode_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    nameGameMode->Text = convertString(nameGameMode->Text == L"Guess the Definition" ? "Guess the Keyword" : "Guess the Definition");
    nextQuestion->PerformClick();
}


System::Void game_Load(System::Object ^ sender, System::EventArgs ^ e)
{
    if (quesLabel->Text == L"No data")
        nextQuestion->PerformClick();
}

System::Void btnGameOn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
    game ^ gam = gcnew game(key, wordNum);
    gam->ShowDialog();
}
