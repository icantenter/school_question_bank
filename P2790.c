#include <stdio.h>
#include <string.h>
int main()
{
    char string[5][81];
    char temp[81];
    int i, j, min = 0;

    printf("Input 5 strings:\n");
    for (i = 0; i < 5;i++)
        gets(string[i]);

    for ( i = 0; i < 4; i++)
    {
        min = i;
        for ( j = i + 1; j < 5; j++)
        {
            if (strcmp(string[min], string[j]) > 0)
            {
                min = j;
            }
        }
        strcpy(temp, string[min]);
        strcpy(string[min], string[i]);
        strcpy(string[i], temp);
    }
    
    printf("---------------------------\n");
    for ( i = 0; i < 5; i++)
    {
        puts(string[i]);
    }
    return 0;
}