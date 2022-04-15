#include <stdio.h>
#include <stdlib.h>

FILE *f;
int ret,n;
void create_a_new_file(void);
int main()
{
    printf("Main Start\n");

    create_a_new_file();

    return 0;
}

//Funcions implementation
void create_a_new_file(void)
{
    char s[30];
    printf("provide full name for the new file:");
    scanf("%s",&s);
    printf("\n%s\n",s);
    f = fopen(s,"wt");

    fclose(f);
    printf("File:%s  created\n",s);
}
