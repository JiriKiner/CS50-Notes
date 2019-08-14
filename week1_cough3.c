#include <stdio.h>

void cough(int n);

int main(void)
{
	cough(3);
}

void cough(int n)
{
	for (int n = 0; n < 3; n++)
	{
		printf("cough\n");
	}
}
