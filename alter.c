/*************************************************************************
    > File Name: alter.c
    > Author: OrangeJuice
    > Created Time: 2019年01月08日 星期二 11时09分50秒
 ************************************************************************/

#include<stdio.h>
void alter(int * a,int *  b);
int main(void)
{
    int x,y;

    printf("Enter a number:");
    scanf("%d",&x);
    printf("Enter next number:");
    scanf("%d",&y);
    alter(&x,&y);
    printf("x=%d,y=%d",x,y);
}

void alter(int * a,int * b)
{
    int m,n;
    m = *a-*b;
    n = *a+*b;
    *a = m;
    *b = n;
}
