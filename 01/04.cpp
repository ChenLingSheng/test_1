#include<iostream>
#include<ctime>  // ϵͳʱ��ͷ�ļ�
#include<string>
using namespace std;

class Person
{
public:
	int age;  // ��������

	// ��ͨ���캯��
	Person()
	{
		cout << "Person���޲ι��캯������" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	// �������캯��
	Person(const Person &p)  // �������ڴ����� ����p ��������������Ĺ��캯��
	{
		age = p.age;  // �� ����p �еı���age ��ֵ�� �˹��캯���еı���age
		cout << "Person�Ŀ������캯������" << endl;
		//cout << "age: " << (int)age << endl;  ������һ����ַ
	}
	// ���캯��
	~Person()
	{
		cout << "Person��������������" << endl;
	}
};
// ����
void test01()
{
	// 1.���ŷ�
	//Person p1;      // �޲ι��캯�����á����ܼ����š�
	//Person p2(10);  // �вι��캯������
	//Person p3(p2);  // �������캯������
	// 2.��ʾ��  ���൱�ڽ���������ֵ�� ǰ��Ķ���p2��p3����
	//Person p1;              // �޲ι��캯������
	//Person p2 = Person(10); // �вι��캯������
	//Person p3 = Person(p2); // �������캯������
	// Person(10) Ϊ�������� �ص㣺��ǰ��ִ�н�����ϵͳ�����̻��յ���������
	
	// 3.��ʽת����
	//Person p1;      // �޲ι��캯������
	//Person p4 = 10; // �൱�� д�� Person p4 = Person(10);
	//Person p5 = p4; // �������캯������
};  

// �������캯����Ӧ��

//2. ֵ���ݵķ�ʽ������������ֵ
void doWork(Person pcopy)  // ֵ���� ���ʣ��´��һ����ʱ�ĸ������� ���βΡ�
{
	cout << "Person p2" << endl;
};
void test02() {
	Person p; //�޲ι��캯��
	Person p2(10);
	doWork(p2);  // �������캯�� �൱�� Person p3(p2)��  ��ʵ�Ρ�
}
void f(int i, int j=80) {  // �����j=80��ʧЧ����Ϊ�� 01.h ͷ�ļ����Ѿ��� j �������(����֣�û����
	cout << i << "," << j << endl;
}

void  test03() {
	int i = 0;
	while (i < 10) {
		cout << "ifǰ��" << i << endl;
		if (i < 11) {

			++i;
		}
		cout << "if��" << i << endl;
	}
}