#include <stdio.h>
int main()
{
	char ch = 'a';    //��������+�ո�+�Զ�������='��������'   ����ʽ������һ���ռ䴢������
	//charΪ�ַ����͡����ַ���������
	int age = 20;
	//intΪ�ַ����͡�������
	short num = 10;
	//shortΪ������
	// longΪ������
	//long longΪ����������
	float weight = 55.5;
	//�����ȸ�����
	double d = 0.0;
	//˫���ȸ�����
	printf("%d\n", 100);
	printf("%d\n",sizeof(char));//1�ֽ�
	printf("%d\n", sizeof(short));//2�ֽ�
	printf("%d\n", sizeof(int));//4�ֽ�
	printf("%d\n", sizeof(long));//4�ֽ�
	printf("%d\n", sizeof(long long));//8�ֽ�
	printf("%d\n", sizeof(float));//4�ֽ�
	printf("%d\n", sizeof(double));//8�ֽ�
	//sizeof�����ؼ��֡��������������������ͻ������ռ�ռ��С
	//sizeof�ĵ�λ���ֽ�
	//������еĵ�λ��
	//bit-����λ�����һ��1/0��
	// byte-�ֽ�=8bit
	// kb=1024kb
	// gb=1024gb
	// pb=1024gb

	return 0;
} 