/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output : * # * #
		 * # * #
		 * # * #
*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
	if(iRow<0 || iCol<0)
	{
		iRow=-iRow;
		iCol=-iCol;
	}
	int i=0,j=0;
 for(i=0;i<iRow;i++)
 {
	
	for(j=1;j<=iCol;j++)
	{
		if((j%2)==0)
		{
			printf("# ");
		}else{
			printf("* ");
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
