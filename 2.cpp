#include<stdio.h>
#define N 10
int main()
{
struct Student
{
long int number;
char name[20];
char sex;
int bno;
float score1;
float score2;
float score3;
float score4;
}student[N];
int i,j;
char x;
for(i=0;i<N;i++)
{
 printf("Please input the number of student\n");
 scanf("%d",&student[i].number);
 printf("Please input the name of student\n");
 scanf("%s",student[i].name);
 x=getchar();
 printf("Please input the sex of student\n");
 scanf("%c",&student[i].sex);
 printf("Please input the class number of student\n");
 scanf("%d",&student[i].bno);
 printf("Please input the score1 of student\n");
 scanf("%f",&student[i].score1);
 printf("Please input the score2 of student\n");
 scanf("%f",&student[i].score2);
 printf("Please input the score3 of student\n");
 scanf("%f",&student[i].score3);
 printf("Please input the score4 of student\n");
 scanf("%f",&student[i].score4);
}
printf("学号  姓名  性别  班号  功课1  功课2  功课3  功课4  备注\n");
for(i=0;i<N;i++)
{
 printf("%d     ",student[i].number);
 for(j=0;student[i].name[j];j++)
  printf("%c",student[i].name[j]);
printf("   ");
printf("%c   ",student[i].sex);
printf("    ");
printf("%.d   ",student[i].bno);
printf("%.1f  ",student[i].score1);
printf("%.1f   ",student[i].score2);
printf("%.1f   ",student[i].score3);
printf("%.1f\n",student[i].score4);
}
return 0;

}