#include <iostream>
using namespace std;

class Circle
{
private:
    /* data */
public:
    int raidus;
    Circle();
    Circle(int r);
    double getArea();
};
Circle::Circle() :Circle(1) { }

Circle::Circle(int r){
    raidus =r;
    cout << "������ " <<raidus << " �� ����" << endl;
}

double Circle::getArea(){
    return 3.14*raidus*raidus;
}

int main(){
    Circle donut;
    double area = donut.getArea();
    cout << "donut�� ������ " << area << endl;

    Circle pizza(30);
    area =pizza.getArea();
    cout << "pizza�� ������ " << area << endl;
}