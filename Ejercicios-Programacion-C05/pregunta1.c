#include <unistd.h>
#include <stdio.h>


int main(int argc, char** argv) {

  int x;
  x= 100; 
 
  pid_t pid;
  pid = fork();

  if(pid==0){// proceso hijo 
    printf("Soy el hijo \n");
    printf("El valor de x es: %d \n", x);
    x=50;

    printf("Soy el hijo y ahora el valor de x es:%d \n ",x);

  
  } else {// proceso padre 
    printf("Soy el padre\n");
    printf("El valor de x es: %d \n", x);
    x=200;
    printf("Soy el padre y ahora el valor de x es:%d\n ",x);

    }

}
