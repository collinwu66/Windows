# WindowsAPI程序开发的一些小例子
### 1.第一个Windows程序HelloWinAPI
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
