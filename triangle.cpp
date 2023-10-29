#include<iostream>
    using namespace std;
    int main(){
        int a, b, c;
        cout<<"enter the sides "<<endl;
        cin>>a>>b>>c;
        if(a+b>c){
            if(a+c>b){
                if(b+c>a){
                    cout<<"yes a triangle"<<endl;
                }
                else{
                    cout<<"not a triangle"<<endl;
                }
                
            } 
            else{
                    cout<<"not a triangle"<<endl;
                }
        }
        else{ cout<<"not a triangle"<<endl;
                }
        return 0;
    }