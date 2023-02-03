#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int lengthOfLongestSubstring(char * s){
    int n=strlen(s);
    int res=0,p=0;
    int visited[500];
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<500;i++)
        {
        visited[i]=0;
        }
        p=0;
        for(int j=i;j<n;j++)
        {
            if(visited[s[j]]==0)
           {
              visited[s[j]]=1;
              p=p+1;
           }
           else
           {
            break;
           }   
        }
        res=max(res,p);
    }
    return res;
    
}
void main()
{
char *s;
printf("Enter String");
scanf("%[^\n]",s);
int r=lengthOfLongestSubstring(s);
printf("Maximum Length of Substring :%d",r);
} 