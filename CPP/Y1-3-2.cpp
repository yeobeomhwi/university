#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "정수 입력 >> ";
    cin >> a;

    int i = 0;
    do {
        int j = 0;
        do {
            cout << '*';
            j++;
        } while (j < a - i);
        cout << '\n';
        i++;
    } while (i < a); // 세미콜론(;) 추가
    return 0; // main 함수에서 값을 반환하도록 수정
}
