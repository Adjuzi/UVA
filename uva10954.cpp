#include <iostream>
#include <queue>

using namespace std;

int main()
{
    long long N, number, x, y;
    
    while(cin >> N){
        if(N == 0){
            break;
        }
        
        long long result = 0;
        priority_queue<long long> numbers;
        
        while(N--){
            cin >> number;
            numbers.push(-number);
        }
        while(numbers.size() > 1){
            x = numbers.top();
            numbers.pop();
            y = numbers.top();
            numbers.pop();
            result += -x-y;
            numbers.push(x+y);
        }
        cout << result << endl;
    }

    return 0;
}