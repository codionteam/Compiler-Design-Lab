#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    int count=0, flag=0;

    for(int i=0; a[i] != '\0'; i++)
    {
        if ( a[i] == ' ' || a[i] == '\t' || a[i] == '\n')
        {
            flag = 0;
        }
        else if ( flag == 0 )
        {
            count ++;
            flag = 1;
        }

    }
    printf("%s = %d", a, count);
    return 0;
}