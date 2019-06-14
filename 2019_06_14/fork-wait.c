#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
Este programa en C debe imprimir lo siguiente:

Soy el hijo y mi identificador es 34567
Soy el padre, mi identificador es 34566 y el de mi hijo es 34567

Hacer uso de la funcion 'getpid()'
 */
int main (int argc, char** argv) {
pid_t pid;


pid=fork();
if (pid==0){
sleep(3);
printf ("Soy el hijo y identificador es %d\n",(int)getpid() );
}
else {

int status;
pid_t pid2;
printf("Soy el padre, mi identificador es %d y el de mi hijo es %d\n"
, getpid(),pid);
pid2= wait (NULL);
printf ("Termino mi hijo \n")
}
}
