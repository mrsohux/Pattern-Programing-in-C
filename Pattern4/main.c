/*
Accept number from user and display below pattern.
Input : 4
Output : # 1 * # 2 * # 3 * # 4 *
*/

#include<stdio.h>
void pattern(int iNo)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("# ");
		printf("%d ",i);
		printf("* ");
	}
	
}


int main()     //entry point
{  
	int iValue=0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	pattern(iValue);
	
	return 0;
	
}
