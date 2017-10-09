#include<stdio.h>
int main(){
int arr[5];
int max,min,i;
for (i=0;i<5;i++){     
	 scanf("%d",&arr[i]);
}//先将五个数储存到a[i]中 
     max=min=arr[0];      
for (i=0;i<5;i++){  	 
	   if (max<arr[i])
           max=arr[i];
       if (min>arr[i])
           min=arr[i];
}
    printf("max=%d\nmin=%d\n",max,min);
    return 0;
}
