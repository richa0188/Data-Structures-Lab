#include<iostream>
using namespace std;
 int main(){
 int n;
 int arr[50];
   cout<<"Enter the number of  elements:";
   cin>>n;
   cout<<"Elements are:\n";
   for(int i=0;i<n;i++){
   cin>>arr[i];
   }
   for(int i=0; i<n;i++){
     for(int j=i+1;j<n;j++){
        if((arr[j]==arr[i])){
            for(int k=j;k<n-1;k++){
                arr[k]=arr[k+1];

            }
            n--;
            j--;
        


        }
     }
   }
   
   cout<<"Elements after removing duplicate elements";
   for( int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   return 0;



   }
   




  