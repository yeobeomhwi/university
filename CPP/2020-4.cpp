#include <iostream>

using namespace std;

class Box {
private:
    double length, width, height, volume;
public:
    // ������
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        volume = length * width * height;
    }
    // ��� �Լ�
    void vol() const {
        cout << "����: " << volume << endl;
    }
};

int main() {
    Box myBox(3.0, 4.0, 5.0);
    myBox.vol();
    return 0;
}
