#include <iostream>
using namespace std;

int main(){
    int n;
    for (int i = 1; i <= 100; i++){
        cout << i;
        if(i%10 == 0)
            cout << endl;
        else
            cout << "\t";
    }
}
