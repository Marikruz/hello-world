#include<stdio.h>
int max_func(int a[],int n)
{
	int i,max;
	for (max=a[0],i=1;i<10;i++)
	    if (max<a[i])
	        max=a[i];
	return max;
}

int min_func(int a[],int n)
{
	int i,min;
	for (min=a[0],i=1;i<10;i++)
	    if (min>a[i])
	        min=a[i];
	return min;
}

int main()
{
	int arr[10],i;
	int max,min;
	    printf("������ʮ������\n"); 
	for (i=0;i<10;i++)
	    scanf("%d",&arr[i]);
        max=max_func(arr,10);
	    min=min_func(arr,10);

	printf("�����Ϊ%d ��С��Ϊ%d",max,min);
	return 0;
}
