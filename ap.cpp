#include<iostream>
    using namespace std;
    int main(){
        int n ;
        cout<<"enter the number of terms"<<endl;
        cin>>n;
        // for(int i=1;i<n;i++){
        //     cout<<2*i-1<<endl;
        // }
        for(int i=1;i<=n;i++){
            cout<<3*i+1<<endl;
        }
        return 0;
    }