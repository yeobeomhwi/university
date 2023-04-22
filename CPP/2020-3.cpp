#include <iostream>

using namespace std;

int GetSum(int a, int b) {
    return a + b;
}

int GetSum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int sum1 = GetSum(10, 20);
    int sum2 = GetSum(10, 20, 30);
    cout << "sum1: " << sum1 << endl;
    cout << "sum2: " << sum2 << endl;
    return 0;
}
