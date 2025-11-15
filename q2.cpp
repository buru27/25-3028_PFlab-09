#include <stdio.h>

void deposit(float *b, int index, float amt)
{
    *(b + index) += amt;
}

void withdraw(float *b, int index, float amt)
{
    *(b + index) -= amt;
}

float average(float *b, int size)
{
    int i;
    float sum = 0;

    for(i = 0; i < size; i++)
    {
        sum += *(b + i);
    }

    return sum / size;
}

int main()
{
    float bal[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        scanf("%f", &bal[i]);
    }

    deposit(bal, 2, 500);
    withdraw(bal, 1, 300);

    printf("Average: %.2f\n", average(bal, 5));

    return 0;
}

