#include <stdio.h>
#include <string.h>

int main()
{
    char a[200], b[200];
    int c = 0;
    int in = 0;

    while (fgets(a, sizeof(a), stdin) != NULL)
    {
        int i = 0;
        while (a[i] != '\0')
        {
            if (a[i] == '/' && a[i+1] == '/' && in == 0)
            {
                i += 3;
                b[c++] = '-';

                while (a[i] == ' ')     
                    i++;

                int s = i;
                while (a[i] != '\0' && a[i] != '\n') 
                    i++;

                int n = i - s;
                for (int j = 0; j < n; j++)
                    b[c++] = '-';

                if (a[i] == '\n') 
                    b[c++] = '\n';
                break;
            }
            else if (a[i] == '/' && a[i+1] == '*' && in == 0)
            {
                in = 1;
                i += 3;
                while (in)
                {
                    if (a[i] == '\0')
                        break;

                    if (a[i] == '*' && a[i+1] == '/')
                    {
                        b[c++] = '-';
                        i += 2;
                        in = 0;
                    }
                    else
                    {
                        if (a[i] == '\n') 
                            b[c++] = '\n';
                        else 
                            b[c++] = '-';
                        i++;
                    }
                }
            }
            else if (in == 1)
            {
                if (a[i] == '*' && a[i+1] == '/')
                {
                    b[c++] = '-';
                    in = 0;
                    i += 2;
                }
                else
                {
                    if (a[i] == '\n') 
                        b[c++] = '\n';
                    else 
                        b[c++] = '-';
                    i++;
                }
            }
            else
            {
                b[c++] = a[i];
                i++;
            }
        }
    }

    b[--c] = '\0';
    printf("%s", b);
    return 0;
}
