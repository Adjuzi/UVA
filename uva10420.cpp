#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main()
{
    int cases;
    string input;
    string country;
    
    map<string, int> cc;
    
    getline(cin, input);
    istringstream iss(input);
    iss >> cases;
    
    for(int i = 0; i < cases; i++){
        getline(cin, input);
        istringstream iss(input);
        iss >> country;
        
        if(cc.find(country) != cc.end()){
            cc.find(country)->second += 1;
        }else{
            cc.insert(pair<string, int>(country, 1));
        }
        
    }
    
    for(auto i : cc){
        cout << i.first << " " << i.second << endl;
    }
    
    return 0;
}