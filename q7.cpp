#include <stdio.h>

void inputRuns(int r[11])
{
    int i;
    for(i = 0; i < 11; i++)
    {
        scanf("%d", &r[i]);
    }
}

int total(int *p)
{
    int i, sum = 0;
    for(i = 0; i < 11; i++)
    {
        sum += *(p + i);
    }
    return sum;
}

float average(int *p)
{
    return total(p) / 11.0f;
}

void highest(int *p)
{
    int i, max = p[0], index = 0;

    for(i = 1; i < 11; i++)
    {
        if(p[i] > max)
        {
            max = p[i];
            index = i;
        }
    }

    printf("%d %d\n", index, max);
}

int main()
{
    int runs[11];

    inputRuns(runs);

    printf("%d\n", total(runs));
    printf("%.2f\n", average(runs));
    highest(runs);

    return 0;
}

