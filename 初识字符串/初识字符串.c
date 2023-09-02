#include <stdio.h>
#include <string.h>
/*初识字符串
字符串就是一串字符（用双引号引起的一串字符）
字符串的结束标志是\0，但在计算字符串长度是\0不计入长度中，但在计算元素个数时\0算作一个元素*/
int main()
{
	//字符数组：数组是一组相同类型的元素
	char arr[] = "hello";  //创建一个字符串arr，之前也学过int arr[6] = {0};创建一个数组
	char arr1[] = "abc";   

	//字符串的末尾隐藏了一个\0，在监视中能够观察到
	char arr2[] = { 'a','b','c','\0'};
	//由单引号引起的为一个字符，由双引号引起的为一串字符
	//打印字符串
	printf("%s\n", arr1);
	printf("%s\n", arr2);   //%s —— 打印字符串所需
	//求字符串长度，用到函数strlen（是string length的缩写）
	int len = strlen("abc");//strlen需要引用一个头文件 #include<string.h>
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	//若arr2的末尾没有\0作为字符串的结束标志，则字符串长度随机值，因为不知道'c'之后多久是\0
	return 0;
}