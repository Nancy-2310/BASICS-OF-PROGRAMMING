#include<iostream>
    using namespace std;
    int main(){
        int x;
        cout<<"enter the number "<<endl;
        cin>>x;
        cout<<x/2<<endl;
        float y;
        cout<<"enter the second number "<<endl;
        cin>>y;
        if(y<0){
            y= -(y);
            int b=int(y)+1;
            cout<<b-y;
        }
        else{
            cout<< y-int(y)<<endl;
        }
        return 0;
    }