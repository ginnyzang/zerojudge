#include<stdio.h>
#include<stdlib.h>

int main()
{
		double F;
		double C;
		while(scanf("%lf",&F) !=EOF)
		{
			C=(F-32)*5/9.0;
			printf("%.3lf\n",C);
		}
} 
