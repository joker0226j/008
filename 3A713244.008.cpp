#include "stdio.h"
#include "stdlib.h"
int main()
{
	int n ,a ;
	printf("想知道哪到哪的質數"); 
	scanf("%d",&a);
	   for(int z=2;z<=a;z++)
{
	 n = 0;
    for(int j=1;j<=a;j++) 
        if(z%j==0)
            n++;
            if(n==2)
		        printf("%d\t",z);
}
    printf("\n");
    system("pause");
    return 0;
}
