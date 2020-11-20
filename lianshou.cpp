
#include <iostream>
#include<windows.h>
using namespace std;//定义std引用可以省略

int main(void)
{   string name;
    string pwd;
    while (1) {
        system("cls");//清屏
        cout << ("请输入你的姓名:");
        cin >> name;
        cout << ("请输入你的密码:");
        cin >> pwd;
        if (name == "54hk" && pwd == "123456") {
            break;
        }
        else {
            cout << "输入错误,请重新输入:" << endl;
            system("pause");
        }
    }
    system("cls");
    cout << "1.网站404攻击\n";
    cout << "2.网站篡改攻击"<<std::endl;
    cout << "3.网站攻击记录\n";
    cout << "4.DNS攻击\n";
    cout << "5.服务器重启攻击\n";
    system("pause");
    return 0;
}


  
