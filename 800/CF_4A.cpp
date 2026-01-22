// CF 4A - Watermelon
// Rating: 800
// Key idea: even number > 2


#include<iostream>
using namespace std;

int main(){
    int w;
    cin>>w;

    if(w>2 && w%2 == 0) cout<<"Yes\n";
    else cout<< "No\n";

    return 0;
}