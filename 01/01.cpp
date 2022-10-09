#include<iostream>

using namespace std;

int num1 = 39;  // 全局变量定义；数据类型 name = 值

#define day 7 // 宏常量定义：define name 值

int input() {
	cout << "你好！陈灵生" << endl;  // 在显示屏上显示双引号内的内容，endl 为换行

	int num2 = 30;  // 局部变量定义；数据类型 name = 值

	cout << "全局变量num1 = " << num1 << endl;
	cout << "局部变量num2 = " << num2 << endl;


	// 字符串用双引号，字符用单引号
	char str[] = "你好！";  // C风格字符串
	char str2[10] = "111112222";  // 可在初始化时设置长度

	string str3 = " C++风格字符串 ";  // 在旧版本中可能需要加上头文件；#include<string>
	cout << "字符串 " << str << str2 << str3 << endl;

	return 0;
}

int funt() {
	int a = 0;  // 定义变量a，设置默认值为0
	cout << "请输入数据" << endl;
	cin >> a;  // 用 cin 获取用户输入的数据
	cout << "a = " << a << endl;
	return 0;
}
int funt2() {
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;

	cout << "您输入的分数为：" << score << endl;

	// 判断分数是否大于600，if > 600 输出
	
	if (score > 600)  // 注意事项，if条件后面不要加分号，加了之后，就会将判断句与执行句分开，
	{
		cout << "恭喜您，考上了一本大学" << endl;
		return 0;
	}

}