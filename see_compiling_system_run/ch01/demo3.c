#include <stdio.h>
#include <string.h>

void fun1() 
{
	int m = 10;
	char num[4];
	strcpy(num, "bbbbbbbbbbbbb\x0F\x10\x40\x00");
}

void fun2()
{
	printf("You wee attacked!!!\n");
}

int main()
{
	fun1();
	return 0;
}
