#include <iostream>
using namespace std;
int main(){
    
    int n,Index1,Index2;
    cin>>n;
   
    int nums[100];
    for(int i=0; i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           
            if(nums[i]+nums[j]==target){
                Index2=j;
                 Index1=i;
            }break;

        }
      
    }
    cout<<"["<< Index1<<","<< Index2<<"]";

}