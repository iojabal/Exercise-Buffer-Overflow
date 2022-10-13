#include <stdio.h>
#include <string.h>

int vuln(char *str)
{
    char buf[64];
    strcpy(buf,str);
    printf("Input: %s\n",buf);
    return 0;
}

int main(int argc,char **argv[])
{
    vuln(argv[1]);
}

