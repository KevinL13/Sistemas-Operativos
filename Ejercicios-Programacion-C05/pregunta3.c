#include <unistd.h>
#include <stdio.h>


int main(int argc, char** argv) {

  pid_t pid;
  pid = fork();

  if(pid==0){// proceso hijo 
    
    printf("Proceso hijo: \n");
    printf("hello \n");
    
  } else {// proceso padre 
    sleep(3); 
    printf("Proceso padre:\n");
    printf("goodbye\n");

    }

}
