#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[100];
    cout << "문자열 입력 >>";
    cin.getline(a, 100);

    int len = strlen(a);
    for(int i = 0; i <= len; i++){
        for(int j=0; j < i; j++)
            cout<<a[j];
        cout<<endl;
    }
}