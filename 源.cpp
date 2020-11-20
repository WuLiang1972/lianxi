#include<graphics.h>
#include<windows.h>

#include<MMSystem.h>//播放音乐的头文件
#pragma comment(lib,"winmm.lib")//加载winmm.lib库文件

int main(void) {
	initgraph(1024,727);
	loadimage(0,_T("timg.jpg"));
	//重复播放
	mciSendString(_T("play 沉默是金.mp3 repeat"), 0, 0, 0);
	system("pause");
	closegraph();
	return 0;

}