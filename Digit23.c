
/*             *******  Problems on Digits  *******

Statement: Write a program which accept number from user and check wheather the
			number is perfect or not
Input:28
Output:28

*/
#include<stdio.h>
#include<stdbool.h>
 
 int SumFactors(int);
 bool CheckPerfect(int);
  
  int main()
  {
      int iValue=0;
      bool bRet= false;
      
      printf("Enter Number: ");
      scanf("%d",&iValue);
      
      bRet = CheckPerfect(iValue);
      if(bRet == true)
      {
          printf("Number is Perfect");
      }
      else
      {
         printf("Number is NOT Perfect"); 
      }
      
    return 0;
  }
  
 bool CheckPerfect(int iNumber)
 {
	 int iSum=0,iCnt=0;
     int bRet=0;
	 if(iNumber<0)
	 {
		iNumber=-iNumber;
	 }
    for(iCnt=1; iCnt<=(iNumber/2); iCnt++)
    {
        if((iNumber % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
     
     if(iSum == iNumber)
     {
         return true;
     }
     else
     {
         return false;
     }
 }
  
 