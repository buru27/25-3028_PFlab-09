#include <stdio.h>

void replace(char a[3][20])
{
    int i, j;
    char c;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; a[i][j] != '\0'; j++)
        {
            c = a[i][j];
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            {
                a[i][j] = '*';
            }
        }
    }
}

void display(char a[3][20])
{
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("%s\n", a[i]);
    }
}

int main()
{
    char arr[3][20];
    int i;

    for(i = 0; i < 3; i++)
    {
        scanf("%s", arr[i]);
    }

    replace(arr);
    display(arr);

    return 0;
}

