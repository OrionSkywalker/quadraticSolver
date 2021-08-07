#include <iostream>
#include <cmath>
using namespace std;

int main(){
  //declare vars for a,b,c representing the parts of a quadratic equation with the same notation a,b,c
  double a,b,c;
  //get a,b,c values
  cout << "Enter a:" << endl;
  cin >> a;
  cout << "Enter b:" << endl;
  cin >> b;
  cout << "Enter c:" << endl;
  cin >> c;
  
  //declare variables to hold root solutions
  double root1, root2;
  
  //calculate and print roots with quadratic formula
  root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
  cout << "Root 1 is " << root1 << endl;
  
  root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
  cout << "Root 2 is " << root2 << endl;
  
}
