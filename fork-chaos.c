/*
 * A C program for unix processes.
 * Showing the chaotic behavior of fork() function.
 * Specifically, data race (to stdin).
 * Use wait() function to avoid it.
 *
 */


#include <stdio.h>
#include <unistd.h>

void print(int start, int end)
{
	for (int i = start; i <= end; i++)
		printf("%i ", i);
}

int main()
{
	int id = fork(); // Creates a child process,
	// returns 0 to the new process,
	// and PID of of new process to parent process.
	if (id)
		print(1, 5);
	else
		print(6, 10);
}


