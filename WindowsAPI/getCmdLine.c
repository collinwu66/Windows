/***********************【程序说明】************************************************/
//                文件名：getCmdLine.c 
//                介绍：第一个WidowsAPI程序 弹出一个提示框，显示从命令行获取的内容  
//                作者：茫静无
//                创建时间：2021/1/12
//                修改人：茫静无
//                最后一次修改时间：2022/9/30
/****************************************************************************************/
//windows编程嘛，当然要包含windows头文件，方便使用windowst提供的函数
#include <windows.h> 

/*************************【WinMain函数】****************************************/
//说明：WinMain是windowsAPI函数编程的程序入口（类似于c语言控制台程序里的main）,
//		由windows系统来调用我们的写的WinMain函数，并给WinMain传递以下四个参数，
//		要求函数形式必须写成下面这样。
//hInstance：应用程序实列句柄，用来标识你的程序，由Windows传入
//hPrevInstance：在Win16中，hPrevInstance指向前一个实例的句柄，但在Win32中，
//				每一个进程都有一个独立的4G地址空间，从0到2G属于进程私有，对其他进程来说是不可见的。
//				所以，在Win32中，hPrevInstance总是为NULL
//szCmdLine：在命令行中运行本程序时，操作系统负责把命令行参数传递进来(编码为UNICODE)
//nCmdShow：是一个标志，指示主应用程序窗口是最小化、最大化还是正常显示
/********************************************************************************/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
					PSTR szCmdLine, int iCmdShow)
{
	//调用MessageBox来实现弹出提示框的功能
	//第一个参数可以为NULL，表示当前窗体的句柄
	//第二个参数需要提示框显示的内容
	//提示框的标题名
	//提示框的风格，MB_OK表示只有一个确定按钮
	
	//这里第二个参数传入命令行参数的指针，即可实现弹出显示命令行的参数功能 
	MessageBox(NULL, szCmdLine, TEXT("FirstWinAPIAPP"), MB_OK);
	return 0;
}
