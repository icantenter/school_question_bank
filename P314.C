#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct goods
{
    char name[30];
    char type[30];
    long number;
    float price;
};

int main()
{
    FILE *fp;
    struct goods temp;
    char name[30];
    int nopos = 1;

    fp = fopen("sp.dat", "r");
    printf("Please input shang pin pin ming:");
    gets(name);
    printf("\ncha zhao qing kuang:\n");
    while (!feof(fp))
    {
        fscanf(fp, "%s%s%f%ld", temp.name, temp.type
            , &temp.price, &temp.number);
        if (strcmp((temp.name), name) == 0)
        {
            nopos = 0;
            printf("%s,%s,%ld,%.2f\n",
                   temp.name, temp.type, temp.number, temp.price);
        }
    }
    if (nopos)
    {
        printf("mei you shang pin :%s", name);
    }

    return 0;
}