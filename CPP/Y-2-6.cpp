#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char passwd[100];
    char repasswd[100];
    cout << "�� ��ȣ�� �Է��ϼ��� >>";
    cin >> passwd;
    cout << "�� ��ȣ�� �ٽ� �ѹ� �Է��ϼ��� >>";
    cin >> repasswd;

    if (strcmp(passwd, repasswd) == 0)
    {
        cout << "�����ϴ�."; 
    }
    else
    {
        cout << "���� �ʽ��ϴ�.";
    }
    cout << endl;
}