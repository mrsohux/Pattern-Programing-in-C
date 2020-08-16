/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output : 1 2 3 4
		 5 6 7 8
         9 1 2 3
         4 5 6 7
*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
	
	int i=0,j=0,iNo=1;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{   
	        if(iNo<=9)
			{
				printf("%d ",iNo);
			}
			iNo++;
			if(iNo>9)
			{
				iNo=1;
			}
		}
		printf("\n");
	}
	
   
}


int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter Row and column");
	scanf("%d %d",&iValue1,&iValue2);
	
	
	pattern(iValue1,iValue2);
	return 0;
}
