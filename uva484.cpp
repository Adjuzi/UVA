#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    vector<int> no;
    vector<int> occ;
    string seq;
    int number;
        
    while(cin >> number){
        int checked = 0;
        for(int i = 0; i < no.size(); i++){
            if(number == no[i]){
                occ[i] += 1;
                checked = 1;
            }
        }
        if(no.size() == 0 || checked == 0){
            no.push_back(number);
            occ.push_back(1);
        }
    }
        
    for(int i = 0; i < no.size(); i++){
        cout << no[i] << " " << occ[i] << endl;
    }
    
    return 0;
}