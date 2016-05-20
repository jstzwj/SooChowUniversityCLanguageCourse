/*文件名：1527403034_E17.c
*作者：王俊
*时间：2015年10月29日
*功能：输入两个正整数m和n，求最大公约数与最小公倍数
*备注：
*/
#include<stdio.h>
int main()
{
	int m,n,a=1,b=1,c=1;
	//输入两个整数
	printf("请输入两个整数:\n");
	scanf("%d%d",&m,&n);
	//保留mn乘积
	c=m*n;
	//求最大公约数
	//保证M>N
	if(m<n)
	{
		a=m;
		m=n;
		n=a;
	}
	//辗转相除
	while(a!=0)
	{
		a=m%n;
		b=n;
		m=n;
		n=a;
	}
	//输出
	printf("最大公约数为%d\n",b);
	//求最小公倍数
	b=c/b;
	//输出
	printf("最小公倍数为%d\n",b);
	return 0;
}