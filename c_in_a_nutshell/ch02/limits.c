//
// Created by pollux on 2019-04-11.
//

#include <limits.h>
#include <stdio.h>

int main()
{
	printf("Storage sizes and value range of the types char and int\n\n");
	printf("The type char is %s.\n\n", CHAR_MIN < 0 ? "signed":"unsigned");
	printf(" Type Size (in bytes) Minimum           Maximum\n");
	printf("char %8zu %20d %15d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("int %8zu %20d %15d\n", sizeof(int), INT_MIN, INT_MAX);
}
