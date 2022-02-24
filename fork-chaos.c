#include <stdio.h>
#include <unistd.h>

void print(int start, int end)
{
	for (int i = start; i <= end; i++)
		printf("%i ", i);
}

int main()
{
	int id = fork();
	if (id)
		print(1, 5);
	else
		print(6, 10);
}


