#include<stdio.h>
#include<string.h>
main()
{
	char str[200];char ch;int i,j,c=0,cost=0;
	printf("Enter String ");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
		{ c=0;ch=str[i];
			if(ch!='1')
			{
				for(j=i;j<strlen(str);j++)
					{
						if(ch==str[j])
						{
						 	c++;
						 	str[j]='1';
					 	}	
					}
				cost=cost+((c/3)*2);
				cost=cost+((c%3));
			}
				
		}printf("cost is %d\n",cost);
}
