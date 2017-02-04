#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class User {
    public:     
	   string name;
	   int id_num;    
};

class Student : public User{ 
    public:
	   int num_of_subjects;
	   int num_books;
}; 

class Prof : public User{  
    public:
	   int tin;
}; 

class Staff : public User{  
    public:
	   int SSS;
}; 

int main (){
	Student stud1;
	Prof prof1;
	Staff staff1;
	
	
	cout << "Enter the Student's Name: " ;
	cin >> stud1.name;
	cout << "Enter the Student's ID Number: " ;
	cin >> stud1.id_num;
	cout << "Enter the Number of Subjects the Student has: ";
	cin >> stud1.num_of_subjects;
	cout << "Enter the Number of Books the Student has: ";
	cin >> stud1.num_books;
	cout << "Enter the Professor's Name:";
	cin >> prof1.name;
	cout << "Enter the Professor's ID Number: ";
	cin >> prof1.id_num;
	cout << "Enter the Professor's TIN: ";
	cin >> prof1.tin;
	cout << "Enter the Staff's Name:";
	cin >> staff1.name;
	cout << "Enter the Staff's ID Number: ";
	cin >> staff1.id_num;
	cout << "Enter the Staff's SSS: ";
	cin >> staff1.SSS;
		
	cout << " " << endl; 

	cout << "The Student's Name is:" << stud1.name << endl;
	cout << "The Student's ID Number is: "<< stud1.id_num << endl;
	cout << "The Student's Number of Subjects is: " << stud1.num_of_subjects << endl;
	cout << "The Student has " << stud1.num_books << " books" << endl;
	cout << "The Professor's Name is: " << prof1.name << endl;
	cout << "The Professor's ID Number is: " << prof1.id_num << endl;
	cout << "The Professor's TIN is: " << prof1.tin << endl;
	cout << "The Staff's Name is: " << staff1.name << endl;
	cout << "The Staff's ID Number is: " << staff1.id_num << endl;
	cout << "The Staff's SSS is:" << staff1.SSS << endl;
	
	
	
return 0; 
}
