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
    for(i=2;i<n;i++)//ֱ��һ������
	{
	   if(m%i==0&n%i==0)
	   {printf("�ⷨһ���Լ��Ϊ%d\n",i);break;}
       
	}
   for(i=2;i<m*n;i++)
   {
       if(i%m==0&i%n==0)
	   {printf("�ⷨһ��󹫱���Ϊ%d\n",i);break;}
   }
    stop = clock();
    duration = ((double)(stop - start))/CLK_TCK;
	printf("duration1 = %6.2e\n",duration);
	int r;
    start = clock();
	r = m % n;//շת�����
	while (r)
	{m = n;
	 n = r;
	 r = m%n;
	}
    printf("�ⷨ�����Լ��Ϊ%d\n",n);
    printf("�ⷨ����󹫱���Ϊ%d\n",i/n);
	stop = clock();
    duration = ((double)(stop - start))/CLK_TCK;
	printf("duration2 = %6.2e\n",duration);
}
	
