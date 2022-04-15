#include <stdio.h>
#include <stdlib.h>

FILE *f;
int ret,n;
void run_action1(void);
int main()
{
    printf("Main Start\n");

    run_action1();

    return 0;
}

//Funcions implementation
void run_action1(void)
{
    char s[30];
    printf("provide full name for the new file:");
    scanf("%s",&s);
    printf("\n%s\n",s);
    f = fopen(s,"wt");
    fprintf(f,"first line\n");
    fclose(f);
    printf("File:%s  created\n",s);
}
