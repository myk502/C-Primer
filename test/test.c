#include<stdio.h>
#include<stdint.h>
typedef struct 
{
	int x;
	char y;
	double z;
} A;

int main(void)
{
    A a;
	size_t bb = (size_t)&(((A*)(0)) -> z);
	printf("%zu\n", bb);
	return 0;
}
