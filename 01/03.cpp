#include<iostream>
#include<ctime>  // ϵͳʱ��ͷ�ļ�
#include<string>
using namespace std;

// �ṹ�尸��

// ѧ���Ľṹ�嶨��
struct Student
{
	// ����
	string sName;
	// ����
	int age;
	// ����
	int score;
};

// ��ʦ�Ľṹ�嶨��
struct Teacher
{
	// ����
	string tName;
	// ѧ������
	Student sArray[5];
};

// ����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";  // ������׺
	for (int i = 0; i < len; i++)
	{
		// ͨ��ѭ������ʦ����
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		// �ٸ�ÿλ��ʦ����ѧ������
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			// ����rand()���������
			int random = rand() % 71 + 30;  // �����ȡֵ���䣺30~100
			tArray[i].sArray[j].score = random;
		}
	}
};

// ��ӡ������Ϣ
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ��������  " << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������  " << tArray[i].sArray[j].sName <<
				"���Է�����  " << tArray[i].sArray[j].score << endl;
		}

	}
};

// ������
int T_and_s()
{
	// ������������
	srand((unsigned int)time(NULL));

	//1. ����3����ʦ������
	struct Teacher tArray[3];
	
	//2. ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3. ��ӡ������ʦ��ѧ����Ϣ
	printInfo(tArray, len);
	return 0;
}