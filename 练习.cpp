


#include<stdio.h>
double Func(double x,double y);



int main()
{
	double a=100.0,b,sD;
	printf("请输入一个数：\n");
	scanf("%lf",&b);
	sD=Func(a,b);
	printf("100和该数的平方差是：%lf\n",sD);
	return 0;
}



double Func(double x,double y)
{
	double z;
	z=x*x-y*y;
	return z;
}
