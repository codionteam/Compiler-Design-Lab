#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);

    int open = 0, close = 0;

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == '(') 
            open++;
        else if(s[i] == ')') 
            close++;
    }

    if(open > close)
    {
        int diff = open - close;
        while(diff--)
        {
            printf(")");
        }
    }

    else if(close > open)
    {
        int diff = close - open;
        char temp[100];
        int idx = 0;

        while(diff--)
        {
            temp[idx++] = '(';
        }

        strcat(temp, s);

        printf("Fixed: %s", temp);
        return 0;
    }

    return 0;
}