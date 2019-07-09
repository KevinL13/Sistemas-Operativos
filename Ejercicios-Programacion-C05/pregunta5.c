#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char** argv) {
  
    pid_t pid,wid;
    pid = fork();

  if (pid == 0) {//proceso hijo 
    wid=wait(NULL);
    printf("soy el proceso hijo (pid:%d) (pid de espera:%d) \n",getpid,wid());
  } else {//proceso padre 
    
    printf("soy el proceso padre (pid:%d) ( \n",getpid());
  }

  return 0;
}
