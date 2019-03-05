#include <stdio.h>
#include<time.h>
#define N 4
#define M 5
int main()

{
    int a[N],b[M],i,j,x,k;
	int c[N+M]={0},d[N+M],e[N+M];
    printf("请输入集合a的值:\n");
	for(i = 0;i<N;i++)
	{
		scanf("%d",&a[i]);//创建一个集合
		printf(" %d",a[i]);//输出一个集合
	}
	printf("\n请输入需要判断的元素x:\n");
	scanf("%d",&x);
	for(i=0;i<N;i++)//判断一个数是否在集合里
	{
		if(a[i]==x)
		{
           printf("%d在集合a中\n",x);
		   break;
		}
		if(i==N-1)
	    printf("%d不在集合a中\n",x);
	}
    printf("请输入集合b的值:\n");
	for(i = 0;i< M;i++)
	  scanf("%d",&b[i]);//创建一个集合b
	printf("集合a和集合b的并集为：\n");
    for(i = 0;i< N;i++)//两个集合的并集
	 printf(" %d",a[i]);	
	for(i = 0;i<M;i++)
       for(j = 0;j< N;j++)
	   { 
		   if(a[i] == b[j])
	         break;
	       if(j==N-1)
	      printf(" %d",b[i]);
	   }
    printf("\n集合a和集合b的交集为：\n");
	for(i = 0;i< N;i++)//两个集合的交集d
		for(j = 0;j< M;j++)
			if(a[i] == b[j])
			{printf("%d ",a[i]);	break;}
return 0;	
}
