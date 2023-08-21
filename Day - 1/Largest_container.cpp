#include <iostream>
#include <algorithm>
using namespace std;

int largest_container(int arr[],int n){
   
    int max=0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int height= min(arr[i],arr[j]);
            int width= j-i;
            int area= height*width;
            if (area >max){
                max=area;
            }
        }
    }
return max;
}

int main(){

    int n;
    cin>>n;
    int height[n];

    cout<<"height = ";
    for(int i=0;i<n;i++){
        cin>>height[i];
    }

    int ans=largest_container(height,n);
    cout<<ans<<endl;

    return 0;
}