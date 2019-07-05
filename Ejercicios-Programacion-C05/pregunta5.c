#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char** argv) {
  
    pid_t pid,wid;
    pid = fork();

  if (pid == 0) {//proceso hijo 
    printf("soy el hijo (pid:%d) \n",getpid());
  } else {//proceso padre 
    wid=wait(NULL); 
    printf("soy el padre (pid:%d) (pid de espera:%d) \n",getpid(),wid);
  }

  return 0;
}
