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

    cout << "*******중식점에 오신것을 환영 합니다.*******" << endl;
    while (true)
    {
        cout <<"1: 짬뽕 , 2: 짜장, 3: 군만두, 4: 종료" << endl;
        cin >> menu;
        if(checklnputError()) continue; 

        if(menu < 1 || menu > 4){
            cout <<" 다시 주문 하세요" << endl;
            continue;
        }
        else if(menu == 4){
            cout << "오늘 영업은 끝났습니다."<< endl;
            return 0;
        }
        cout << "몇인분 ? : ";
        cin >> num;
        if(checklnputError()) continue; 
        if(num < 1){
            cout <<" 다시 주문 하세요" << endl;
            continue;
        }
        switch(menu){
            case 1:
                {
                    cout << "짬뽕 : " << num << endl;
                    break;
                }
            case 2:
                {
                    cout << "짜장 : " << num << endl;
                    break;
                }
            case 3:
                {
                    cout << "군만두 : " << num << endl;
                    break;
                }
            case 4:
                {
                    cout << "종료 : " << num << endl;
                    break;
                }
        }
    }
}