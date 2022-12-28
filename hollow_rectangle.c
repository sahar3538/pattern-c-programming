#include <stdio.h>
int main()
{
    int i, j, rows, columns;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);
    for(i=1; i<=rows; i++)                    //Iterate over each row 
    {
        for(j=1; j<=columns; j++)             //Iterate over each column 
        {
            if(i==1 || i==rows || j==1 || j==columns)
            {
                printf("*");                  //Print star for 1st and last row, column 
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
