#include <iostream>
#include <fstream>
using namespace std;
int main ()

{   
 int array [9];
 int i;
 int a;
 ifstream infile;
 infile.open("sample.txt");
 while (!infile.eof())
       {
       	for (i=0; i < 5; i++)
       	    {
       	    	infile >> array [i];
			}
       	
	   }
    infile.close();
    
    array [5] = 6;
	array [6] = 7;
	array [7] = 8;
	array [8] = 9;
	 
    
 ofstream outfile;
 outfile.open("sample2.txt", ios_base::app);
        {        	 
        	   outfile << array [5] << endl;
        	   outfile << array [6] << endl;
        	   outfile << array [7] << endl;
        	   outfile << array [8] << endl;
		}
        
 
 
 outfile.close();      
 
return 0;



}
