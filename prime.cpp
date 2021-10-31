#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

    int arr[100];
    arr[0]=0;
    arr[1]=0;
    arr[2]=0;
    for(int i=3;i<100;i+=2){
        arr[i]=1;
    }
    for(int i=3;i<100;i+=2){
        if(arr[i]==1){
            for(int j=i*i;j<100;j+=i){
                arr[j]=0;
            }
        }
    }
    for(int i=0;i<100;i++){
        if(arr[i]==1){
          cout << "  " << i;
        }
    }
  return 0;
}