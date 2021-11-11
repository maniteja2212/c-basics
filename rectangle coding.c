#include<stdio.h>
void main()
{
	int l,w,a,p;
	printf("enter lenght and width");
	scanf("%d%d",&l,&w);
	a=l*w;
	p=2*(l+w);
	printf("area of rectangle %d\n",a);
	printf("perimeter of rectangle %d",p);
}
