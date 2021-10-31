#include<stdio.h>

void multiply(int *a,int *n, int no){
    int carry=0;
    for(int i=0;i<(*n);i++){
        int product=a[i]*no + carry;
        a[i]=product%10;
        a[i]=product/10;
    }

    while(carry){
        a[(*n)]=carry%10;
        carry=carry/10;
        (*n)++;
    }
}
void fact(int number){
  int fac[1000]={0};
  

    fac[0]=1;
    int nm=1;
    int *n;
    n=&nm;
    for(int i=2;i<=number;i++){
          multiply(fac,n,i);
    }
    for(int i= nm-1; i>=0; i--){
        printf("%d",fac[i]);
    }
}
void main(){
  fact(2);
}