#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct goods
{
    char name[20];
    char type[12];
    long number;
    float price;
};

int main()
{
    FILE *fp;
    struct goods temp;
    char name[20];
    int nopos = 1;

    fp = fopen("sp.dat", "r");
    printf("Please input shang pin pin ming:");
    gets(name);
    printf("\ncha zhao qing kuang:\n");
    while (!feof(fp))
    {
        fread(&temp, sizeof(struct goods), 1, fp);
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