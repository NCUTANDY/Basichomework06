#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int year;
	printf("請輸入西元年份:");
	scanf("%d",&year);
	if (year%4==0)
	  printf("%d是閏年\n",year);
    else if (year%100==0)
           printf("%d是平年\n",year);
    else if (year%400==0)
	       printf("%d是閏年\n",year);
	else 
        printf("%d是平年\n",year);
    system("pause");	 
	return 0;
}
