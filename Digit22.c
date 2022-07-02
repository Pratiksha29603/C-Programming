
/*             *******  Problems on Digits  *******

Statement: Write a program which accept number from user and check wheather the
			number is perfect or not using 2 function
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
     int bRet=0;
	 if(iNumber<0)
	 {
		iNumber=-iNumber;
	 }
     bRet = SumFactors(iNumber);
     
     if(bRet == iNumber)
     {
         return true;
     }
     else
     {
         return false;
     }
 }
  
  int SumFactors(int iNo)
  {
    int iSum=0, iCnt=0;
    
    if(iNo<0)
    {
        iNo = - iNo;
    }
    
    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
  }