#include<stdio.h>
main()
{
	int i,c=0,d=0,len,j,k=0;
	printf("Enter Length of Array\t");
	scanf("%d",&len);
	int a[len];
	for(i=0;i<len;i++)
		{	printf("%d elemt to array\t",i);
			scanf("%d",&a[i]);
			if(a[i]==1) k++;
		}
	int arr[2*k];d=0;
	for(i=0;i<len;i++)
		{	if(a[i]==1)
			{
			a[i]=0;c=0;
			for(j=0;j<len;j++)
				{
				if(a[j]==1 && j<i)
					{
						c=0;continue;
					}
				if(a[j]==1)
					{
					 break;
					}
				if(a[j]==0) c++;
				}a[i]=1;
				arr[d]=i;arr[d+1]=c;d=d+2;			
			}
		}
	j=arr[1];len=1;
	for(i=1;i<(2*k);i=i+2) 
		if(j<arr[i]) {j=arr[i];len=i;}
	printf(" index value is %d\n",arr[len-1]);
}
