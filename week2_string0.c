// Prints string char by char

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
	string s = get_string("Input :");
	printf("Output:\n");
	for (int i = 0, n = strlen(s); i < strlen(s); i++)
	{
		printf("%c\n", s[i]);
	}
}