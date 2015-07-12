#include<stdio.h>
main()
{
	long int num;
	int i=0,temp=0,k=9,flag=0,m,a[100],j;
	printf("Enter number ");
	scanf("%ld",&num);
	while(k>1 && num>=10)
	{
		if(num%k==0)
		{
			a[temp++]=k;
			num/=k;
			k=9;
			flag=0;
		}
		else
			flag++;
		if(flag==8 && i==2)
		{
			flag=1;
			break;
		}
		k--;	
	}
	if(!flag)
	{
		a[temp++]=num;
		for(i=0;i<temp;i++)
			for(j=0;j<temp;j++)
				if(a[i]<a[j])
					{
					m=a[i];
					a[i]=a[j];
					a[j]=m;	
					}
		for(i=0;i<temp;i++)
			printf("%d",a[i]);
		printf("\n");
	}
	else
		printf("No solution");
	
}
