#include <iostream>
using namespace std;

int main(){
    int a=10, b=20;
    b=++a;
    cout << "a =" << a<<",b=" <<b<<"\n";

    a=10,b=20;
    a=(a>b)?3:-3;
    cout << "a =" << a<<",b=" <<b<<"\n";

    a=10,b=20;
    a=a+b%3+4;
    cout << "a =" << a<<",b=" <<b<<"\n";
    
    a=10,b=20;
    b >>= 2;
    cout << "a =" << a<<",b=" <<b<<"\n";
}
