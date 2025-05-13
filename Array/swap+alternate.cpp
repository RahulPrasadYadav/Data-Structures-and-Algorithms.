#include<bits/stdc++.h>
using namespace std;

void swapp(int arr[],int n){
        for(int i=0; i<n; i+=2){
                    if(i+1<n){
                          swap(arr[i],arr[i+1]);
                        


                    }
                }
        }


int printarry(int arr[],int n){
      for(int i=0; i<n; i++){
           cout<<arr[i]<<" ";

      }
}

int main(){

      int arr[5]={1,2,3,4,5};
      swapp(arr,5);
    printarry(arr,5);



    return 0;

}

