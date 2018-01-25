#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int * a;
	int i = 0;

	printf( "size of int:%ld\n", sizeof(int) );

	a = malloc( 4 * sizeof(int) );
	printf( "size of int:%ld\n", sizeof(int) );
	for( i=0; i<4; i++){
		a[i] = i;
	}
	for( i=0; i<4; i++){
		printf( "a[%d]=%d\n", i, a[i] );
	}
	printf( "*a=%d\n", *a);
	printf( "*(a+1)=%d\n", *(a+1));
	return 0;
}
