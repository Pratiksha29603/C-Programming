/*
**********************PROBLEMS ON String ************************************
						in C
STATEMENT:  Write C program which Create the file 
				
Input :  
Output : 
**********************************************************************************
*/



#include<stdio.h>

#include<unistd.h>
#include<io.h>
 int main()
 {
	int fd=0;
	char Fname[30];
	
	printf("Enter File Name\n");
	scanf("%s",Fname);
	fd=creat(Fname,0777); // 0 owner, group, other
	
	if(fd==-1)
	{
		printf("Unable to create the file\n");
	}
	else
	{
		printf("file Succesfully created\n");
	}
	
 
	return 0;
 }