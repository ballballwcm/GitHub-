#include <stdio.h>
#include<time.h>

clock_t start,stop;
double duration;
int main(void)

{
    int n,i,S1=0,S2=0;
    printf("Please input n:");
    scanf("%d",&n);
	start = clock();
	for(i = 1;i<=n;i++)
		S1 = S1 + i;
	stop = clock();
	duration = ((double)(stop - start))/CLK_TCK;
	printf("duration1 = %6.2e\n",duration);
    start = clock();
	S2 = n*(n+1)/2;
	stop = clock();
    duration = ((double)(stop - start))/CLK_TCK;
	printf("duration2 = %6.2e\n",duration);
    return 0;

}