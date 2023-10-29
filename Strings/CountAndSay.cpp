#include <bits/stdc++.h>
    using namespace std;

    string countAndSay(int n) {
      if(n == 1) return "1";
      string ans = countAndSay(n - 1);
      string temp = "";
      int freq = 1;
      char ch = ans[0];
      for(int i = 1; i < ans.length(); i++){
          char dh = ans[i];
          if(ch == dh){
            freq++;
          }
          else{
            temp += (to_string(freq)+ch);
            freq = 1;
            ch = dh;
          }
      }
      temp += (to_string(freq)+ch);
      return temp;  
    }
    int main(){
        int n;
        cout<<"Enter the number"<<endl;
        cin >>n;
        cout<< countAndSay(n);
        return 0;
    }