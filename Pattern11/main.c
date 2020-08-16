/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : A B C D
		 A B C D
		 A B C D
		 A B C D
*/


#include<stdio.h>

void pattern(int iRow,int iCol)
{ int i=0,j=0;
 for(i=0;i<iRow;i++)
 {
	for(j=0;j<iCol;j++)
   {
	printf("%c ",j+65);
   } 
   printf("\n");
 }
	
	
}
int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter a Row");
	scanf("%d",&iValue1);
	printf("Enter a column");
	scanf("%d",&iValue2);
	
	pattern(iValue1,iValue2);
	
	return 0;
}