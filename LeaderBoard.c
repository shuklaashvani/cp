#include<stdio.h>

void main(){
    int a[7]={100,100,50,40,40,20,10};
    int b[4]={5,25,50,120};
    int rank[4];

    int i=0,j=3,n=1;
    while(j>=0){
        if(a[i]<=b[j]){
            rank[j]=n;
            j--;
        }
        i++;
        if(a[i]!=a[i-1]){
            n++;
        }
    }

  for(int i=0;i<4;i++){
      printf(" %d ,",rank[i]);
  }

}
