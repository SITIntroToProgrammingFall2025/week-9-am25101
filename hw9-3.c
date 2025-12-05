#include <stdio.h>

int main()
{
    double a[2][3], b[3][2], c[2][2];
    int i, j, k;

    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)
            scanf("%lf", &a[i][j]);

    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            scanf("%lf", &b[i][j]);

    printf("The first matrix you entered is\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            if (a[i][j] == (int)a[i][j])
                printf("%d ", (int)a[i][j]);
            else
                printf("%.1f ", a[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix you entered is\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%.0f ", b[i][j]);   // integers only
        }
        printf("\n");
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            c[i][j] = 0;
            for(k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("The multiplication product of matrix A and matrix B:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            if (c[i][j] == (int)c[i][j])
                printf("%d ", (int)c[i][j]);
            else
                printf("%.1f ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
