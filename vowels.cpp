#include<iostream>
    using namespace std;
    int main(){
        char ch;
        cout<<"enter character"<<endl;
        cin>>ch;
        if(ch=='a'|| ch=='e' || ch=='i' ||ch=='o' ||  ch=='u' ||   ch=='A'   || ch=='E' ||  ch=='O' ||  ch=='U' ||  ch=='I'){
            cout<<"vowel"<<endl;
        }
        else{
            cout<<"consonant"<<endl;
        }
        return 0;
    }