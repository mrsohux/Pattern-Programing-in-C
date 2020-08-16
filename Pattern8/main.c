/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 5
Output : 5 4 3 2 1
		 5 4 3 2 1
		 5 4 3 2 1
*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
	if(iRow<0 || iCol<0)
	{
		iRow=-iRow;
		iCol=-iCol;
	}
	int j=0,i=0;
for(i=0;i<iRow;i++)
{
	

	for(j=iCol;j>=1;j--)
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