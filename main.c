#include <stdio.h>
#include "sum.h"

int main()
{	int n, s;

	do{
		printf("n = ?\n");

		scanf("%d", &n);
		

	}while(n <= 0);

	s = sum(n);

	printf("%d\n", s);	
       
	printf("프로그램 종료\n");

	return 0;
}

