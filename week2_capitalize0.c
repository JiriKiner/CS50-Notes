// Capitalizes a string

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
	string s = get_string("Before: ");
	printf("After: ");
	for (int i = 0, n = strlen(s); i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			printf("%c", s[i] - ('a' - 'A'));	// Subtracts the ASCII value of the lower letter from capital letter, which is 32 for all letters, and then subtracts the value (32) from my letter
		}
		else
		{
			printf("%c", s[i]);
		}
	}
	printf("\n");
}