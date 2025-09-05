#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f1(double x)
{
    if (x<0){
        return 0;
    }
    else if(x>=0)
    {
        return 1;
    }
}
double f2(double x)
{
    return 1/(1+pow(M_E,-x));
}
double f3(double x)
{
    return (pow(M_E,x)-pow(M_E,-x))/(pow(M_E,x)+pow(M_E,-x));
}
double f4(double x)
{
    return pow(M_E,-(x*x));
}
double f5(double x)
{
    if (x<=0)
    {
        return 0;
    }
    else if(x>0)
    {
        return x;
    }
}
double f6(double x)
{
    return 0.5*(x+sqrt(x*x+4));
}
void AutomatickyRezim()
{
    double Xstart, Xstop, step;

    if (scanf("%lf %lf %lf", &Xstart, &Xstop, &step) != 3)
    {
        printf("E2");
        exit(0);
    }
    if(Xstart>=Xstop)
    {
        printf("E3");
        exit(0);
    }
    double x = Xstart;
    int flag=1;

    while(x<=Xstop)
    {
        if(flag)
        {
            printf("%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf", x, f1(x), f2(x), f3(x), f4(x), f5(x),
                   f6(x));
            flag = 0;
        }
        else
        {
            printf("\n");
            printf("%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf", x, f1(x), f2(x), f3(x), f4(x), f5(x),
                   f6(x));
        }
        x += step;
    }
}
void ManualnyRezim()
{
    double x;
    int flag=1;
    while(scanf("%lf",&x)!=0)
    {
        if(flag)
        {
            printf("%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf", x, f1(x), f2(x), f3(x), f4(x), f5(x),
                   f6(x));
            flag = 0;
        }
        else
        {
            printf("\n");
            printf("%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf", x, f1(x), f2(x), f3(x), f4(x), f5(x),
                   f6(x));
        }
    }
}
int main() {
    char rezim;
    scanf("%c",&rezim);
    if (rezim=='0')
    {
        AutomatickyRezim();
    }
    else if(rezim=='1')
    {
        ManualnyRezim();
    }
    else
    {
        printf("E1");
    }
    return 0;
}
