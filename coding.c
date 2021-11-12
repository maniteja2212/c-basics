#include<stdio.h>
void main()
{
	int m;
	printf("enter minutes");
	scanf("%d",&m);
	printf("%d hours %d minutes",m/60,m%60 );
}
