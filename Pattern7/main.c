/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 3
Output : 1 2 3
		 1 2 3
		 1 2 3
         1 2 3
*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
	int i=0,j=0;
	
  for(i=0;i<iRow;i++)
  {
	 for(j=1;j<=iCol;j++)
	{
		printf("%d ",j);
	}
printf("\n");	
  }
	
   
}


int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter Row");
	scanf("%d",&iValue1);
	
	printf("Enter Column");
	scanf("%d",&iValue2);
	
	pattern(iValue1,iValue2);
	return 0;
}