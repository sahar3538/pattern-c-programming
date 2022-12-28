#include <stdio.h>
int main()
{
    int i, j, rows, columns;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);
    for(i=1; i<=rows; i++)                          //Iterate through each row 
    {
        for(j=1; j<=columns; j++)                   // Iterate through each column 
        {
            printf("*");                            //For each column print star
        }
        printf("\n");                               //For each column print star 
    }
    return 0;
}

