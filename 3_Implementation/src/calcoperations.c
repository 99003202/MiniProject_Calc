#include<stdio.h>
#include<math.h>
   

int add(int n1,int n2)
{
    int sum=0;
    sum=n1+n2;
    return sum;
}

int sub(int n1,int n2)
{
    int dif=0;
    dif=n1-n2;
    return dif;
}

double mul(double n1,double n2)
{
    double pr;
    pr=n1*n2;
    return pr;
}

double div(double n1,double n2)
{
    
    return n1/n2;
}

int mod(int n1,int n2)
{
    int rem;
    rem=(n1%n2);
    return rem;
}

double sine(double ang)
{
    ang=ang/57.295779513;
    double ans=sin(ang);
    return ans;
}

double cosi(double ang)
{
    ang=ang/57.295779513;
    double ans=cos(ang);
    return ans;
}

double tang(double ang)
{
    ang=ang/57.295779513;
    double ans=tan(ang);
    return ans;

}

double cot(double ang)
{
    ang=ang/57.295779513;
    double ans=(1/(tan(ang)));
    return ans;
}

double sec(double ang)
{
    ang=ang/57.295779513;
    double ans=(1/(cos(ang)));
    return ans;

}

double cosec(double ang)
{
    ang=ang/57.295779513;
    double ans=(1/(sin(ang)));
    return ans;

}


double sqr(double n1)
{
    double ans=(n1*n1);
    return ans;
}

double sqart(double n1)
{
    double ans=sqrt(n1);
    return ans;
}

int kmtom(int n1)
{
   rerurn n1 * 1000;
}

int mtocm(int n1)
{
   return n1 * 100;
}

int ftoi(int n1)
{
   return n1 * 12;
}

int itocm(int n1)
{
   return n1 * 2.54;
}

int cmtom(int operand1)
{
   return operand1 * 0.01;
}

int ytom(int operand1)
{
   return operand1 * 0.9144;
}

int ytocm(int operand1)
{
   return operand1 * 91.44;
}








