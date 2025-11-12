#include<stdio.h>
int main()
{
    char a[100], b[100];
    gets(a);
    int count=0;

    for(int i=0; a[i] != '\0'; i++)
    {
        if ( a[i] != ' ' && a[i] != '\t' && a[i] != '\n')
        {
            b[count] = a[i];
            count++;
        }
    }
    b[count] = '\0';
    // printf("%s\n", a);
    printf("%s", b);
    return 0;
}