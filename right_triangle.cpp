#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double a, b, c, d;
  int decide;
  a = b = c = d = 0;
  cout << "What mode?" << endl << "Mode 1: You need to find the hypotenuse." << endl
    << "Mode 2: You have the hypotenuse";
  cout << endl;
  cin >> decide;

  //improper input
  if (decide > 2 || decide < 1){
    cout << "Wrong input, try again." << endl;
    return 0;
  }
  //find the hypotenuse
  if (decide == 1){
    cout << "What are the two sides?" << endl;
    cin >> a >> b;

    //math
    c = (a * a) + (b *b);
    d = double (sqrt (double (c)));

    cout << "The hypotenuse is " << d << endl;

    return 0;
  }

  //find the side
  if (decide == 2){
    cout << "What is the hypotenuse?" << endl;
    cin >> c;
    cout << "What is the side?" << endl;
    cin >> a;

    //is the triangle possible
    if (c <= a){
      cout << "Imppossible triangle." << endl;
      return 0;
    }

    //math
    b = (c * c) - (a * a);
    d = double (sqrt (double (b)));

    cout << "The leg is " << d << endl;

    return 0;
  }
}
