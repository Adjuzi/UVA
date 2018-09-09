#include <iostream>

using namespace std;

int main()
{
    int cases, rows, columns;
    char piece;
    
    cin >> cases;
    
    for(int i = 0; i < cases; i++){
        cin >> piece >> rows >> columns;
        
        if(piece == 'r'){
            cout << min(rows, columns) << endl;
        }else if(piece == 'k'){
            cout << (rows*columns)/2 << endl;
        }else if(piece == 'Q'){
            cout << min(rows, columns) << endl;
        }else{
            if(rows%2 != 0){
                rows++;
            }
            if(columns%2 != 0){
                columns++;
            }
            cout << rows*columns/4 << endl;
        }
    }

    return 0;
}