#include <iostream>
#include <fstream>
using namespace std;
int main ()

{
	int data [5];
	int a;
    cout << "Enter the first number: " << endl;
    cin >> data[4];
    cout << "Enter the second number: " << endl;
    cin >> data[3];
    cout << "Enter the third number: " << endl;
    cin >> data[2];
    cout << "Enter the fourth number: " <<endl;
    cin >> data[1];
    cout << "Enter the last number: " <<endl;
    cin >> data [0];
    
    ofstream outfile;
    outfile.open("sample1.txt");
    for (a=0; a < 5; a++)
		{		
		outfile << data [a] << endl;
        }
    outfile.close();        
        
        return 0;    
    
    
	
	
}
