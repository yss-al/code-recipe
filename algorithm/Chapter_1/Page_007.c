/*************************************************************************
 > File Name: Page_7.c
 > Author: 
 > Mail: 
 > Created Time: 2016年02月25日 星期四 20时17分14秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d%d%d", n%10, n/10%10, n/100%10);
    return 0;
}