#include<iostream>
using namespace std;

int nums[100], n, target;

void inputArray(){
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
}

int getTarget(){
    for(int i=0;i<n; i++){
        for(int j=0; j<n; j++){
            if(nums[i]+nums[j] == target){
                cout<<"["<<i<<","<<j<<"]"<<endl;
                return 0;
            }
        }
    }
}


int main(){
    inputArray();
    cout<<"Enter target"<<endl;
    cin>>target;
    getTarget();
}