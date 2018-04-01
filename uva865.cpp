#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string input;
    string line;
    string cypher;
    string alpha;
    int cases;
    
    getline(cin, input);
    istringstream iss(input);
    iss >> cases;
    
    getline(cin, input);
    
    while(cases--){
        getline(cin, alpha);
        
        getline(cin, cypher);
        
        cout << cypher << endl;
        cout << alpha << endl;
        
        while(getline(cin, line)){
            if(line == ""){
                break;
            }
            
            string new_line = "";
            
            for(int i = 0; i < line.size(); i++){
                size_t found = alpha.find(line[i]);
                if(found != string::npos){
                    new_line += cypher[found];
                }else{
                    new_line += line[i];
                }
            }
            
            cout << new_line << endl;
        }
        if(cases != 0){
            cout << endl;
        }
    }

    return 0;
}