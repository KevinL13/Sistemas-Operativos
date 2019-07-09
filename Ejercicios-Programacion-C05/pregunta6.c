#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char** argv) {
  
    pid_t pid;
    pid = fork();

  if (pid == 0) {//proceso hijo 
    
    printf("soy el proceso hijo (pid:%d) \n",getpid());
  } else {//proceso padre 
    int estado;
    waitpid(pid,&estado,0); 
    printf("soy el proceso padre (pid:%d)  \n",getpid());
  }
    return 0;
}
