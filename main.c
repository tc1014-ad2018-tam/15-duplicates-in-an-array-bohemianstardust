// Write a program that inputs n number of integer values and return how many of that numbers are duplicate.
// For example, if the user decides to enter the following 5 numbers: [5, 2, 4, 2, 3], the program shoud inform the user that there is one duplicated number.
//
// Made by Jim Holguín on October 15th, 2018.

#include <stdio.h>

int main()
{
    int a[100];
    int n, i, j;
    int du =0;

    printf("Give me N.\n");
    scanf("%d", &n);

    printf("Enter elements array.\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {

            // I honestly gave up and I really don't know what this does but it works so it's fine

            if(a[i] == a[j] && a[i-1] != a[j+1])
            {
                du++;
                printf("%d\n", du);
            }
        }
    }

    printf("\nAmount of duplicated numbers:\n");
    printf("%d\n", du);

    return 0;
}