#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main ()
{
	int a;
	int counter=0;
	char binaryString[10];
	strcpy (binaryString, "1010010010");
	
	for (a=0; a < 10; a++)
	     {
	          if (binaryString[a] == '1')
	                {
	                	counter = counter + 1;
					}
			   else   
			   
			        {
					}
					
	          
		 }
	cout << "The total number of 1's in the binary string is: " << counter << endl;
	return 0;
	
}
