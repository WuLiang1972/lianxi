#include<iostream>
#include<windows.h>
#include<string>
#include<iomanip>

using namespace std;

int main() {
	/*string word;
	int count = 0;
	int length = 0;

	cout << "请输入多个单词:" << endl;
	//按下ctrl+z结束(ctrl+z文件结束符EOF)
	while (1) {//死循环
		if (bool(cin >> word) == false){
			break;
		}
		count++;
		//=length=length+word.length()
		length += word.length();
	}
			cout << "共输入" << count << "个单词,长度为:" << length << endl;*/
		int count = 0;
		for (int a = 0; a < 24; a++) {
			for (int b = 0; b < 60; b++) {
				for (int c = 0; c < 60; c++) {
					count++;
					cout <<setw(2)<<setfill('0')<< a<<":" << setw(2) << setfill('0') << b<<":" <<setw(2) << setfill('0')<< c<<":" << "想你" << count << "次" << endl;
					Sleep(1000);//延时1秒
				}
			}
		}
		system("pause");
		return 0;
}