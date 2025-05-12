#include<bits/stdc++.h>

using namespace std;

bool linersearch(int arr[], int size, int key){
   for (int i=0; i<size; i++){
       if(arr[i]==key){
           return 1;

       }
   }
   return 0;
   
      
}

int main(){

    int arr[5]={12,1,3,5,6};

       cout<<"Enter the Element "<<endl;
       int key;
       cin>>key;

       bool founs=linersearch(arr,5,key);
       if(founs){
          cout<<"True"<<endl;

       }else{
          cout<<"False"<<endl;

       }

    



    return 0;

}