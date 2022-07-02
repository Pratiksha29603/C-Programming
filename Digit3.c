/*             *******  Problems on Digits  *******

Statement: Accept number from user and print the reverse order of that number
			using while loop with Function

*/


#include<stdio.h> // Header file inclusion
 int Display(int iNo)
 {

	int iDigit=0;
	
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
	int iValue=0;
	
	
	printf("Enter Nuber \n");
	scanf("%d",&iValue);
	
	Display(iValue);  //function call
	
	return 0;
 }