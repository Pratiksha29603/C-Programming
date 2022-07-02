/*
**************************************Array*************************************************************
Statement: Accepet the size of row and column from user and find the smallest and largest number from
			2D array or matrix.
input:	Row=2, column=2

			1 2 3 
			4 5 6 
			7 8 9
			
output= Min=1, max=9
***********************************************************************************************************			
*/

#include<stdio.h>

void acc(int [0][0],int,int );
void maxmin(int [0][0],int,int);

void main()
{
    int a[0][0],r,c;   

    printf("\n\t\t**Smallest & largest no. from matrix**\n"); 

    printf("\n\tEnter the size of row:\n\t");
    scanf("%d",&r);
    printf("\tEnter the size of column:\n\t");
    scanf("%d",&c);

    acc(a,r,c);
    maxmin(a,r,c);
}

void acc(int m[0][0],int r,int c)
{
    int i,j;
    printf("\n\tenter the elements of matrix\n");
    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            printf("\telement[%d][%d]=  ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}

void maxmin(int m[0][0],int r, int c)
{
    int max=m[0][0], min=m[0][0],i,j;

    for (i=0; i<=r; i++)
    {
        for (j=0; j<=c; j++)
        {   
            if(m[i][j]>max)
                max= m[i][j];

            if(m[i][j]<min)
                min= m[i][j];
        }
    }
    printf("\n\tGreatest no. is :  %d\n",max);
    printf("\n\tSmallest no. is :  %d\n",min);
}