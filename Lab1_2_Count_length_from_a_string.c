// #include<stdio.h>
// int main()
// {
//     char a[100];
//     gets(a);
//     int count=0;

//     while(a[count] != '\0')
//     {
//         count++;
//     }
//     printf("%s = %d", a, count);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    int count = strlen(a);
    printf("%s = %d", a, count);
    return 0;
}