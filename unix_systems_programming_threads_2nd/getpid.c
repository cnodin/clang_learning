#include<stdio.h>
#include<unistd.h>

int main(void) {
	printf("I am proccess %ld\n", (long)getpid());
	printf("My parent is %ld\n", (long)getppid());
}
