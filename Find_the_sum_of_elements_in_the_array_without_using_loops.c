#include<stdio.h>
int main(){
    int n,a[1000],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("%d",s);
}