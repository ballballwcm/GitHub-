#include <stdio.h>
#include<time.h>
#define N 4
#define M 5
int main()

{
    int a[N],b[M],i,j,x,k;
	int c[N+M]={0},d[N+M],e[N+M];
    printf("�����뼯��a��ֵ:\n");
	for(i = 0;i<N;i++)
	{
		scanf("%d",&a[i]);//����һ������
		printf(" %d",a[i]);//���һ������
	}
	printf("\n��������Ҫ�жϵ�Ԫ��x:\n");
	scanf("%d",&x);
	for(i=0;i<N;i++)//�ж�һ�����Ƿ��ڼ�����
	{
		if(a[i]==x)
		{
           printf("%d�ڼ���a��\n",x);
		   break;
		}
		if(i==N-1)
	    printf("%d���ڼ���a��\n",x);
	}
    printf("�����뼯��b��ֵ:\n");
	for(i = 0;i< M;i++)
	  scanf("%d",&b[i]);//����һ������b
	printf("����a�ͼ���b�Ĳ���Ϊ��\n");
    for(i = 0;i< N;i++)//�������ϵĲ���
	 printf(" %d",a[i]);	
	for(i = 0;i<M;i++)
       for(j = 0;j< N;j++)
	   { 
		   if(a[i] == b[j])
	         break;
	       if(j==N-1)
	      printf(" %d",b[i]);
	   }
    printf("\n����a�ͼ���b�Ľ���Ϊ��\n");
	for(i = 0;i< N;i++)//�������ϵĽ���d
		for(j = 0;j< M;j++)
			if(a[i] == b[j])
			{printf("%d ",a[i]);	break;}
return 0;	
}
