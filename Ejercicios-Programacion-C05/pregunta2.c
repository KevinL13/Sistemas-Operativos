#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>


int main(int argc, char** argv) {
    pid_t pid;
    

    int archivo = open("miarchivo.txt", O_CREATE|O_RDWR | S_IRUSR | S_IWUSR);


  	pid = fork();

  	if(pid==0)
    {//proceso hijo 

      printf("proceso hijo\n ");	    
      write(archivo,"Escribio el hijo\n",30);
      
    } 
    else
    {//proceso padre
      printf("proceso padre\n");
      write(file,"Escribio el padre\n",30);
    }
	return 0;
}
