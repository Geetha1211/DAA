#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * longestCommonPrefix(char ** strs, int strsSize){
    char *s=malloc(1000*sizeof(char));
    int min=strlen(strs[0]);
    if(strsSize!=1)
    {
    for(int i=1;i<strsSize;i++)
    {
        for(int j=0;j<min;j++)
        {
            if(strs[0][j]==strs[i][j])
            {
                continue;
            }
            else
            {
                min=j;
                break;
            }
        }
    }
    for(int i=0;i<min;i++)
    {
        s[i]=strs[0][i];
    }
    s[min]='\0';
    }
    if(strsSize==1)
    {
        s=strs[0];
    }
    return s;
}
void main()
{
int strsSize;
printf("Enter number of Words");
scanf("%d",&strsSize);
char ** strs=malloc(strsSize*sizeof(char*));
printf("Enter Words");
for(int i=0;i<strsSize;i++)
{
strs[i]=malloc(50*sizeof(char));
scanf("%s",strs[i]);
}
char * r=longestCommonPrefix(strs,strsSize);
printf("Longest Common Prefix :%s",r);
}

Output:
Enter number of Words4
Enter Wordsflower
flight
fly
flow
Longest Common Prefix :fl
