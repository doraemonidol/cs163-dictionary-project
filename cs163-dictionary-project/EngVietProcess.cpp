#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream fin;
	fin.open("e2.txt");
	ofstream fout;
	fout.open("e.txt");

	string s, temp;
    bool check = false, check1 = false;
//	while (fin){
//        getline(fin,s);
//        if (s[0] == '@'){
//            for (int i = 1; i < s.length(); i++)
//                if (s[i] != ' ' && s[i+1] != '/') //toi phien am thi ngung
//                    fout << s[i];
//                else break;
//            fout << (char) 9;
//            check = true;
//        }
//
//        if (s[0] == '*' && check) {
//            check1 = true;
//            continue;
//        }
//
//        if (s[0] == '-' && check && check1){
//            for (int i = 2; i < s.length(); i++)
//                fout << s[i];
//            fout << '\n';
//            check = false;
//            check1 = false;
//        }
//	}
    while (fin){
        getline(fin,s);
        if (s[0] == '@'){
            for (int i = 1; i < s.length(); i++)
                if (s[i] != ' ' && s[i+1] != '/' && s[i] != ',') //toi phien am thi ngung
                    fout << s[i];
                else break;
            fout << (char) 9;
            check = true;
        }

        if (s[0] == '-' && check){
            for (int i = 2; i < s.length(); i++)
                fout << s[i];
            fout << '\n';
            check = false;
        }
	}
	fin.close();
	fout.close();
    return 0;
}
