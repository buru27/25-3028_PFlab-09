#include <stdio.h>

void search(int arr[3][3], int key)
{
    int i, j;
    int *p = &arr[0][0];

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(*(p + i*3 + j) == key)
            {
                printf("%d %d\n", i, j);
                return;
            }
        }
    }

    printf("-1 -1\n");
}

int main()
{
    int arr[3][3];
    int i, j, key;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    scanf("%d", &key);

    search(arr, key);

    return 0;
}

