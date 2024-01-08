#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000], save[100];
    int wordsNum = 0;
    int wF[26 * 2] = {0}; // 26 letters for both uppercase and lowercase

    fgets(input, sizeof(input), stdin);
    char *token = strtok(input, " ");
    while (token != NULL)
    {
        wordsNum++;
        for (int j = 0; j < strlen(token); j++) // 統計字數
        {
            char currentChar = token[j];
            if ((currentChar >= 'A' && currentChar <= 'Z') || (currentChar >= 'a' && currentChar <= 'z'))
            {
                int index = (currentChar >= 'A' && currentChar <= 'Z') ? (currentChar - 'A' + 26) : (currentChar - 'a');
                wF[index]++;
            }
        }
        token = strtok(NULL, " ");
    }

    printf("%d\n", wordsNum); // 輸出
    for (int k = 0; k < 52; k++) 
    {
        for (int i = 0; i < 26 * 2; i++)
        {
            char currentChar = (i >= 26) ? ('A' + i - 26) : ('a' + i);
            if (currentChar == input[k] && wF[i] != 0)
            {
                printf("%c : %d\n", currentChar, wF[i]);
            }
        }
    }
    return 0;
}
