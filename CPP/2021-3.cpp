#include <iostream>
using namespace std;

class nemo {
public:
    // 생성자
    nemo(double w, double h) {
        width = w;
        height = h;
        area = w * h;
    }
    nemo(double s) : nemo(s, s) {}  // 정사각형 생성자

    // 멤버 함수
    inline double getArea() const { return area; }

private:
    double width;
    double height;
    double area;
};

int main() {
    nemo rect1(5.0, 4.0);
    cout << "rect1의 면적: " << rect1.getArea() << endl;

    nemo rect2(3.0);
    cout << "rect2의 면적: " << rect2.getArea() << endl;

    return 0;
}
