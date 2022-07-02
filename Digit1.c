/*             *******  Problems on Digits  *******

Statement: Accept number from user and print the reverse order of that number

*/


#include<stdio.h> // Header file inclusion
 void Display()
 {
 
	int iNo=7521; //Local Variable
	int iDigit=0;
	printf("Number is : %d\n",iNo);
	
	//Logic
	iDigit=iNo%10;
	printf("Reverse Number is: %d",iDigit); //1
	iNo=iNo/10; 		  //752
	
	iDigit=iNo%10;
	printf("%d",iDigit); //2
	iNo=iNo/10;  		   //75
	
	iDigit=iNo%10;
	printf("%d",iDigit); //5
	iNo=iNo/10;			    //7
	
	iDigit=iNo%10;
	printf("%d",iDigit); //7
	iNo=iNo/10;				//0
	
	
		
 }
 int main()  //entry point function
 {
	
	Display();  //function call
	return 0;
 }