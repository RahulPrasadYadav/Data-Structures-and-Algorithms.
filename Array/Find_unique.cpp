#include<bits/stdc++.h>
using namespace std;

void findUniq(int arr[], int n){


      int ans=0;
       for(int i=0; i<n; i++){
             ans=ans^arr[i];
                  

          }
          cout<<ans;

 }

int main(){


    int arr[5]={1,6,2,2,3};
         findUniq(arr,5);
       

    return 0;

}