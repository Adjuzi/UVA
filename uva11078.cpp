#include <iostream>

using namespace std;

int main()
{
    int cases;
    
    cin >> cases;
    
    while(cases--){
        long int students;
        long int score;
        long int max_score = -1000000;
        long int difference = -1000000;
        
        cin >> students;
        
        for(int i = 0; i < students; i++){
            cin >> score;
            
            if(i > 0){
                if(max_score-score >= difference){
                    difference = max_score-score;
                }
            }
            if(score >= max_score){
                max_score = score;
            }
            
        }
        
        cout << difference << endl;
    }

    return 0;
}