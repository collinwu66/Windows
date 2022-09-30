# WindowsAPI程序开发的一些小例子
### 1.第一个Windows程序--HelloWinAPI
```C
#include <windows.h> 

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
					PSTR szCmdLine, int iCmdShow)
{
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
	MessageBox(NULL, szCmdLine, TEXT("FirstWinAPIAPP"), MB_OK);
	return 0;
}
```
#### 程序功能
在命令行运行该程序，后面给出一些参数， 该程序可以通过szCmdLine参数来获取命令行参数，并弹窗输出。
类似于c语言通过main函数的第二个参数获取命令行参数一样。
#### 程序截图
![image](https://user-images.githubusercontent.com/92630234/193271990-efebc487-8556-4c01-97eb-8a2b1a4ea0c8.png)
![image](https://user-images.githubusercontent.com/92630234/193272000-2a335371-4331-4361-89ad-18bb4b451e6d.png)
