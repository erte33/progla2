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
	Student stud[3];
	Prof prof[3];
	Staff staff[3];
	
	int i;
	int j;
	int k;
	
	for (i=0; i<3; i++){
	
	cout << "Enter the Student's Name: " ;
	cin >> stud[i].name;
	cout << "Enter the Student's ID Number: " ;
	cin >> stud[i].id_num;
	cout << "Enter the Number of Subjects the Student has: ";
	cin >> stud[i].num_of_subjects;
	cout << "Enter the Number of Books the Student has: ";
	cin >> stud[i].num_books;
	
	cout << " " << endl;
}
   
    for (j=0; j<3; j++){
	
	cout << "Enter the Professor's Name:";
	cin >> prof[j].name;
	cout << "Enter the Professor's ID Number: ";
	cin >> prof[j].id_num;
	cout << "Enter the Professor's TIN: ";
	cin >> prof[j].tin;
	
	cout << " " << endl;
	
}
	
	for (k=0; k<3; k++){
	
	
	cout << "Enter the Staff's Name:";
	cin >> staff[k].name;
	cout << "Enter the Staff's ID Number: ";
	cin >> staff[k].id_num;
	cout << "Enter the Staff's SSS: ";
	cin >> staff[k].SSS;
	cout << " " << endl; 

	
}
		
	cout << " " << endl; 

	cout << "The First Student's Name is:" << stud[0].name << endl;
	cout << "The First Student's ID Number is: "<< stud[0].id_num << endl;
	cout << "The First Student's Number of Subjects is: " << stud[0].num_of_subjects << endl;
	cout << "The First Student has " << stud[0].num_books << " books" << endl;
	cout << " " << endl;
	cout << "The Second Student's Name is:" << stud[1].name << endl;
	cout << "The Second Student's ID Number is: "<< stud[1].id_num << endl;
	cout << "The Second Student's Number of Subjects is: " << stud[1].num_of_subjects << endl;
	cout << "The Second Student has " << stud[1].num_books << " books" << endl;
	cout << " "  << endl;
	cout << "The Third Student's Name is:" << stud[2].name << endl;
	cout << "The Third Student's ID Number is: "<< stud[2].id_num << endl;
	cout << "The Third Student's Number of Subjects is: " << stud[2].num_of_subjects << endl;
	cout << "The Third Student has " << stud[2].num_books << " books" << endl;
	cout << " " << endl;
	cout << "The First Professor's Name is: " << prof[0].name << endl;
	cout << "The First Professor's ID Number is: " << prof[0].id_num << endl;
	cout << "The First Professor's TIN is: " << prof[0].tin << endl;
	cout << " "  << endl;
    cout << "The Second Professor's Name is: " << prof[1].name << endl;
	cout << "The Second Professor's ID Number is: " << prof[1].id_num << endl;
	cout << "The Second Professor's TIN is: " << prof[1].tin << endl;
	cout << " "  << endl;
	cout << "The Third Professor's Name is: " << prof[2].name << endl;
	cout << "The Third Professor's ID Number is: " << prof[2].id_num << endl;
	cout << "The Third Professor's TIN is: " << prof[2].tin << endl;
	cout << " " << endl;
	cout << "The First Staff's Name is: " << staff[0].name << endl;
	cout << "The First Staff's ID Number is: " << staff[0].id_num << endl;
	cout << "The First Staff's SSS is:" << staff[0].SSS << endl;
	cout << " "  << endl;
	cout << "The Second Staff's Name is: " << staff[1].name << endl;
	cout << "The Second Staff's ID Number is: " << staff[1].id_num << endl;
	cout << "The Second Staff's SSS is:" << staff[1].SSS << endl;
	cout << " " << endl;
	cout << "The Third Staff's Name is: " << staff[2].name << endl;
	cout << "The Third Staff's ID Number is: " << staff[2].id_num << endl;
	cout << "The Third Staff's SSS is:" << staff[2].SSS << endl;
	
	
	
	
return 0; 
}
