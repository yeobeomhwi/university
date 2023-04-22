#include <iostream>
#include <cstring>

using namespace std;

class Stack {
private:
    int size;
    int top;
    int* buffer;
public:
    Stack(int s) : size(s), top(-1), buffer(new int[size]) {}
    Stack(const Stack& s) : size(s.size), top(s.top) {
        buffer = new int[size];
        memcpy(buffer, s.buffer, sizeof(int) * (top+1));
    }
    ~Stack() { delete[] buffer; }
};

int main() {
    Stack s1(10); // 스택 객체 생성
    Stack s2 = s1; // 복사 생성자 호출
    return 0;
}
