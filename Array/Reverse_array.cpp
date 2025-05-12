#include<bits/stdc++.h>

using namespace std;

void reverses(int arr[], int n){
       int s=0;
       int e=n-1;

       while(s<=e){
            swap(arr[s],arr[e]);
            s++;
            e--;
            
       }
}

int printarray(int arr[], int n){
      for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
      }
}

int main(){

     
   int arr[5]={1,2,3,4,5};
     
   reverses(arr,5);
   printarray(arr,5);

    return 0;

}