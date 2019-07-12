#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char** argv) {

// validar que pase un argumento
if (argc < 2){
 printf("No se encontraron argumentos \n");
return 1;
}

//convertir ese argumento a un numero entero. ese numero
//representa la cantidad de megabytes
   int bytes= atoi(argv[1]);


//solicitar esa cantidad de megabytes al heap del 'adress space'  y 
// asignarlo a un arreglo 
 int *array = malloc(bytes*1024*1024*(sizeof(int)));
  if (array == NULL) {
printf("memoria no asignada\n");
exit(-1);
}
//iterar sobre el arreglo 
int i=0;
for(;i < bytes*1024*1024 ; i++)
array[i] =i;

//salir 
sleep(10);

return 0;
}
