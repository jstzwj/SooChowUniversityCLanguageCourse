/*文件名：1527403034_E25.c
*作者：王俊
*时间：2015年11月3日
*功能：从键盘输入若干个位数不确定的正整数，请编写程序统计这些 整数中数字0和9出现的次数。当输入一个负数时，则结束。
*备注：
*/
#include<stdio.h>
int main()
{
	int a=0;
	int b=0,c=0;
	
	
	while(a>=0)//判断是否为负数
	{
		//输入正整数
		printf("请输入数字:\n");
		scanf("%d",&a);

		while(a>0)
		{
			//统计0出现的次数
			if(a%10==0)
			{
				b++;
			}
			//统计9出现的次数
			if(a%10==0)
			{
				c++;
			}
			a/=10;
		}
	}
	//输出
	printf("0出现的次数为%d\n",b);
	printf("9出现的次数为%d\n",c);
	
	return 0;
}