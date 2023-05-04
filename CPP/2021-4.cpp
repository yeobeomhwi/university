#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

class Color {
public:
    // 생성자
    Color() : red(255), green(255), blue(255) {}

    // 멤버 함수
    void setColor(int r, int g, int b) {
        red = r;
        green = g;
        blue = b;
    }
    void show() const {
        std::cout << "(" << red << ", " << green << ", " << blue << ")" << std::endl;
    }

private:
    int red;
    int green;
    int blue;
};

int main() {
    const int SIZE = 3;
    Color colors[SIZE];  // Color 객체의 배열
    Color* p = colors;  // 배열의 첫 번째 요소를 가리키는 포인터

    // srand() 함수를 이용하여 난수 발생기 초기화
    srand(static_cast<unsigned int>(time(0)));

    // 모든 객체에 랜덤한 색 설정
    for (int i = 0; i < SIZE; ++i) {
        int r = rand() % 256;
        int g = rand() % 256;
        int b = rand() % 256;
        (p + i)->setColor(r, g, b);  // p + i는 i번째 객체를 가리키는 포인터
    }

    // 모든 객체의 색 출력
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Color " << i + 1 << ": ";
        (p + i)->show();
    }

    return 0;
}
