


#include<stdio.h>
double Func(double x,double y);



int main()
{
	double a=100.0,b,sD;
	printf("������һ������\n");
	scanf("%lf",&b);
	sD=Func(a,b);
	printf("100�͸�����ƽ�����ǣ�%lf\n",sD);
	return 0;
}



double Func(double x,double y)
{
	double z;
	z=x*x-y*y;
	return z;
}
