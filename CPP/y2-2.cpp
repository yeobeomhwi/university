#include <iostream>
using namespace std;

int main() {
	char c[100]; // �� ���ο� 100���� ���ڸ� ����ϴ�.
	int count = 0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	cin.getline(c, 100, '\n'); // <Enter> Ű�� �Էµ� ������ ���� �б�

	int i = 0;
	while(true) {
		if(c[i] == '\0') break; // ���� ���� '\0'�� ����
		if(c[i] == 'y') count++;
		i++;
	}
	cout << 'y' << "�� ������ " << count << endl;
}