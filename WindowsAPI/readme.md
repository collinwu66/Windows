# WindowsAPI程序开发的一些小例子
### 1.第一个Windows程序--HelloWinAPI
```C
#include <windows.h> 

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
					PSTR szCmdLine, int iCmdShow)
{
	//调用MessageBox来实现弹出提示框的功能
	//第一个参数可以为NULL，表示当前窗体的句柄
	//第二个参数需要提示框显示的内容
	//提示框的标题名
	//提示框的风格，MB_OK表示只有一个确定按钮
	MessageBox(NULL, TEXT("helloWinAPI!"), TEXT("FirstWinAPIAPP"), MB_OK);
	return 0;
}
```
#### 程序功能
程序会弹出一个提示框包含一个确定按钮，窗口的标题为FirstWinAPIAPP, 提示内容为 helloWinAPI! 
#### 运行截图
![image](https://user-images.githubusercontent.com/92630234/193268590-acab1786-9828-413c-94bf-9454c19a7587.png)
#
### 2.获取命令行参数--getCmdLine
```C
#include <windows.h> 

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
					PSTR szCmdLine, int iCmdShow)
{
	//这里第二个参数传入命令行参数的指针，即可实现弹出显示命令行的参数功能 
	MessageBox(NULL, szCmdLine, TEXT("getCmdLine"), MB_OK); 
	
	return 0;
}
```
#### 程序功能
在命令行运行该程序，后面给出一些参数， 该程序可以通过szCmdLine参数来获取命令行参数，并弹窗输出。
类似于c语言通过main函数的第二个参数获取命令行参数一样。
#### 程序截图
![image](https://user-images.githubusercontent.com/92630234/193271990-efebc487-8556-4c01-97eb-8a2b1a4ea0c8.png)
![image](https://user-images.githubusercontent.com/92630234/193272000-2a335371-4331-4361-89ad-18bb4b451e6d.png)
