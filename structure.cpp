#include <iostream>
using namespace std;

typedef struct
	{
		int toes;
		int knees;
		int shoulders;
		int head;
	} Person;
	
	
int main ()

{		
	Person People [5];
    cout << "Enter value for the first persons' toes:  " << endl;
	cin >> People[0].toes;
	cout << "Enter value for the first persons' knees: " << endl;
	cin >> People[0].knees; 
	cout << "Enter value for the first persons' shoulders: " << endl;
	cin >> People[0].shoulders;
	cout << "Enter value for the first persons' head: " << endl;
	cin >> People[0].head;
	
	cout << "Enter value for the second persons' toes: " << endl;
	cin >> People[1].toes;
	cout << "Enter value for the second persons' knees: " << endl;
	cin >> People[1].knees; 
	cout << "Enter value for the second persons' shoulders: " << endl;
	cin >> People[1].shoulders;
	cout << "Enter value for the second persons' head: " << endl;
	cin >> People[1].head;
	
	cout << "Enter value for the third persons' toes: " << endl;
	cin >> People[2].toes;
	cout << "Enter value for the third persons' knees: " << endl;
	cin >> People[2].knees; 
	cout << "Enter value for the third persons' shoulders: " << endl;
	cin >> People[2].shoulders;
	cout << "Enter value for the third persons' head: " << endl;
	cin >> People[2].head;
	
	cout << "Enter value for the fourth persons' toes: " << endl;
	cin >> People[3].toes;
	cout << "Enter value for the fourth persons' knees: " << endl;
	cin >> People[3].knees; 
	cout << "Enter value for the fourth persons' shoulders: " << endl;
	cin >> People[3].shoulders;
	cout << "Enter value for the fourth persons' head: " << endl;
	cin >> People[3].head;
	
	cout << "Enter value for the fifth persons' toes: " << endl;
	cin >> People[4].toes;
	cout << "Enter value for the fifth persons' knees: " << endl;
	cin >> People[4].knees; 
	cout << "Enter value for the fifth persons' shoulders: " << endl;
	cin >> People[4].shoulders;
	cout << "Enter value for the fifth persons' head: " << endl;
	cin >> People[4].head;
	
	cout << "The first person's statistics are: " << "Toes: " << People[0].toes << " " << "Knees: " << People[0].knees << " " << "Shoulders: " << People[0].shoulders << " " << "Head: " << People[0].head << " " << endl; 
	cout << "The second person's statistics are: " << "Toes: " << People[1].toes << " " << "Knees: " << People[1].knees << " " << "Shoulders: " << People[1].shoulders << " " << "Head: " << People[1].head << " " << endl; 
	cout << "The third person's statistics are: " << "Toes: " << People[2].toes << " " << "Knees: " << People[2].knees << " " << "Shoulders: " << People[2].shoulders << " " << "Head: " << People[2].head << " " << endl; 
	cout << "The fourth person's statistics are: " << "Toes: " << People[3].toes << " " << "Knees: " << People[3].knees << " " << "Shoulders: " << People[3].shoulders << " " << "Head: " << People[3].head << " " << endl; 
	cout << "The fifth person's statistics are: " << "Toes: " << People[4].toes << " " << "Knees: " << People[4].knees << " " << "Shoulders: " << People[4].shoulders << " " << "Head: " << People[4].head << " " << endl; 
	
	
	

	return 0;
	
	
	
}
