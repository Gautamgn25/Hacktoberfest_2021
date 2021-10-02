#include<stdio.h>
int main(){
    int a=-1;
    int b=1;
    int n;
    scanf("%d",&n);
    int i;
    int c;
    for(i=1;i<=n;i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;

    }
    return 0;
}