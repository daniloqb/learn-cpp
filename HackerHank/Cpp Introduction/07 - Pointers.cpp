#include <iostream>
#include <cstdio>

using namespace std;

void update (int *a, int *b){

   int c;
   int d;

   c = *a + *b;

   if (*a > *b)
     d = *a - *b;
   else
     d = *b - *a;

     *a = c;
     *b = d;

}

int main(){

  int a,b;
  int *pa = &a;
  int *pb = &b;

  cin >> a >> b;

  update(pa, pb);

  cout << a << endl << b << endl;

  return 0;
}
