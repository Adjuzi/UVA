#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string input,sub;
    
    float hh, mm, ss, speed, distance = 0, time_passed = 0;
    
    while(getline(cin, input)){
        sub = input.substr(0,2);
        hh = stoi(sub);
        sub = input.substr(3,2);
        mm = stoi(sub);
        sub = input.substr(6,2);
        ss = stoi(sub);
        
        string output_time = input.substr(0,8);
        
        mm = mm/60;
        ss = ss/3600;
        
        hh = hh+mm+ss;
        
        hh = hh-time_passed;
        
        if(speed != 0){
            distance = hh*speed+distance;
        }
        
        if(input.length() > 8){
            sub = input.substr(9);
            speed = stoi(sub);
        }
        
        time_passed = hh+time_passed;
        
        if(input.length() < 9){
            cout << output_time << " " << setprecision(2) << fixed << distance << " km" <<endl;
        }
        
    }

    return 0;
}
