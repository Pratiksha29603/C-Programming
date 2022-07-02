/*
**********************PROBLEMS ON File Manipulation ************************************
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
	fd=creat("Marvellous.tex",0777);
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