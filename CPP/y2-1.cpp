#include <iostream>
using namespace std;

double biggest(double x[], int n){
    double r;
    r = x[0];
    for(int i=0; i<n; i++)
        if(r < x[i]) r = x[i];
    return r;
}

int main(){
    double a[5];
    cout << "5���� �Ǽ��� �Է��϶� >>";
    for(int i =0 ; i< 5 ; i++){
        cin >> a[i];
    }
    cout << "���� ū���� =" << biggest(a, 5) << endl;
}