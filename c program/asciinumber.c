#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,count[1000];
    char input[1000];
    printf("Please enter your input:\n\t\t\t");
    fgets(input,1000,stdin);
    l=strlen(input);
    for(i=0;i<l;i++)
    {
        count[i]=1;
        for(j=i+1;j<l;j++)
        {
            if(input[i]==input[j])
            {
            count[i]++;
            input[j]='#';
            }
        }
    }
    for(i=0;i<l-1;i++)
    {
        if(input[i]!='#')
        printf("\t\t%c have %d times & ascii value is %d\n",input[i],count[i],input[i]);
    }
    return 0;

}
