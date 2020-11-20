#include<windows.h>
#include <iostream>
using namespace std;
int main()
{
    float r;
    float  perimeter;
    float area;
        cout << "请输入圆的半径:";
        cin >> r;
        perimeter = float(2 * 3.14 * r);
        area = float(3.14 * r * r);
        cout.precision(2);
        cout.flags(cout.fixed);
        cout << "圆的周长为:"<< perimeter<<endl;
        cout << "圆的面积为:" << area << endl;
       system("pause");
       return 0;
}


