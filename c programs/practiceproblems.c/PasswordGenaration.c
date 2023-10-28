#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int passwordGenaration(int N)
{
	char num[] = {"1234567890"};

	char loweralph[] = {"abcdefghijklmnopqrstuvwxyz"};

	char upperalph[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

	char spectialChar[] = {"@$&#*"};

	int random =0;

	srand(time(NULL));
	random = rand() % 4; 

	char password[N]; 
	for (int i = 0; i < N; i++)
	{
		if(random == 1) 
		{ 
			password[i] = num[rand()%10]; 
			printf("%c",password[i]); 
			random = rand() % 4;
		} 
		else if (random == 2) 
		{ 
			password[i] = loweralph[rand()%26]; 
			printf("%c",password[i]); 
			random = rand() % 4;

		}  
		else if (random == 3) 
		{ 
			password[i] = upperalph[rand()%26];
			printf("%c",password[i]);
			random = rand() % 4;

		}  
		else
		{ 
			password[i] = spectialChar[rand()%5]; 
			printf("%c",password[i]);
			random = rand() % 4;
		} 

	}
	
}
int main()
{
	int N;
	printf("Enter the Length of PASSWORD You want\n");
	scanf("%d", &N);
	passwordGenaration(N);

	return 0;
}