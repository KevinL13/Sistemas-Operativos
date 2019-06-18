#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int exists(const char *fname)
{
    FILE *file;
    if ((file = fopen(fname, "r")))
    {
        fclose(file);
        return 1;
    }
    return 0;
}

 int io (char *archivo){
  fseek(archivo, 0, SEEK_END) 
 
if  (ftell = ) { 
} 
{ 





 fprintf(fp,"%d",n);
