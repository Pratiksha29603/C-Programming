/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT: 4. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 5
Output :
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1
 
**********************************************************************************
*/


#include<stdio.h>      

  void Display(int iRow, int iCol)
  {
      int i=0, j=0;
      
      
      
      for(i=iRow; i>=1; i--)
      {
          for(j=1; j<=iCol; j++)
          {
             printf("%d",i);	 
          }
            printf("\n");
      }
           
  }
  
 int main()
  {
      int iValue1=0, iValue2=0;
      
      printf("Enter the Number: ");
      scanf("%d",&iValue1);
      
      printf("Enter the Number: ");
      scanf("%d",&iValue2);
      
      Display(iValue1,iValue2);   //Function call - Display(5);
      
      return 0;
  }  