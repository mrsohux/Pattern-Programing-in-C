/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output : 1 2 3 4 5
		-1 -2 -3 -4 -5
		 1 2 3 4 5
		-1 -2 -3 -4 -5
		 1 2 3 4 5
*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{int x=1;
	int y=-1;
		for(j=0;j<iCol;j++)
		{
			if((i % 2)==0)
			{
				printf("%d ",y);
				y--;
			}
			else{
				printf("%d ",x);
				x++;
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
