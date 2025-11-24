#include <stdio.h>
#include <string.h>

int main()
{
    char a[200];
    scanf("%s", a);

    int i;
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == '1' && a[i+1] == '1')
        {
            printf("Invalid");
            return 0;
        }
    }
    printf("Valid");
    return 0;
}
