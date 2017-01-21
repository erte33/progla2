#include <iostream>
using namespace std;


int main ()
{

int x;
int y;
int add;
int subtract;
int divide;
int multiply;
cout << "Enter First Number: ";
cin >> x;
cout << " " << endl;
cout << "Enter Second Number: ";
cin >> y;
cout << " " << endl;


add = x + y;
subtract = x - y;
multiply = x*y;
divide = x/y;

cout << "Sum is: " << add << endl;
cout << "Difference is: " << subtract << endl;
cout << "Product is: " << multiply << endl;
cout << "Quotient is: " << divide << endl;

return 0;

		
}
