#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    int digit=0, vowel=0, consonant=0, len;
    len = strlen(a);
    for (int i=0; i<=len-1; i++)
    {
        if(a[i] >= '0' && a[i] <= '9')
        {
            digit++;
        }
        else if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' 
        || a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            vowel++;
        }
        else
        {
            if(a[i] == ' ')
                continue;
            else
            consonant++;
        }
    }
    printf("Vowel=%d\n", vowel);
    printf("Consonant=%d\n", consonant);
    printf("Digit=%d\n", digit);
    return 0;
}