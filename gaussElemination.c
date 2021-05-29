// Convert to UPPER triangular matrix

#include <stdio.h>
void main()
{
    int n, i, j, k;
    printf("Enter the number of variables : ");
    scanf("%d", &n);
    float a[n][n + 1], t;
    for (i = 0; i < n; i++)
        for (j = 0; j <= n; j++)
            scanf("%f", &a[i][j]);

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n + 1; j++)
        {
            t = a[j][i] / a[i][i];
            for (k = 0; k <= n; k++)
                a[j][k] = a[j][k] - a[i][k] * t;
        }

    // upper triagular matrix is 
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n; j++)
            printf("%.2f\t", a[i][j]);
        printf("\n");
    }
    


    // backsubstition
    float sum,value[n];
    value[n-1] = a[n-1][n]/a[n-1][n-1];
    for (i = n - 2; i > -1; i--)
    {
        sum = 0;
        for (j = i+1; j < n ; j++)
            sum += a[i][j]*value[j];
        value[i] = (a[i][n] - sum)/a[i][i];
    }

    // printing the values
    for(i=0;i<n;i++)
        printf("%.2f ",value[i]);
    
}



