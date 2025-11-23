// milti-line comment /* */
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int index=0;
    // gets(a);
    // printf("%s", a);
    while(fgets(a,100,stdin))
    {
        int len = strlen(a);

        for(int i=0; a[i] != '\0'; i++)
        {
            if(a[i]=='/' && a[i+1]=='*')
            {
                i+=2;
                while(1)
                {
                    if(i>=len)
                    {
                        if(fgets(a,100,stdin)==NULL)
                         break;
                        len=strlen(a);
                        i=0;
                    }
                    if(a[i]=='*' && a[i+1]=='/')
                    {
                        i+=2;
                        b[index]='\n';
                        index++;
                        break;
                    }
                    b[index]=a[i];
                    index++;
                    i++;
                }
            }
        }
    }
    b[index]='\0';
    printf("%s",b);
    return 0;
}