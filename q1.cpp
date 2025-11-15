#include <stdio.h>

void inputWardStatus(int ward[3][5])
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &ward[i][j]);
        }
    }
}

void countBeds(int *ptr, int total, int *occ, int *emp)
{
    int i;
    *occ = 0;
    *emp = 0;

    for(i = 0; i < total; i++)
    {
        if(*(ptr + i) == 1)
        {
            (*occ)++;
        }
        else
        {
            (*emp)++;
        }
    }
}

void display(int ward[3][5])
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d ", ward[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int ward[3][5];
    int occ, emp;

    inputWardStatus(ward);
    countBeds(&ward[0][0], 15, &occ, &emp);
    display(ward);

    printf("Occupied: %d\n", occ);
    printf("Empty: %d\n", emp);

    return 0;
}

