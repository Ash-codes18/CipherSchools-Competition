#include <iostream>
#include <algorithm>
using namespace std;

bool Find_Triplet(int arr[], int n){
    
    for (int i = 0; i < n - 2; ++i) {
       
        int start=i+1;
        int end=n-1;

    while(start<end){

        int sum=arr[i]+arr[start]+arr[end];

        if(sum==0){
            return 1;
        }

        else if(sum>0){
            end--;
        }

        else{
            start++;
        }

    }
    }
    
    return 0; 

}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr, arr + n);
    cout<<Find_Triplet(arr , n)<<endl;

    return 0;
}