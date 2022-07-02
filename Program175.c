/*
**********************PROBLEMS ON File Manipulation ************************************
						in C
STATEMENT:  file create and read 5 letters from perticular range that in that 
			existing file (creating hole in file)
				
Input :  abcdefghijklmnopqrstuvwxyz
Output : once hole gets created size of file will get increase
**********************************************************************************
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	
	fd= open("LB17.txt",O_RDWR);// fd= file descripter
	
	if(fd==-1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	/////////////////////
	//0 from starting position
	//1 from current position
	//2 from end of the file
	//lseek used to skip the index
	
	lseek(fd,10,2);
	write(fd,"*",1);
	
	close(fd);
	
	return 0;
	
}    