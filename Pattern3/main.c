/*
Accept number from user and display below pattern.
Input : 5
Output : 1 * 2 * 3 * 4 * 5 *
*/
/*
Algorithum
  START:
      accept number from user
	  print patter on screen number and *
	   
	END
*/

#include<stdio.h>
void pattern(int iNo)
{
	int iCnt=0;
	 for(iCnt=1;iCnt<=iNo;iCnt++)
	 {
		 printf("%d * ",iCnt);
	 }
	
}

int main()
{
	int iValue=0;
	printf("Enter number");
	scanf("%d",&iValue);
	
	pattern(iValue);
	
	return 0;
}