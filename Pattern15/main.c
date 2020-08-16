/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 4
Output : 1 2 3 4
		 5 6 7 8
         9 10 11 12
*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
	
	int i=0,j=0,iNo=1;
	int iCnt=iRow * iCol;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{   
	        if(iNo<=iCnt)
			{
				printf("%d ",iNo);
			}
			
			iNo++;
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
