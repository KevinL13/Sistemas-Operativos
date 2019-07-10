#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
    int rc = fork();

    if (rc == 0) // proceso hjo 
    {
        printf("proceso hijo\n");
        char * const argv[] = {"ls", NULL};
        char * const envp[] = {NULL};


        //execl("/bin/ls", "ls", NULL);
        execlp("ls", "ls", NULL);
        //execle("/bin/ls", "ls", NULL, envp);

        //execv("/bin/ls", argv);
        //execvp("ls", argv);
        //execvpe("ls", argv, envp);
    }
    else  // proceso padre 
    {
        wait(NULL);
    }
}
  


