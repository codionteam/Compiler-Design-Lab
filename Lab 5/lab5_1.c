#include<stdio.h>
#include<string.h>

int main()
{
    char a[500], b[2000];
    int count = 0;

    while(fgets(a, sizeof(a), stdin) != NULL)
    {
        int len = strlen(a);

        for(int i = 0; a[i] != '\0'; i++)
        {
            // -------- Single line comment: -------- //
            if(a[i] == '/' && a[i+1] == '/')
            {
                i += 2;

                while(i < len)
                {
                    b[count] = a[i];
                    count++;
                    i++;
                }
                break;
            }

            // -------- Multiple line comment: // ----------
            else if(a[i] == '/' && a[i+1] == '*')
            {
                i += 2;
                while(1)
                {
                    if(i >= len)
                    {
                        if(fgets(a, sizeof(a), stdin) == NULL)
                            break;

                        len = strlen(a);
                        i = 0;
                    }
                    if(a[i] == '*' && a[i+1] == '/')
                    {
                        i += 2;
                        b[count++] ='\n';   
                        break;
                    }
                    b[count] = a[i];
                    count++;
                    i++;
                }
            }
        }
    }

    b[count] = '\0';
    printf("%s", b);

    return 0;
}
