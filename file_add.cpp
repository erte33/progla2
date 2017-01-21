#include <iostream>
#include <fstream>
using namespace std;
int main ()

{    
    int data [5];
    int sum;
    int i;
    int a;
    int file;
	ifstream infile;
	infile.open("sample.txt");
    while (!infile.eof())
	{
		for (a=0; a < 5; a++)
		{		
		infile >> data [a];
        }
	}
	  
	infile.close();
	
	for (i=0; i < 5; i++)
	{
		sum = sum + data [i];
	}
	 
	 
	cout << "The sum of all the values inside sample.txt is: " << sum << endl;
	
	return 0;
	
}
