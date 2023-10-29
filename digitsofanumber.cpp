#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the number"<<endl;
        cin>>n;
        int n1=n;

        int count=0;
        while(n>0){
            n=n/10;
            count++;
        }
        if(n1==0) cout<<1<<endl;
        else
            cout<<count<<endl;
        return 0;
    }