#include <stdio.h>

int main()
{	int n, s;

	do{
		printf("n = ?\n");

		scanf("%d", &n);

		break;

	}while(n>0);

	s = n*(n+1)/2;

	printf("%d\n", s);	
       
	printf("프로그램 종료\n");

	return 0;
}

