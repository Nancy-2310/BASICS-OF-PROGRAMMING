#include<iostream>
#include<math.h>
    using namespace std;
        void abc(){
        cout<<"good morning"<<endl;
            }
        void triangle(int x){
            for(int i=1;i<=x;i++){
                for(int j=1;j<=i;j++){
                    cout<<"*";
                } 
                cout<<endl;
                }
            }
        int sum(int x , int y){
                cout<<x+y<<endl;
            }
        int mini(int x, int y){
            int a;
            if(x>y) a=y; 
            else a=x;
            return a;
        }
    int main(){
        abc();
        abc();
        triangle(3);
        sum(4,5);
            int x,y;
            cin>>x>>y;
            cout<<"mini is :"<<endl;
            cout<<mini(x,y)<<endl;
            cout<<max(x,y)<<endl;
            cout<<sqrt(4.6)<<endl;
        return 0;
    }