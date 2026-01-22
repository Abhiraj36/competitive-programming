#include<iostream>
using namespace std;

int main(){
    int n = 0; 
    cin >> n;
    for(int i = 0; i < n;i++){
        string s = "";
        cin>>s;
        if(s.length() > 10){
           int sizeofString= s.length();
           cout << s[0] << (sizeofString - 2) << s[sizeofString - 1] << endl;
        } else {
            cout << s <<endl;
        } 
    }
    return 0;
}