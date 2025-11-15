#include <stdio.h>

void input(int a[4][5])
{
    int i, j;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void calculate(int a[4][5])
{
    int i, j, sum;
    float p;

    for(i = 0; i < 4; i++)
    {
        sum = 0;

        for(j = 0; j < 5; j++)
        {
            sum += a[i][j];
        }

        p = (sum / 5.0f) * 100.0f;

        printf("%.2f", p);

        if(p < 75)
        {
            printf(" Warning");
        }

        printf("\n");
    }
}

int main()
{
    int a[4][5];

    input(a);
    calculate(a);

    return 0;
}

