#include<stdio.h>

 main()

{

	double a,b,c,d,m,n,x,y;

	printf("������x yǰ���ϵ���Լ�m n��ֵ\n");

	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m,&n);

	x=(m*d-b*n)/(a*d-b*c);

	y=(m*c-a*n)/(b*c-a*d);

	printf("xֵΪ%lf,yֵΪ%lf\n",x,y);

 }
