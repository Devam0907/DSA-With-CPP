
//Array input + output

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<< "Number of Element in Array : " ;
     cin>> n;
    cout<< "Enter the number in Array  :" <<endl;

     int arr[n];

    for(int i =0 ; i<n;i++){
        cin>>arr[i];
     }

     cout<< " Array Element" << endl;
    
     for(int i =0 ; i<n;i++){
        cout<<arr[i]<<" " <<endl;
     }

    return 0;
}