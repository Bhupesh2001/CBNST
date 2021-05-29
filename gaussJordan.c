// Create diagonal matrix 

#include<stdio.h>
#include<conio.h>
void main()
{
    float a[10][11],t;
    int i,j,k,n;
    printf("Enter the variables : ");
    scanf("%d",&n);
    printf("Enter the values : \n");
    for ( i = 0; i < n; i++)
        for (j = 0; j <= n; j++)
            scanf("%f",&a[i][j]);
    
    for ( i = 0; i < n; i++)
        for ( j = 0; j < n; j++)
            if (j!=i)
            {
                t = a[j][i]/a[i][i];
                for(k=0;k<=n;k++)
                    a[j][k]=a[j][k]-a[i][k]*t;
            }
    
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j <= n; j++)
            printf("%0.2f\t",a[i][j]);
        printf("\n");
    }
    printf("\n\n");
    for(i=0;i<n;i++)
        printf("X[%d] = %.2f\n",i+1,a[i][n]/a[i][i]);
}