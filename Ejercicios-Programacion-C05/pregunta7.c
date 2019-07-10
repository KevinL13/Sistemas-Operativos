
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int rc = fork();

    if (rc == 0) // proceso hijo 
    {   printf("proceso hijo"\n);
        close(STDOUT_FILENO);
        printf("imprimiendo despues \n");
    }
    else //proceso padre
    {
        wait(NULL);
        printf("proceso padre\n");
    }
 
}
