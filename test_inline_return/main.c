#include <stdio.h>

inline int func(void)
{
	return 0;
}

int main(void)
{
	printf("before func\n");
	func();
	printf("after func\n");

	return 0;
}
