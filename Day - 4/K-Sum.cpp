#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int k_sum(int arr[],int n, int k){

    vector<int> s;
    int subsets=1<<n;

    for(int i=0;i<subsets;i++){

        int sum=0;

        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                sum+=arr[j];
            }
        }
    s.push_back(sum);
    }

     sort(s.rbegin(), s.rend());

      if (k <= s.size()) {
        return s[k - 1];
    }

    return -1;
}

int main(){

    int n,k;
    cout<<"Enter the size of the array = ";
    cin>>n;

    int nums[n];
    cout<<"nums = ";

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<"k = ";
    cin>>k;

    cout<<k_sum(nums,n,k);


    return 0;
}