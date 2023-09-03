#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int  chicken, rabbits;
	int total;
	int feet;
	scanf("%d%d", &total, &feet);
	chicken = (total * 4 - feet) / 2;
	rabbits = total - chicken;
	printf("chicken=%d,rabbits=%d", chicken, rabbits);
	return 0;

}