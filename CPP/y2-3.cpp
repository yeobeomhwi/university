#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char yes[100];
    while (true)
    {
        cout << "�����ϰ������ yes�� �Է��ϼ���>>" ;
        cin.getline(yes, 100);
        if(strcmp(yes,"yes")==0)
            break;
    }
    cout <<"�����մϴ�" << endl;
}