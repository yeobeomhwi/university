#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char passwd[100];
    char repasswd[100];
    cout << "새 암호를 입력하세요 >>";
    cin >> passwd;
    cout << "새 암호를 다시 한번 입력하세요 >>";
    cin >> repasswd;

    if (strcmp(passwd, repasswd) == 0)
    {
        cout << "같습니다."; 
    }
    else
    {
        cout << "같지 않습니다.";
    }
    cout << endl;
}