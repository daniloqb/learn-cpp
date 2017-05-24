/*

    Int ("%d"): 32 Bit integer
    Long ("%ld"): 32 bit integer (same as Int for modern systems)
    Long Long ("%lld"): 64 bit integer
    Char ("%c"): Character type
    Float ("%f"): 32 bit real value
    Double ("%lf"): 64 bit real value


    Input Format

    Input consists of the following space-separated values: int, long, char, float, and double, respectively.

    Output Format

    Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

    Sample Input

    3 12345678912345 a 334.23 14049.30493

    Sample Output

    3
    12345678912345
    a
    334.230
    14049.304930000


*/



#include <iostream>
#include <cstdio>
//#include <iomanip>

using namespace std;

int main(){

int i = 0;
long l = 0;
char c = '\0';
float f = 0.0;
double d = 0.0;



scanf("%d %ld %c %f %lf",&i,&l,&c,&f,&d);

printf("%d\n%ld\n%c\n%.3f\n%.9lf\n",i,l,c,f,d);
/*
cin >> i >> l >> c >> f >> d;
cout << i << endl << l << endl << c << endl;
std::cout <<fixed << setprecision(3) << f << endl;
std:: cout << fixed << setprecision(9) << d << endl;
*/

  return 0;
}
