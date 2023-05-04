#include <iostream>

using namespace std;

class X {
private:
    static int count; // Ŭ���� ����
public:
    X() { // ������
        count++;
    }
    ~X() { // �Ҹ���
        count--;
    }
    static int getCount() { // Ŭ���� �޼���
        return count;
    }
};

int X::count = 0; // Ŭ���� ���� �ʱ�ȭ

int main() {
    X x1, x2, x3, x4, x5; // ��ü ���� (�̺κп� ��ü�� �����ϸ� ��)
    cout << "��ü ��: " << X::getCount() << endl; // ��ü �� ���
    return 0;
}
