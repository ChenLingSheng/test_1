#include<iostream>

using namespace std;

int num1 = 39;  // ȫ�ֱ������壻�������� name = ֵ

#define day 7 // �곣�����壺define name ֵ

int input() {
	cout << "��ã�������" << endl;  // ����ʾ������ʾ˫�����ڵ����ݣ�endl Ϊ����

	int num2 = 30;  // �ֲ��������壻�������� name = ֵ

	cout << "ȫ�ֱ���num1 = " << num1 << endl;
	cout << "�ֲ�����num2 = " << num2 << endl;


	// �ַ�����˫���ţ��ַ��õ�����
	char str[] = "��ã�";  // C����ַ���
	char str2[10] = "111112222";  // ���ڳ�ʼ��ʱ���ó���

	string str3 = " C++����ַ��� ";  // �ھɰ汾�п�����Ҫ����ͷ�ļ���#include<string>
	cout << "�ַ��� " << str << str2 << str3 << endl;

	return 0;
}

int funt() {
	int a = 0;  // �������a������Ĭ��ֵΪ0
	cout << "����������" << endl;
	cin >> a;  // �� cin ��ȡ�û����������
	cout << "a = " << a << endl;
	return 0;
}
int funt2() {
	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;

	cout << "������ķ���Ϊ��" << score << endl;

	// �жϷ����Ƿ����600��if > 600 ���
	
	if (score > 600)  // ע�����if�������治Ҫ�ӷֺţ�����֮�󣬾ͻὫ�жϾ���ִ�о�ֿ���
	{
		cout << "��ϲ����������һ����ѧ" << endl;
		return 0;
	}

}