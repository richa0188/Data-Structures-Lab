#include<iostream>
using namespace std;
 int main(){
    int n,k,choice;
    int a[100];
     cout<<"Enter the elements of array:";
     cin>>n;
     cout<<"Elements are:";
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
    cout<<"Enter k ";
    cin>>k;
    k = k%n;
    cout<<"Right rotation\n";
    cout<<"Left rotation\n";
    cout<<"Enter your choice";
    cin>>choice;
    //Left rotation

     if(choice==1){
        for(int r=0;r<k;r++){
         int first=a[0];
          for(int i=0;i<n;i++){
            a[i]=a[i+1];

            
          }
            a[n-1]=first;
            
        }
     }
     //Right rotation
     else if(choice==2){
        for(int r=0;r<k;r++){
         int last=a[n-1];
          for(int i=n-1;i>0;i--){
            a[i]=a[i-1];

          }
            a[0]=last;

        
        }
    }
    else{
        cout<<"Invalid choice";
    }
    cout<<"After rotation";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
 }
     

     

 