#include <stdio.h>
#include <math.h>
#define f(x) cos(x) - 3 * x + 1
#define g(x) (1 + cos(x)) / 3
void main()
{
    int step = 1, N;
    float x0, x1, e;
    printf("Enter initial guess : ");
    scanf("%f", &x0);
    printf("Enter tolerable error : ");
    scanf("%f", &e);
    printf("Enter the maximum iteration : ");
    scanf("%d", &N);

    printf("\nStep\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
    do
    {
        x1 = g(x0);
        printf("%d\t%f\t%f\t%f\t%f\n", step, x0, f(x0), x1, f(x1));
        step = step + 1;
        if (step > N)
        {
            printf("Not Convergent");
            break;
        }
        x0 = x1;
    } while (fabs(f(x1)) > e);
    
    printf("\nRoot is %f", x1);
}



// Sample Output

/*
Enter initial guess : 1.5
Enter tolerable error : 0.0001
Enter the maximum iteration : 12

Step    x0              f(x0)           x1              f(x1)     
1       1.500000        -3.429263       0.356912        0.866243  
2       0.356912        0.866243        0.645660        -0.138277 
3       0.645660        -0.138277       0.599568        0.026877  
4       0.599568        0.026877        0.608527        -0.005089 
5       0.608527        -0.005089       0.606830        0.000968  
6       0.606830        0.000968        0.607153        -0.000184 
7       0.607153        -0.000184       0.607092        0.000035  

Root is 0.607092
*/