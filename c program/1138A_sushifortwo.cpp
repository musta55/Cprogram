#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n],b[n];
int i,j,max=2;
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<n-1;i++){int s=2;
if(a[i]==1&&a[i+1]==2){
for(j=2;j+i<n&&i-j+1>=0;j++){
    if(a[i+j]!=2||a[i-j+1]!=1)break;
    s=s+2;
}if(s>max)max=s;}
if(a[i]==2&&a[i+1]==1){
for(j=2;j+i<n&&i-j+1>=0;j++){
    if(a[i+j]!=1||a[i-j+1]!=2)break;
    s=s+2;
}if(s>max)max=s;
}}
printf("%d",max);
}
