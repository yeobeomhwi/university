#include <iostream>

using namespace std;

class X {
private:
    static int count; // 클래스 변수
public:
    X() { // 생성자
        count++;
    }
    ~X() { // 소멸자
        count--;
    }
    static int getCount() { // 클래스 메서드
        return count;
    }
};

int X::count = 0; // 클래스 변수 초기화

int main() {
    X x1, x2, x3, x4, x5; // 객체 생성 (이부분에 객체를 증가하면 댐)
    cout << "객체 수: " << X::getCount() << endl; // 객체 수 출력
    return 0;
}
