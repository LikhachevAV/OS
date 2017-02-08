#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char pFileName[255] = "/proc/version_signature";
    FILE * pFile;
    pFile = fopen (pFileName,"r");
    if (pFile == NULL)
    {
        printf("File [%s] not found", pFileName);
        return 1;
    }
    char ch = 0;
    printf("Linux version: ");
    do
    {
        ch = getc(pFile);
        printf("%c", ch);
    } while(ch != '\n');
    printf("\n");
    fclose(pFile);
    return(0);
}
