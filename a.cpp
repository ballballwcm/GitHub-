#include <stdio.h>
#include<time.h>

clock_t start,stop;
double duration;
int main(void)
{
	int m,n,i;
	int x,y;
	printf("Please input m,n(m>n)");
	scanf("%d %d",&m,&n);
    start = clock();
    for(i=2;i<n;i++)//直接一个个试
	{
	   if(m%i==0&n%i==0)
	   {printf("解法一最大公约数为%d\n",i);break;}
       
	}
   for(i=2;i<m*n;i++)
   {
       if(i%m==0&i%n==0)
	   {printf("解法一最大公倍数为%d\n",i);break;}
   }
    stop = clock();
    duration = ((double)(stop - start))/CLK_TCK;
	printf("duration1 = %6.2e\n",duration);
	int r;
    start = clock();
	r = m % n;//辗转相除法
	while (r)
	{m = n;
	 n = r;
	 r = m%n;
	}
    printf("解法二最大公约数为%d\n",n);
    printf("解法二最大公倍数为%d\n",i/n);
	stop = clock();
    duration = ((double)(stop - start))/CLK_TCK;
	printf("duration2 = %6.2e\n",duration);
}
	
