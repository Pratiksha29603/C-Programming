#include<stdio.h>
int main()
{
	int i=0;
	char ch []={'Z','O','H','O'};
	char *ptr,*str;
	ptr=ch;
	str=ch;
	i=(*ptr-- + ++*str)-10;
	printf("%d\n",i);
	return 0;
}