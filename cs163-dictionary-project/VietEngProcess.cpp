#include <bits/stdc++.h>
using namespace std;

bool checkVietEng(string a){
    int i = 0;
    while(i < a.size()){
        if(a[i] == '\t') break;
        ++i;
    }
    int x = 0;
    while(x < a.size()){
        if(a[x] == ')'){
            ++x;
            break;
        }
        ++x;
    }
    if(x < a.size() && x > i) i = x;
    if(a[i+1] == 'n' && a[i+2] == 'h' && a[i+3] == 'u') return true;
    else if(a[i+1] == 'x' && a[i+2] == 'e' && a[i+3] == 'm') return true;
    else return false;
}

void fixVietEng(){
    ifstream fin; fin.open("VietEng(raw).txt");
    ofstream fout; fout.open("VietEng.txt");
    while(!fin.eof()){
        string a; getline(fin, a);
        if(check(a)) continue;
        else fout << a << endl;
        if(fin.eof()) break;
    }
    fin.close(); fout.close();
}

int main(){
    fixVietEng();
    return 0;
}
