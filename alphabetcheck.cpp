#include<iostream>
    using namespace std;
    int main(){
        char ch;
        cout<<"Enter the character "<<endl;
        cin>>ch;
        if(ch>=65 and ch<=90  || ch >=97 and ch<=122){
            cout<<"yes an alphabet "<<endl;
        }
        else {
            cout<<"not an alphabet"<<endl;
        }
        return 0;
    }