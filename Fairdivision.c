#include<stdio.h>

void main(){
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int n,m=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
     
      if(n&1){
          printf("No\n");
      }
      else{
          for(int i=0;i<n;i++){
              m=m^a[i];
          }
          if(m==0){
              printf("Yes\n");
          }
          else{
              printf("No\n");
          }
      }
    }
}