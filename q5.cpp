#include <stdio.h>

void printData(void *ptr, char type)
{
    if(type == 'i')
    {
        printf("%d\n", *(int*)ptr);
    }
    else if(type == 'f')
    {
        printf("%.2f\n", *(float*)ptr);
    }
    else if(type == 'c')
    {
        printf("%c\n", *(char*)ptr);
    }
}

int main()
{
    int a = 10;
    float b = 5.75;
    char c = 'X';

    printData(&a, 'i');
    printData(&b, 'f');
    printData(&c, 'c');

    return 0;
}

