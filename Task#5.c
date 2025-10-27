#include <stdio.h>

int main() {
    int matrix1[2][2], matrix2[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\nEnter Element for Row %d and Column %d: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nMatrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("|%d|", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\nTransposeMatrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrix2[j][i] = matrix1[i][j];
            printf("|%d|", matrix1[j][i]);
        }
        printf("\n");
    }

    return 0;
}
