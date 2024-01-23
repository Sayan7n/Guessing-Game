#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,num,random;
	srand(time(0));
	
	printf("Random number in [1,10]\n");

	
		num = rand()%10 + 1 ;
	
		random = num;
		
	

	int n;
	int guess = 1;
//	printf("Enter a number between 1 to 10: ");
//	scanf("%d",&n);

	while(1)
	{
		printf("\nEnter a number between 1 to 10 or Enter -1 to exit: ");
		scanf("%d",&n);
		
		if(n == -1)
		{
			printf("Exit the program.");
			break;
		}
	

		if(n >= 1 && n <= 10)
		{
			while(1)
			{
		
			
				if(n == random)
				{
					printf("\nCongratulations, You guess the right number on your first attempt. ");
					printf("\nYou guess the number in %d attempt..",guess);
					
					break;
			
				}
				else if(n > random)
				{
					printf("\nYou guess the wrong number. Please decrease the number.");
			
				}
				else if(n < random)
				{
					printf("\nYou guess the wrong number. Please increase the number.");
			
				}
				guess++;
		
				printf("\nEnter a number between 1 to 10: ");
				scanf("%d",&n);
			}
		}
		
		else
		{
			printf("\nInvalid number!! Please enter number between 1 to 10..");
		}
	}
	
 
	return 0;
}