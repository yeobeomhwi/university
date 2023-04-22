#include <iostream>
#include <cctype>

using namespace std;

const int ignore = 0, upper = 1, lower = 2;

void print(string s, int how = -1) {
    static int prev_how = -1; // 이전에 사용된 how 값 저장
    if (how == ignore) {
        cout << s;
    } else if (how == upper) {
        for (char& c : s) {
            c = toupper(c);
        }
        cout << s;
    } else if (how == lower) {
        for (char& c : s) {
            c = tolower(c);
        }
        cout << s;
    } else {
        // how가 지정되지 않으면 이전에 사용된 how 값을 사용
        if (prev_how == ignore) {
            cout << s;
        } else if (prev_how == upper) {
            for (char& c : s) {
                c = toupper(c);
            }
            cout << s;
        } else if (prev_how == lower) {
            for (char& c : s) {
                c = tolower(c);
            }
            cout << s;
        }
    }
    prev_how = how;
}
