/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT: 2. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : A B C D
		 a b c d
		 A B C D
		 a b c d
 
**********************************************************************************
*/


#include<stdio.h>      

  void Display(int iRow, int iCol)
  {
      int i=0, j=0;
      char ch= 'A',cVal='a';
      if(iRow != iCol)
      {
          return;
      }
      
      for(i=1,ch='A',cVal='a'; i<=iRow; i++,ch++,cVal++)
      {
          for(j=1,ch='A',cVal='a'; j<=iCol; j++,ch++,cVal++)
          {
             if(i%2!=0)
			{
				printf("%c\t",ch);
				
			}
			else
			{
				printf("%c\t",cVal);
				
			}	 
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