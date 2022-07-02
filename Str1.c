#include<stdio.h>
#include<string.h>

int main()
{
	char Arr[10]="Hello";
	char Brr[10];
	int ret=0;
	printf("size of arr:%d\n",sizeof(Arr));  //10
	
	printf("Length of arr is:%d\n", strlen(Arr)); //5
	
	strcpy(Brr,Arr);
	printf("Contents of Brr:%s\n",Brr);
	
	ret=strcmp(Arr,Brr);
	
	if(ret==0)
	{
		printf("String are eql\n");
	}
	else
	{
		printf("String are not eql\n");
	}
	
	return 0;

}