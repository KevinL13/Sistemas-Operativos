#include "solucion.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc, char** argv) {
  int x = 20;
  pid_t pid;

pid=fork();
if (pid==0){
  printf("soy el hijo\n calculo fibonacci de %d\n",x);
 printf("guardo el valor calculado en archivo 'archivo'\n");
  printf("fibonacci(%d) = ",x);
  x = fibonacci(x);
  printf("%d\n",x);
  guardarEntero("archivo",x);
}
else  {
 printf("soy el padre \n espero a que termine mi hijo\n");
wait(NULL);
 printf("fibonacci(%d)X100 =",x);
 x= leerEntero("archivo") * 100;
 printf ("%d\n",x);
  return 0;
}

