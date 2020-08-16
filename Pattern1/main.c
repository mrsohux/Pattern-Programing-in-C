/*
Accept number from user and display below pattern.
Input : 5
Output : A B C D E
/*
Algorithum
  START:
		Accept Number for user
		Intialize another variable for for loop
		 By using Ascii value(i +Ascii value) 
		 print Alphabets that particular range
              
	   
	END
*/
#include<stdio.h>
void Alphabets(int iNo)
{
	int i=0;
	for(i=i;i<iNo;i++)
	{
		printf("%c ",i+65);
	}
}

int main()     //entry point
{   int iValue=0;

	printf("Enter Number");
	scanf("%d",&iValue);
	
	Alphabets(iValue);
	
	return 0;
	
}
