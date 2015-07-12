#include<stdio.h>
#include<string.h>
main()
{
    char s[100];
    scanf("%s",s);
    int min=0,min2=0;
            min=0;
            int i=0,j=strlen(s)-1;
            while(i!=j && i<strlen(s))
            {
                    if(s[i]!=s[j]){min++;i++;}
                    else if(s[i]==s[j]){i++;j--;}
            }
            i=0;
            while(j!=i && j>=0)
            {
                    if(s[i]!=s[j]){min2++;j--;}
                    else if(s[i]==s[j]){i++;j--;}
            }
            int sa=min>min2?min2:min;
            printf("\n%d\n",sa);
}
