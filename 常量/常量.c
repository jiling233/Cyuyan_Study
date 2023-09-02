# include <stdio.h>
//常量：
//1.字面常量
//2.const修饰的常变量
//3.#define 定义的标识常量
//4.枚举常量：可以意义列举的常量(如：性别，星期，月份)（需要先设一个枚举变量，用到enum ）

int main()
{
    
	//字面常量：
	//3.14;
	//10;
	//"a";
	//const修饰的常量
	int num = 10;//num为变量
	num = 20;//num此时改变为20
	printf("%d\n", num);//打印出后为20
	const int a = 1;//用const修饰变量后，则变量无法修改，变为常变量（具有常属性，但本质是变量）
	//若写下a = 20;则报错
	//证明用const修饰的变量的本质仍是变量而非常量
	int arr[10] = { 0 };//创建一个数组，数组有10个元素
	const int n = 10;
	//int arr2[n] = { 0 };//创建一个数组，数组有变量“n”的元素，则会报错，因为n为变量（常变量仍是变量），[]里面必须是常量
	

	//#define 定义的常量
    #define MAX 10000//将MAX定义为常量10000，该定义代码在{}外面也行
	int b = MAX;//MAX就是define定义出来的常量
	printf("%d\n", b);


	//枚举常量：如性别，星期//enum为枚举关键字
	enum Sex//定义一个枚举变量Sex
	{
		//这种枚举变量的未来可能取值，这三个可能取值就是枚举常量，数据类型为整型
		MALE,//枚举常量可以赋值，如将这里改为MALE = 3,就是将MALE赋值为3，打印MALE的结果也为3
		FEMALE,
		SECRET
	};
	//枚举常量为常量，默认从0开始，打印结果也为数字
	enum Sex s = MALE;
	printf("%d\n", MALE);//MALE默认为0
	printf("%d\n", FEMALE);//FEMALE默认为1
	printf("%d\n", SECRET);//SECRET默认为2
	return 0;
}