#include <stdio.h>
#include<time.h>
int Prime(int k);
clock_t start,stop;
double duration;
int main(void)
{
	int i,n,number1=2;
    printf("Please input n:");
    scanf("%d",&n);
    start = clock();
	for(i=3;i<=n;i++)//解法一：一个个进行判断素数
		if(Prime(i)==0)
			number1++;
    stop = clock();
	duration = ((double)(stop - start))/CLK_TCK;
	printf("duration1 = %6.2e\n",duration);
	if(n==1)
		printf("解法一素数个数为\n");
	else if(n==2)
       printf("解法一素数个数为2\n");
	else
       printf("解法一素数个数为%d\n",number1);
	int a[100000]={2},j,number2=2;
    start = clock();
    for(i=3;i<=n;i++)//解法二：根据素数分解原理，将判断每一个好的素数放入数组中
		for(j=0;a[j];j++)
		{
			if(i%a[j]==0)
				break;
			if(a[j+1]==0)
			{a[j+1]=i;number2++;}
		}
    duration = ((double)(stop - start))/CLK_TCK;
	printf("duration2 = %6.2e\n",duration);
    if(n==1)
		printf("解法二素数个数为1\n");
	else if(n==2)
       printf("解法二素数个数为\n");
	else
       printf("解法二素数个数为%d\n",number2);
			
}
int Prime(int k)
{
	int i,n=0;
	for(i=2;i<k;i++)
		if(k%i==0)  
		{n=1; break;}
	return n;
}
