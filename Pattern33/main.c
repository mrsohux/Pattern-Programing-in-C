/*
3. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 6 iCol = 6
Output : * * * * * *
		 * 		 * *
		 *     *   *
		 *   *     *
         * *	   *
         * * * * * *
*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
	int i=0,j=0;
     for(i=1;i<=iRow;i++)
	 {
		 for(j=1;j<=iCol;j++)
		 {
			 if(i==1 || j ==1 ||i==iRow ||j==iCol)
			 {
				 printf("*\t");
			 }
			 else if((i+j)==iCol+1)
			 {
				 printf("*\t");
			 }
			 else{
				 printf("\t");
			 }
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