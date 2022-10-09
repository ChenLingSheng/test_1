#include<iostream>
#include<ctime>  // 系统时间头文件
#include<string>
using namespace std;

class Person
{
public:
	int age;  // 声明变量

	// 普通构造函数
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	// 拷贝构造函数
	Person(const Person &p)  // 将括号内创建的 对象p 拷贝给括号外面的构造函数
	{
		age = p.age;  // 将 对象p 中的变量age 赋值给 此构造函数中的变量age
		cout << "Person的拷贝构造函数调用" << endl;
		//cout << "age: " << (int)age << endl;  拷贝了一个地址
	}
	// 析造函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
};
// 调用
void test01()
{
	// 1.括号法
	//Person p1;      // 无参构造函数调用【不能加括号】
	//Person p2(10);  // 有参构造函数调用
	//Person p3(p2);  // 拷贝构造函数调用
	// 2.显示法  【相当于将匿名对象赋值给 前面的对象（p2、p3）】
	//Person p1;              // 无参构造函数调用
	//Person p2 = Person(10); // 有参构造函数调用
	//Person p3 = Person(p2); // 拷贝构造函数调用
	// Person(10) 为匿名对象 特点：当前行执行结束，系统会立刻回收掉匿名对象
	
	// 3.隐式转换法
	//Person p1;      // 无参构造函数调用
	//Person p4 = 10; // 相当于 写了 Person p4 = Person(10);
	//Person p5 = p4; // 拷贝构造函数调用
};  

// 拷贝构造函数的应用

//2. 值传递的方式给函数参数传值
void doWork(Person pcopy)  // 值传递 本质；会拷贝一个临时的副本出来 【形参】
{
	cout << "Person p2" << endl;
};
void test02() {
	Person p; //无参构造函数
	Person p2(10);
	doWork(p2);  // 拷贝构造函数 相当于 Person p3(p2)？  【实参】
}
void f(int i, int j=80) {  // 这里的j=80会失效，因为在 01.h 头文件中已经对 j 定义过了(但奇怪，没报错）
	cout << i << "," << j << endl;
}

void  test03() {
	int i = 0;
	while (i < 10) {
		cout << "if前：" << i << endl;
		if (i < 11) {

			++i;
		}
		cout << "if后：" << i << endl;
	}
}