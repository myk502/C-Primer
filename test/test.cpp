#include<cstdio>
#include<iostream>

struct X
{
	int a;
	int b;
};

#define VALUE_OF_PTR(p) (*((long*)&p))

int main()
{
	int X:: *itb = &X::b;
	int X:: *ita = &X::a;
	printf("%d\n", itb);
	return 0;
}
