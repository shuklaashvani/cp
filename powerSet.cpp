#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int a[4]={1,2,3,4};
    int n=4;
    int p=pow(2,n);
    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            if(i&1<<j){
                cout<<a[j];
            }
        }
        cout<<endl;
    }
   return 0;
}