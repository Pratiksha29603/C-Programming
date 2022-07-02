/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT: 5. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 4
Output : 
1 2 3 4
5 6 7 8
9 10 11 12
 
**********************************************************************************
*/


#include<stdio.h>      

  void Display(int iRow, int iCol)
  {
      int i=0, j=0,k=0;
      
      
     
	 
      for(i=1; i<=(iRow*iCol); i++)
      {
		 for(j=1; j<=iCol; j++)
          {
			printf("%d\t",i);	
			i++;
		  }
			printf("\n");
	  }j++;
        
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