#include <iostream>

using namespace std;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "교환 전: a=" << a << ", b=" << b << endl;
    swap(a, b);
    cout << "교환 후: a=" << a << ", b=" << b << endl;
    return 0;
}
