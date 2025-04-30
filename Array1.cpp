#include <iostream>
using namespace std;

int main(){
        int n,m,s,sum=0;
        cout<<"Enter the total number of prb :"<<endl;

        cin>>n;
        
     int arr[n];
    
     cout<<"Enter the prb that he has solved :"<<endl;

     cin>>m;
     cout<<"Enter the prbs points serially:"<<endl;

     for (int  i = 0; i <n; i++)
     {
        cin>>arr[i];
     }
     cout<<"Enter the number of prbs that he has solved :"<<endl;
     for (int  i = 0; i <m; i++)
     {
        cin>>s;
        sum=sum+arr[s-1];
     }
     cout<<sum;

    return 0;
}