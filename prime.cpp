#include<iostream>
    using namespace std;
    int main(){
        int n;
        bool flag=true;
        cout<<"enter the number"<<endl;
        cin>>n;
        for(int i=2;i<n;i++){
            if(n==2){
                cout<<"prime";
            }
            else if(n%i==0){
                cout<<"non-prime"<<endl;
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<"Prime"<<endl;
        }
        return 0;
    }
    