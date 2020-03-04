#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define f(x) ((x)*(x)*(x)-4*(x)-8.93)
#define fp(x) (3*(x)*(x)-4)
#define EPS 1.0e-9
int main()
{

int n=0;
double a=2,b=3,x0;

if(f(a)*f(b)>0){
printf("No Root......\n");
exit(0);
}
while(1){
//get root
x0=(a+b)/2;
n++;

if(fabs(f(x0))<EPS){
printf("root =%lf\n",x0);
printf("No of itr. = %d\n",n);
exit(0);
}

//next loop
if(f(a)*f(x0)<0)b=x0;
else a=x0;
  }
}


