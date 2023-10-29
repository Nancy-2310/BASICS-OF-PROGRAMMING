#include<iostream>
    using namespace std;
    int main(){
        // while('a'<'b')
        //     cout<<"Nancy is a rocking girl"<<endl;
        //     int i,x;
        // while(i=10) 
        //     cout<<"pwskills"<<endl;  
        //     i=i+1;
        int x=4,y=0;
        while(x>=0){
            x--;
            y++;
            if(x==y)
            continue;
            else
            cout<<x<<" "<<y<<endl;
        }
        int a=4,b=0;
        while(a>=0){
            if(a==b)
            break;

            else
            cout<<a<<" "<<b<<endl;

            a--;
            b++;
            
        }
        int t=10;
        while(t/=2){
            cout<<"Hello"<<endl;
        }
        return 0;
    }