#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("%i is the ID of the current process\n", getpid());
    fflush(stdout);
    while (1);   
}