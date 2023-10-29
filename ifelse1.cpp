#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"Enter the number"<<endl;
        cin>>n;
        if(n%3==0 || n%5==0){
            if(!(n%15==0)){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
        else{
            cout<<"no"<<endl;
        }
        return 0;
    }