#include <stdio.h>

int main()
{	int n, s;

	printf("n = ?\n");

	scanf("%d", &n);
	
	if(n>0){
		s = n*(n+1)/2;
		printf("%d\n", s);
	}

	else printf("프로그램 종료\n");

	return 0;
}

