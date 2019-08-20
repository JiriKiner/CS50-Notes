// Explicitly casts chars to ints

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
	string s = get_string("String: ");
	for (int = 0; i < strlen(s); i++)
	{
		int c = (int) s[i];	// I even don't have to specify (int), I can just write int c = s[i]
		printf("%c %i\n", s[i], c); // I can even exclude the whole line above and just type printf("%c %i\n", s[i], s[i]);
	}
}