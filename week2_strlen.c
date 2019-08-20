#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
	string s = get_string("Name: ");

	int n = 0;
	while (s[n] != '\0')
	{
		n++;
	}

	printf("The length of your name is %i\n", n);
}