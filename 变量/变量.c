//����-���ܸı����   ����-�ܱ��ı����
//��������ķ���
#define _CRT_SECURE_NO_WARNINGS 
//�����ݷŵ������һ�У���ΪVS��ʹ��scanf��ʾ����ȫ,��һ����Ϊ�ɽ�scanf��Ϊscanf_s�������飩
#include <stdio.h>
int main()
{
	int age = 20; //int Ϊ����  ageΪ����������
	double weight = 75.3;
	age = age + 1;
	weight = weight - 1;
	printf("%d\n", age);
	printf("%lf\n", weight);//%d-int   %lf-double  %f-float
	//�����ķ���
	//�ֲ���������{}�ڵı��������ֲ�����
	//ȫ�ֱ�������{}��ı�������ȫ�ֱ���
	//���ֲ�������ȫ�ֱ������ֳ�ͻʱ���ֲ��������ȣ��������������
	//�����������ĺ�(�õ�scanf���뺯��)
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("�����������ֽ������\n");
	scanf("%d %d",&a,&b);
	sum = a + b;
	printf("%d\n", sum);
	return 0 ;
}