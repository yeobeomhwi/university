#include <iostream>

using namespace std;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "��ȯ ��: a=" << a << ", b=" << b << endl;
    swap(a, b);
    cout << "��ȯ ��: a=" << a << ", b=" << b << endl;
    return 0;
}
