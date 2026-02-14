#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int n;
    cin >> n;

    unordered_map<string, int> teams;
    string team_name;

    for(int i = 0; i < n; i++){
        cin >> team_name;
        teams[team_name]++;
    }

    string winner;
    int maximum = 0;

    for(auto &pair : teams){
        if(pair.second > maximum){
            maximum = pair.second;
            winner = pair.first;
        }
    }

    cout << winner;

    return 0;
}
