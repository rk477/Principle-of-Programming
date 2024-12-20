//  (Check password) Some websites impose certain rules for passwords. Write a 
// function that checks whether a string is a valid password. Suppose the password 
// rules are as follows:
// • A password must have at least eight characters.
// • A password consists of only letters and digits.
// • A password must contain at least two digits.
// Write a program that prompts the user to enter a password and displays Valid 
// Password if the rules are followed or Invalid Password otherwise.


#include <stdio.h>
#include <string.h>

void checkPassword(char password[])
{
	int length = strlen(password);	

	if (length >= 8)
	{
		int digit_count = 0;
		int upper_case = 0;
		int lower_case = 0;

		for (int i=0;i<length;i++)
		{
			if (password[i] >= 'a' && password[i] <= 'z') ++lower_case;
			if (password[i] >= 'A' && password[i] <= 'Z') ++upper_case;
			if (password[i] >= '0' && password[i] <= '9') ++digit_count;
		}
		
		if ((lower_case > 0 || upper_case > 0) && digit_count >= 2)
		{
			printf("Valid Password!");
		} else {
			printf("Invalid Password!");
		}

	}

	else {
		printf("Invalid Password!");
	}
}

int main()
{
	char password[16];

	printf("Enter Password: ");
	scanf("%15s", &password);

	checkPassword(password);

	return 0;
}