#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the no. of terms"<<endl;
        cin>>n;
        int n1=0,n2=1;
        int sum=0;

        for(int i=0;i<n;i++){
            // if(i==0 || i==1) cout<<i<<endl;
            // else {
                sum=n1+n2;
                n1=n2;
                n2=sum; 
                // cout<<n2<<endl;
            // }
        }
        cout<<sum<<endl;
        return 0;
    }