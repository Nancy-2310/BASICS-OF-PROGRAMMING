#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"Enter the number"<<endl;
        cin>>n;
        if(n%3==0 or n%5==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        return 0;
    }