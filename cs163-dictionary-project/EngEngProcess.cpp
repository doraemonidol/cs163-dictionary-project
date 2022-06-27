#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream f("EngEng(raw).txt");
    ofstream out("EngEng.txt");
    char c[10000], t;
    while (f.get(c, 10000, '"')) {
        f.get(t);
        f.get(c, 10000, '"');
        f.get(t);
        out << c << (char)9;
        f.get(c, 10000, '"');
        f.get(t);
        f.get(c, 10000, '"');
        f.get(t);
        for (int i = 0; i < strlen(c)- 1; i++)
        if (c[i] == 92 && c[i + 1] == 92) {
            c[i] = '\0';
        }
        out << c << endl;
        f.get(t);
        while (t != ']') {
            f.get(c, 10000, '"');
            f.get(t);
            f.get(c, 10000, '"');
            f.get(t);
            f.get(t);
        }
    }
    return 0;
}
