#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char s1[255] = "123";
    char s2[255] = "123";
    char distNameFilePath[255] = "/etc/linuxmint/info";
    FILE * pDistNameFile;
    pDistNameFile = fopen (distNameFilePath,"r");
    if (pDistNameFile == NULL)
    {
        printf("File [%s] not found", distNameFilePath);
        return 1;
    }
    char releaseName[255] = "";
    char ch = '#';
    int i = 0;
    //while (ch != EOF)
    //{   
        char tmp[255];
        do
        {
            ch = getc(pDistNameFile);
            printf("%c", ch);
            ++i;
        }while(ch != '\n');
        printf("\n");
    //}
    //printf("Hello world!\n");
    int eq = strcmp (s1, s2);
    if (eq == 0)
    {
	    printf("Strings %s and %s are equal\n", s1, s2);
    }
    fclose(pDistNameFile);
    return(0);
}