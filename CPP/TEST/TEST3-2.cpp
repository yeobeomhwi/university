#include <iostream>
using namespace std;

class Rectangle
{
private:
    /* data */
public:
    int width;
    int height;
    int getArea();
};

int Rectangle::getArea(){
    return width*height;
}

int main(){
    Rectangle rect;
    rect.width = 3;
    rect.height = 5;
    cout << "�簢���� ������ : "<<rect.getArea() << endl;
}