#include <stdio.h>
int main()
{
	char ch = 'a';    //数据类型+空格+自定义名称='储存内容'   该形式创造了一个空间储存数据
	//char为字符类型——字符数据类型
	int age = 20;
	//int为字符类型——整型
	short num = 10;
	//short为短整型
	// long为长整型
	//long long为更长的整型
	float weight = 55.5;
	//单精度浮点型
	double d = 0.0;
	//双精度浮点型
	printf("%d\n", 100);
	printf("%d\n",sizeof(char));//1字节
	printf("%d\n", sizeof(short));//2字节
	printf("%d\n", sizeof(int));//4字节
	printf("%d\n", sizeof(long));//4字节
	printf("%d\n", sizeof(long long));//8字节
	printf("%d\n", sizeof(float));//4字节
	printf("%d\n", sizeof(double));//8字节
	//sizeof——关键字——操作符——计算类型或变量所占空间大小
	//sizeof的单位是字节
	//计算机中的单位：
	//bit-比特位（存放一个1/0）
	// byte-字节=8bit
	// kb=1024kb
	// gb=1024gb
	// pb=1024gb

	return 0;
} 