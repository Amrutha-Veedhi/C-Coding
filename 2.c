#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
	int data;
	struct node *next,*prev;
};
struct node *head=NULL,*temp=NULL,*new=NULL;int c=0,d=0,m=0,a,flag=0;
persq(int a)
{
	for(m=1;m<=a;m++)
		if(m*m==a) return 1;
	return 0;
}
isnine(int m)
{	int k;
	while(m!=0)
	{
	k=m%10;
	if(k==9) return 1;
	else m=m/10;	
	
	}return 0;
}
main()
{
	int i;
	for(i=1;i<=1331;i++)
	{
		new=(struct node*)malloc(sizeof(struct node));
		new->data=i;
		new->next=NULL;
		new->prev=NULL;
		if(head==NULL) 
			{head=new;temp=head;}
		else {temp->next=new;new->prev=temp;temp=new;}
	}
	temp->next=head;head->prev=temp;
	int num;temp=head->prev;
	printf("Enter Number ");
	scanf("%d",&num);
	while(c<num)
		{
			flag=0;m=0;
			if(isnine(c))
			{
				if(d==0) {d=1;}
				else if (d==1) {d=0;m=1;}
			}
			
			if(d==0 && flag==0)
				{	
					
					if(temp->data==1)
					{
						
						temp=temp->next;	
					}
					else
					{	if (isnine(c)){temp=temp->next;}
						else{
						if(persq(c)) {d=1;flag=1;temp=temp->prev;}
						else temp=temp->next;}
						
					}
					
					
				}
			if(d==1 && flag!=1)
				{
					if(temp->data==1)
					{
						temp=temp->prev;	
					}
					else
					{	
						if (isnine(c)){temp=temp->prev;}
						else{
						if(persq(c)) {d=0;temp=temp->next;}
						else temp=temp->prev;}
						
					}	
				
				
				}c++;
		
		}
		printf("%d\n",temp->data);
}
