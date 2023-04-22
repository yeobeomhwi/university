#include <iostream>

using namespace std;

class Box {
private:
    double length, width, height, volume;
public:
    // 생성자
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        volume = length * width * height;
    }
    // 멤버 함수
    void vol() const {
        cout << "부피: " << volume << endl;
    }
};

int main() {
    Box myBox(3.0, 4.0, 5.0);
    myBox.vol();
    return 0;
}
