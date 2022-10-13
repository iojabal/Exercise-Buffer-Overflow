#include <stdio.h>
#include <string.h>

int main(int argc,char **argv[])
{
    char buff[200];
    strcpy(buff, argv[1]);
    printf("Input: %s \n", buff);
    printf("se copio correctamente \n");
}

