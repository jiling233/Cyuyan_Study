//常量-不能改变的量   变量-能被改变的量
//定义变量的方法
#define _CRT_SECURE_NO_WARNINGS 
//改内容放到代码第一行，因为VS中使用scanf显示不安全,另一方法为可将scanf改为scanf_s（不建议）
#include <stdio.h>
int main()
{
	int age = 20; //int 为类型  age为变量的名字
	double weight = 75.3;
	age = age + 1;
	weight = weight - 1;
	printf("%d\n", age);
	printf("%lf\n", weight);//%d-int   %lf-double  %f-float
	//变量的分类
	//局部变量：在{}内的变量叫做局部变量
	//全局变量：在{}外的变量叫做全局变量
	//当局部变量和全局变量名字冲突时，局部变量优先，但名字最好区分
	//求两个变量的和(用到scanf输入函数)
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("输入两个数字进行求和\n");
	scanf("%d %d",&a,&b);
	sum = a + b;
	printf("%d\n", sum);
	return 0 ;
}