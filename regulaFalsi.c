// #define   f(x)  x*x-2*x-pow(e,x)
#include <stdio.h>
#include <math.h>
#define e 2.718
double fun(double x)
{
    return (x*x-2*x-pow(e,x));
    // return x*x-25;
}
int main()
{
    double a, b, err, c;
    printf("Enter Error\n");
    scanf("%lf", &err);
    int input = 1;
    do
    {
        printf("Enter a and b\n");
        scanf("%lf%lf", &a, &b);
        if (fun(a) * fun(b) > 0){
            printf("f0 = %f, f1 = %f",fun(a),fun(b));
            printf("Invalid Input Try Again!!\n");}
        else{
            input = 0;
            int it = 1;
            while (1) {
                c = a - (b - a) * fun(a) / (double)(fun(b) - fun(a));
                if (fun(c) * fun(a) < 0)
                    b = c;
                else
                    a = c;
                printf("%d iteration , value of c is %lf and f(%lf) is %lf\n", it, c, c, fun(c));
                if (fabs(fun(c)) <= err)
                    break;
                it++;
            }
            printf("Root after %d iterations is %lf\n", it, c);
        }
    } while (input);
}