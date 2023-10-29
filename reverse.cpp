#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the number"<<endl;
        cin>>n;
        int n1=n;
        int rev=0;
        int rem=0;
        while(n>0){
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
            cout<<rev<<endl;
        return 0;
    }