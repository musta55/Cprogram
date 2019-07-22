#include<stdio.h>

int main(){
    char word[101];
    int i;
    
    gets(word);
    
    for(i=1;word[i]!='\0';i++){
        if(word[i]>='A'&&word[i]<='Z') continue;
        else{
            printf("%s",word);
            return 0;
        }
    }
    for(i=0;word[i]!='\0';i++){
        if(word[i]>='a'&&word[i]<='z')
            word[i]=word[i]-'a'+'A';
        else word[i]=word[i]-'A'+'a';
    }
    printf("%s",word);
    return 0;
}
