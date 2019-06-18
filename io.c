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

void fseek (char archivo,int valor,   )
{
