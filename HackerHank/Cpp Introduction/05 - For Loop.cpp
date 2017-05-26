#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;


int main(){

  int a,b;
  vector<string> number_names= {"one","two","three","four","five","six","seven","eight","nine"};

  cin >> a >> b;

  for (int n = a; n <= b; n++){
    if ( (n >=1) and (n <=9)){
      cout << number_names[n-1] << endl;
    }
    else if( n > 9){
      if (n%2) cout << "odd" << endl;
      else     cout << "even" << endl;
    }
  }

  return 0;
}
