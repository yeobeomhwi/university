#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[100];
    char longest[100];
    int length =0;
    cout<< "5���� �̸���';'���� �����Ͽ� �Է��ϼ���"<<endl;
    cout << ">>";
    for(int i=0;i<5;i++){
        cin.getline(name,100,';');
        cout << i+1 << ":" <<name << endl;
        if(length < strlen(name)){
            length = strlen(name);
            strcpy(longest,name);
        }
    }
    cout << " ���� �� �̸��� " << longest << endl;
}