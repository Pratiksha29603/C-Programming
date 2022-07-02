/*
**********************PROBLEMS ON File Manipulation ************************************
						in C
STATEMENT:  file create and read 5 letters from perticular range that in that 
			existing file (Starting offset)
				
Input :  abcdefghijklmnopqrstuvwxyz
Output : fghij
**********************************************************************************
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char Arr[10];
	fd= open("LB17.txt",O_RDWR);// fd= file descripter
	
	if(fd==-1)
	{
		printf("Unable to open the file\n");
		
	}
	/////////////////////
	//0 from starting position
	//1 from current position
	//2 from end of the file
	//lseek used to skip the index
	
	lseek(fd,5,0);
	read(fd,Arr,5);
	
	printf("Data from file is:\t");
	
	write(1,Arr,5);
	close(fd);
	
	return 0;
	
}    