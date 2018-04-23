#include<stdio.h>
#include<getopt.h>
#include<unistd.h>

int main(int argc,char** argv)
{
	int opt, x;
	while(-1 != (opt = getopt(argc, argv, "DX:")))
	{
		switch(opt)
		{
			case 'D':printf("D is used!\n");
					 break;
			case 'X':printf("The value of X is %s\n", optarg);
					 break;
		}
	}
	return 0;
}
