#include<stdio.h>
void power(int n){
    int c=0;
    while(n!=0){
        if(n&1){
            c++;
        }
        n=n>>1;
    }
    if(c<=1){
        printf("No. is power of two");
    }
    else{
        printf("No. is not a power of two");
    }
}
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    power(n);
}
