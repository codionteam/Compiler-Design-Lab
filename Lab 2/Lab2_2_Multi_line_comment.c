#include <stdio.h>
#include <string.h>

int main() 
{
    char a[100] , b[100]; 
    int j = 0, len;

    gets(a);
    len = strlen(a);

    for (int i = 0; i < len - 1; i++) 
    {   
        if (a[i] == '/' && a[i+1] == '*') 
        {           
            i += 2;          
            while (i < len - 1) 
            {               
                if (a[i] == '*' && a[i+1] == '/') 
                {
                    break;
                }
                else
                {
                    b[j++] = a[i++];
                } 
            }
        }
    }
    b[j] = '\0'; 
    printf("Comment:%s\n", b);
    return 0;
}