/*             *******  Problems on Digits  *******

Statement: Accept number from user and print the reverse order of that number
			using while loop

*/


#include<stdio.h> // Header file inclusion
 void Display()
 {
 
	int iNo=7521; //Local Variable
	int iDigit=0;
	printf("Number is : %d\n",iNo);
	
	//Logic
	while(iNo!=0)  //while(iNO>0)
	{
		iDigit=iNo%10;
		printf("%d",iDigit); 
		iNo=iNo/10; 		
	
	}
			
 }
 int main()  //entry point function
 {
	
	Display();  //function call
	return 0;
 }