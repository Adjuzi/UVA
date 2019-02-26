#include <iostream>

using namespace std;

int main()
{
  int a,b;
  
  while(cin >> a >> b){
    if(a == -1){
        break;
    }
    
    int tmp1, tmp2;
    
    if(a >= b){
        tmp1 = a-b;
        tmp2 = b-a+100;
        if(tmp1 < tmp2){
            cout << tmp1 << endl;
        }else{
            cout << tmp2 << endl;
        }
    }else{
        tmp1 = b-a;
        tmp2 = a-b+100;
        if(tmp1 < tmp2){
            cout << tmp1 << endl;
        }else{
            cout << tmp2 << endl;
        }
    }
  }
  
  return 0;
}