#include <iostream>

using namespace std;

int main()
{
  int n; cin >> n;
  int y, m, d;
  for(int i = 0; i < n; i ++){
    cin >> y >> m >> d;
    if(y < 1989){
      cout << "Yes" << endl;
    }
    else if(y > 1989){
      cout << "No" << endl;
    }
    else if(m < 2){
      cout << "Yes" << endl;
    }
    else if(m > 2){
      cout << "No" << endl;
    }
    else if(d <= 27){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
  
  return 0;
}
