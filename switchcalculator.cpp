#include<iostream>
    using namespace std;
    int main(){
        int n1,n2;
        char op;
        cout<<"enter the number"<<endl;
        cin>>n1>>n2>>op;
        switch(op){
            case '+':cout<<n1+n2<<endl;
            break;
            case '-':cout<<n1-n2<<endl;
            break;
            case '*':cout<<n1*n2<<endl;
            break;
            case '/':cout<<n1/n2<<endl;
            break;
            default:cout<<"wrong operator"<<endl;
        }
        return 0;
    }