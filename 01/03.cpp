#include<iostream>
#include<ctime>  // 系统时间头文件
#include<string>
using namespace std;

// 结构体案例

// 学生的结构体定义
struct Student
{
	// 姓名
	string sName;
	// 年龄
	int age;
	// 分数
	int score;
};

// 老师的结构体定义
struct Teacher
{
	// 姓名
	string tName;
	// 学生数组
	Student sArray[5];
};

// 给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";  // 命名后缀
	for (int i = 0; i < len; i++)
	{
		// 通过循环给老师命名
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		// 再给每位老师带的学生命名
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			// 利用rand()创建随机数
			int random = rand() % 71 + 30;  // 随机数取值区间：30~100
			tArray[i].sArray[j].score = random;
		}
	}
};

// 打印所有信息
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师的姓名：  " << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：  " << tArray[i].sArray[j].sName <<
				"考试分数：  " << tArray[i].sArray[j].score << endl;
		}

	}
};

// 主函数
int T_and_s()
{
	// 添加随机数种子
	srand((unsigned int)time(NULL));

	//1. 创建3名老师的数组
	struct Teacher tArray[3];
	
	//2. 通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3. 打印所有老师及学生信息
	printInfo(tArray, len);
	return 0;
}