/*
**********************PROBLEMS ON File Manipulation ************************************
						in C
STATEMENT:  file create and read 5 letters from perticular range that in that 
			existing file  (Current offset)
				
Input :  abcdefghijklmnopqrstuvwxyz
Output : fghij -> klmno 
Final Output: pqrst
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
		return -1;
	}
	/////////////////////
	//0 from starting position
	//1 from current position
	//2 from end of the file
	//lseek used to skip the index
	
	lseek(fd,5,0);
	
	read(fd,Arr,5);
	write(1,Arr,5);
	printf("\n");
	
	lseek(fd,5,1);
	
	read(fd,Arr,5);
	write(1,Arr,5);
	printf("\n");
	close(fd);
	
	return 0;
	
}    