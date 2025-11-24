#include <stdio.h>

int isBalanced(char str[]) 
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == '(')
            count++;
        else if (str[i] == ')') 
        {
            count--;
            if (count < 0)
                return 0; 
        }
    }
    return count == 0;
}

int main() 
{
    char a[200];

    while (fgets(a, sizeof(a), stdin) != NULL) 
    {
        int i = 0;
        while (a[i] != '\0') 
            i++;
        if (i > 0 && a[i-1] == '\n') 
            a[i-1] = '\0';

        int x= (isBalanced(a));
        if (x!=0)
            printf("balance\n");
        else
            printf("not balance\n");
    }

    return 0;
}
