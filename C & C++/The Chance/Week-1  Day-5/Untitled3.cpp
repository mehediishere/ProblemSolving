/*
    Time Duration : Around 2+hr minutes
    Problem_13 : Return a string after removing all the vowels.
*/
#include <stdio.h>

int main()
{
    char s[100], t[100], t2[100];
    int i, d = 0, len = 0, r=0;

    scanf("%s",s);

    while (s[len] != '\0')
    {
        len++;
    }

    for(i = 0; i<len; i++)
    {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] =='E' || s[i] =='I' || s[i] == 'O' || s[i] == 'U')
            {
                //t2[r] = s[i];
                //r++;
            }
            else
            {
                t[d] = s[i];
                d++;
            }
    }

    t[d] = '\0';

    printf("%s \n", t);

    return 0;
}

