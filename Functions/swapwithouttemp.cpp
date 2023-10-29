#include<iostream>
#include<math.h>
    using namespace std;
        int swap(int x , int y){
                x =x+y;
                y=x-y;
                x=x-y;
                cout<<x<<" "<<y<<endl;
                }  
    int main(){
        int x=3;
        int y=4;
        swap(x,y);

        cout<<x<<" "<<y<<endl;
        return 0;
    }