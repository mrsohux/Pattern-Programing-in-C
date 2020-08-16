/*
Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #
*/
/*
Algorithum
  START:
       Accept number form user
	   Iterate loop
	   Intialize counter
	   print number and #
	   
	END
*/
#include<stdio.h>
void pattern(int iNo)
{
	int i=0;
	
	for(i=iNo;i>=1;i--)
	{  
		printf("%d # ",i);
		
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
