#include <iostream>
#include <cstring> 
using namespace std;

bool checklnputError(){
    if(cin.fail()){
        cin.clear();
        cin.ignore(100,'\n');
        cout << "Error: input error!" << endl;
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int menu;
    int num;

    cout << "*******�߽����� ���Ű��� ȯ�� �մϴ�.*******" << endl;
    while (true)
    {
        cout <<"1: «�� , 2: ¥��, 3: ������, 4: ����" << endl;
        cin >> menu;
        if(checklnputError()) continue; 

        if(menu < 1 || menu > 4){
            cout <<" �ٽ� �ֹ� �ϼ���" << endl;
            continue;
        }
        else if(menu == 4){
            cout << "���� ������ �������ϴ�."<< endl;
            return 0;
        }
        cout << "���κ� ? : ";
        cin >> num;
        if(checklnputError()) continue; 
        if(num < 1){
            cout <<" �ٽ� �ֹ� �ϼ���" << endl;
            continue;
        }
        switch(menu){
            case 1:
                {
                    cout << "«�� : " << num << endl;
                    break;
                }
            case 2:
                {
                    cout << "¥�� : " << num << endl;
                    break;
                }
            case 3:
                {
                    cout << "������ : " << num << endl;
                    break;
                }
            case 4:
                {
                    cout << "���� : " << num << endl;
                    break;
                }
        }
    }
}