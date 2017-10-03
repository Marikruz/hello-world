#include<stdio.h>

int main()
{
	int i,sum,a;
	printf("请输入十个数\n"); 
	sum=0;
	   for (i=0;i<10;i++)
	   {
	    scanf("%d",&a);
		sum += a;	   	
		} 
	 printf("sum=%d",sum);     
    return 0;
}
