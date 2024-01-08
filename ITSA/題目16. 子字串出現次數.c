#include <stdio.h>
#include <string.h>

int appearNum(char *s, int p, char *l);

int main()
{
    char inputS[100], inputL[100], save[100];

    scanf("%s %s", inputS, inputL);
    printf("%d\n", appearNum(inputS, 0, inputL));
    return 0;
}

int appearNum(char *s, int p, char *l)
{
    int a = 0;
    if (p > strlen(l))
        return a = 0;
    for (int i = 0; i < strlen(s); i++) 
    {
        if (l[i + p] == s[i])
            continue; 
        else
            return a += appearNum(s, p + 1, l);
    }
    a++;
    return a += appearNum(s, p + 1, l);
}
