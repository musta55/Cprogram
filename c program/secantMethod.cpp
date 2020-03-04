#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) ((x)*(x)*(x)-4*(x)-8.93)

#define EPS 1.0e-9
int main()
{
    int n=0;
        double x0,x1,x2;
         x0=3;
         x1=4;

    while(1)
    {
        x2=((x0*f(x1)-x1*f(x0))/(f(x1)-f(x0)));
        printf("\n%lf\n",x0);

        printf("%lf\n%lf\n",x1,x2 );
        x0 = x1;
        x1 = x2;

        n++;
        if(fabs(f(x2))<EPS)
        {
            printf("root = %lf ",x2);
            printf("itr: %d",n);
            exit(0);
        }

    }
}

