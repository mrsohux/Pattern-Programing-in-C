/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output : 2 4 6 8 10
		 1 3 5 7 9
         2 4 6 8 10
         1 3 5 7 9
*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
	int i=0,j=0;
	int x=2,y=1;
	for(i=1;i<=iRow;i++)
	{
		for(j=0;j<=iCol;j++)
		{
			if((i%2)!=0)
			{
				printf("%d ",x);
				x=x+2;
				
			}
			else{
				printf("%d ",y);
				y=y+2;
			}
		}
		printf("\n");
		x=2;
		y=1;
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