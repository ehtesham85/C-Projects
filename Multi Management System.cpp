// Presented By:  MUHAMMAD EHTESHAM (880)  ,  Muhammad Rehan Asghar (883) , Muhammad Moeez Bhatti (866)
#include<iostream>
using namespace std;
void mfun()
{
    
	cout<<"====== Multi Management System ======"<<endl;
	cout<<"1. Student management system"<<endl;
	cout<<"2. Library management system"<<endl;
	cout<<"3. Exit"<<endl;
	int choicemain;
	cout<<"Enter Choice:   ";
	cin>>choicemain;
	switch (choicemain)
	{
		case 1:
		
{
	int start=9999;
	int ent;
	for(int i=1 ; i<=9999 ; i++)
	{
		
	cout<<"====== Student Management System ======"<<endl;
	cout<<"1. Add Student"<<endl;
	cout<<"2. View Student"<<endl;
	cout<<"3. Update Student"<<endl;
	cout<<"4. Delete Student"<<endl;
	cout<<"5. Back to Main Menu"<<endl;
	int choice;
	cout<<"Enter Choice:  ";
	cin>>choice;
	switch (choice)
	{
		case 1:
		cout<<"Add the Given Details to add new Student:-"<<endl;
		int id;
		cout<<"Enter Student ID:  ";
		cin>>id;
		char name[20];
		cout<<"Enter Name:  ";
		cin>>name;
		char course[30];
		cout<<"Enter Course:  ";
		cin>>course;
		char semester[40];
		cout<<"Enter Semester:  ";
		cin>>semester;
		char section[40];
		cout<<"Enter section:  ";
		cin>>section;
		float gpa;
		cout<<"Enter GPA:  ";
		cin>>gpa;
		cout<<"Student added successfully!"<<endl;
		break; 
		
		case 2:
		int id2;
		cout<<"Enter Student Id to View Student:  ";
		cin>>id2;
		if(id==id2)
		{
			cout<<"Student Details:"<<endl;
			cout<<"Name:  "<<name<<"\tSemester:  "<<semester<<"\tDepartment:  "<<course<<"\tSection:  "<<section<<"\tgpa:  "<<gpa<<endl;
			
		}
		else
		{
			cout<<"Student not found."<<endl;
		}
		break; 
		
		case 3:
		cout<<"Enter given details to update Student:  "<<endl;
		cout<<"Enter new ID:  ";
		cin>>id;
		cout<<"Enter new Name:  ";
		cin>>name;
		cout<<"Enter new semester:  ";
		cin>>semester;
		cout<<"Enter new section:  ";
		cin>>section;
		cout<<endl;
		cout<<"Student Details Updated Successfully!"<<endl;
		break; 
		case 4:
	       int ide;
			cout<<"Enter ID:  ";
			cin>>ide;
		if(ide==id)
			    {name[20]='0';
				semester[40]='0';
				course[40]='0';
				section[40]='0';
				id=0; 
				cout<<"Student Deleted Successfully"<<endl;}
				else
				{
				    cout<<"ID not found"<<endl;
				}
			break;
			case 5:
		    mfun();
	
	}
   }
}

     
     case 2:
   
{
	for(int i=0 ; i<=9999 ; i++)
	{
	
	cout<<"====== Library Management System ======"<<endl;
	cout<<"1. Add Book"<<endl;
	cout<<"2. View Books"<<endl;
	cout<<"3. Borrow Book"<<endl;
	cout<<"4. Return Book"<<endl;
	cout<<"5. Delete Book"<<endl;
	cout<<"6. Back to Main Menu"<<endl;
	int choice;
	cout<<"Enter choice:  ";
	cin>>choice;
	switch (choice)
	{
		case 1:
		cout<<"Enter Book Details:  "<<endl;
		int id;
		cout<<"Enter ID:  ";
		cin>>id;
		char title[40];
		cout<<"Enter title:  ";
		cin>>title;
		char author[40];
		cout<<"Enter Author Name:  ";
		cin>>author;
		cout<<endl;
		cout<<"Book Added Successfully!"<<endl;
		break;
		
		case 2:
		int id2;
		cout<<"Enter Book ID:  ";
		cin>>id2;
		if(id==id2)
		{
		cout<<"Book Title:   "<<title<<"\tAuthor:   "<<author<<"\tBook ID:   "<<id<<endl;
		}
		else
		{
		    cout<<"Book Not Found "<<endl;
		}
		break;
		case 3:
		int id3;
		cout<<"Enter Book ID to Borrow:  ";
		cin>>id3;
		if(id3==id)
		{
			id=0;
			cout<<"Book Borrowed Successfully!Please return within 14 days."<<endl;
		}
		else
		{
			cout<<"Book not found"<<endl;
		}
		break;
		
		
		
		case 4:
		int id4;
		cout<<"Enter book id to return book:  ";
		cin>>id4;
		id=id4;
		cout<<"Book Returned successfully!"<<endl;
		break;
		
		case 5:
		int id5;
		cout<<"Enter book id to delete book:  ";
		cin>>id5;
		if(id5==id)
		{
		    id=0;
		    title[40]='0';
		    author[40]='0';
		    cout<<"Book deleted!"<<endl;
		}
		else
		{
		    cout<<"Book not found!"<<endl;
		}
		break;
		
	}
	
}
	
}


	
}
}
int main()
{
	cout<<"====== Multi Management System ======"<<endl;
	cout<<"1. Student management system"<<endl;
	cout<<"2. Library management system"<<endl;
	cout<<"3. Exit"<<endl;
	int choicemain;
	cout<<"Enter Choice:   ";
	cin>>choicemain;
	switch (choicemain)
	{
		case 1:
		
{
	int start=9999;
	int ent;
	for(int i=1 ; i<=9999 ; i++)
	{
		
	cout<<"====== Student Management System ======"<<endl;
	cout<<"1. Add Student"<<endl;
	cout<<"2. View Student"<<endl;
	cout<<"3. Update Student"<<endl;
	cout<<"4. Delete Student"<<endl;
	cout<<"5. Back to Main Menu"<<endl;
	int choice;
	cout<<"Enter Choice:  ";
	cin>>choice;
	switch (choice)
	{
		case 1:
		cout<<"Add the Given Details to add new Student:-"<<endl;
		int id;
		cout<<"Enter Student ID:  ";
		cin>>id;
		char name[20];
		cout<<"Enter Name:  ";
		cin>>name;
		char course[30];
		cout<<"Enter Course:  ";
		cin>>course;
		char semester[40];
		cout<<"Enter Semester:  ";
		cin>>semester;
		char section[40];
		cout<<"Enter section:  ";
		cin>>section;
		float gpa;
		cout<<"Enter GPA:  ";
		cin>>gpa;
		cout<<"Student added successfully!"<<endl;
		break; 
		
		case 2:
		int id2;
		cout<<"Enter Student Id to View Student:  ";
		cin>>id2;
		if(id==id2)
		{
			cout<<"Student Details:"<<endl;
			cout<<"Name:  "<<name<<"\tSemester:  "<<semester<<"\tDepartment:  "<<course<<"\tSection:  "<<section<<"\tgpa:  "<<gpa<<endl;
			
		}
		else
		{
			cout<<"Student not found."<<endl;
		}
		break; 
		
		case 3:
		cout<<"Enter given details to update Student:  "<<endl;
		cout<<"Enter new ID:  ";
		cin>>id;
		cout<<"Enter new Name:  ";
		cin>>name;
		cout<<"Enter new semester:  ";
		cin>>semester;
		cout<<"Enter new section:  ";
		cin>>section;
		cout<<endl;
		cout<<"Student Details Updated Successfully!"<<endl;
		break; 
		case 4:
	       int ide;
			cout<<"Enter ID:  ";
			cin>>ide;
		if(ide==id)
			    {name[20]='0';
				semester[40]='0';
				course[40]='0';
				section[40]='0';
				id=0; 
				cout<<"Student Deleted Successfully"<<endl;}
				else
				{
				    cout<<"ID not found"<<endl;
				}
			break;
			case 5:
		    mfun();
	
	}
   }
}

     
     case 2:
   
{
	for(int i=0 ; i<=9999 ; i++)
	{
	
	cout<<"====== Library Management System ======"<<endl;
	cout<<"1. Add Book"<<endl;
	cout<<"2. View Books"<<endl;
	cout<<"3. Borrow Book"<<endl;
	cout<<"4. Return Book"<<endl;
	cout<<"5. Delete Book"<<endl;
	cout<<"6. Back to Main Menu"<<endl;
	int choice;
	cout<<"Enter choice:  ";
	cin>>choice;
	switch (choice)
	{
		case 1:
		cout<<"Enter Book Details:  "<<endl;
		int id;
		cout<<"Enter ID:  ";
		cin>>id;
		char title[40];
		cout<<"Enter title:  ";
		cin>>title;
		char author[40];
		cout<<"Enter Author Name:  ";
		cin>>author;
		cout<<endl;
		cout<<"Book Added Successfully!"<<endl;
		break;
		
		case 2:
		int id2;
		cout<<"Enter Book ID:  ";
		cin>>id2;
		if(id==id2)
		{
		cout<<"Book Title:   "<<title<<"\tAuthor:   "<<author<<"\tBook ID:   "<<id<<endl;
		}
		else
		{
		    cout<<"Book Not Found "<<endl;
		}
		break;
		case 3:
		int id3;
		cout<<"Enter Book ID to Borrow:  ";
		cin>>id3;
		if(id3==id)
		{
			id=0;
			cout<<"Book Borrowed Successfully!Please return within 14 days."<<endl;
		}
		else
		{
			cout<<"Book not found"<<endl;
		}
		break;
		
		
		
		case 4:
		int id4;
		cout<<"Enter book id to return book:  ";
		cin>>id4;
		id=id4;
		cout<<"Book Returned successfully!"<<endl;
		break;
		
		case 5:
		int id5;
		cout<<"Enter book id to delete book:  ";
		cin>>id5;
		if(id5==id)
		{
		    id=0;
		    title[40]='0';
		    author[40]='0';
		    cout<<"Book deleted!"<<endl;
		}
		else
		{
		    cout<<"Book not found!"<<endl;
		}
		break;
		
		case 6:
		mfun();
	
		
	}
	
}
	
}
       case 3:
       	{
       		
		   }

	}
}