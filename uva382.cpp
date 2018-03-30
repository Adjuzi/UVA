#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main()
{
    int tmp = 0;
    string input;
    int current;
    
    while(scanf("%d", &current)){
        int sum = 0;
        
        if(current == 0){
            cout << "END OF OUTPUT" << endl;
            break;
        }
        
        for(int i = 1; i <= current/2; i++){
            if(current%i == 0){
                sum = sum+i;
            }
        }
        
        if(tmp == 0){
            cout << "PERFECTION OUTPUT" << endl;
            tmp = 1;
        }
        
        if(sum == current){
            cout << setw(5) << current << "  PERFECT" << endl;
        }else if(sum < current){
            cout << setw(5) << current << "  DEFICIENT" << endl;
        }else{
            cout << setw(5) << current << "  ABUNDANT" << endl;
        }
    }

    return 0;
}