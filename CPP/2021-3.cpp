#include <iostream>
using namespace std;

class nemo {
public:
    // ������
    nemo(double w, double h) {
        width = w;
        height = h;
        area = w * h;
    }
    nemo(double s) : nemo(s, s) {}  // ���簢�� ������

    // ��� �Լ�
    inline double getArea() const { return area; }

private:
    double width;
    double height;
    double area;
};

int main() {
    nemo rect1(5.0, 4.0);
    cout << "rect1�� ����: " << rect1.getArea() << endl;

    nemo rect2(3.0);
    cout << "rect2�� ����: " << rect2.getArea() << endl;

    return 0;
}
