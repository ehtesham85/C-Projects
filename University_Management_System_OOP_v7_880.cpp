#include<iostream>
using namespace std;
struct Student             
{
   int ID;
   string Name;
   int age;
   //Department;
   char Enrolled_Course[50];
   //Attendance a;
};
struct Teacher
{  
   int id;
   string name;
   char Courses_Taught[50];
};
struct Course
{
	string course_code;
	string title;
	int credit_hours;
	Teacher AssignedTeacher;
};
struct Department
{
	int Dept_ID;
	string Dept_name;
	Teacher HOD;
};
struct Attendance
{
	float total_classes;
	float attended_classes;
	float Percentage;
};

int main()
{
	for(int i=0 ; i<5 ; i++)
{
	/*Student s;
	Department d;
	Teacher t;
	Attendance a;
	Course c;*/	
	cout<<"-----University Management System-----"<<endl;
	cout<<endl;
	cout<<"1- Add new students and teachers."<<endl;
    cout<<"2- Enroll students in courses."<<endl;
    cout<<"3- Assign courses to teachers."<<endl;
    cout<<"4- Record attendance of students in a course."<<endl;
    cout<<"5- Student information."<<endl;
    cout<<"6- Teacher and department details with their assigned courses."<<endl;
    cout<<endl;
    int n;
    cout<<"Enter your choice: ";
    cin>>n;
    switch(n)
    {
    	case 1:
    	   {
		   
		   cout<<"1- Add Student."<<endl;
    	   cout<<"2- Add Teacher."<<endl;
    	   int n;
    	   cout<<"Enter your Choice: ";
    	   cin>>n;
    	   switch(n)
    	   {
    	   	case 1:
    	   		{
				 Student s;  
	cout<<"Enter ID: ";
	cin>>s.ID;
	cout<<"Enter Name: ";
	cin>>s.Name;
	cout<<"Enter age: ";
	cin>>s.age;
	Department d;
	cout<<"Enter Department ID: ";
	cin>>d.Dept_ID;
	cout<<"Enter Department Name: ";
	cin>>d.Dept_name;
	Teacher t;
	cout<<"Enter Teacher ID: ";
	cin>>t.id;
	cout<<"Enter Teacher Name: ";
	cin>>t.name;
	cout<<"Enter Courses Taught: ";
	cin>>t.Courses_Taught;
	cout<<"Enter course Enrolled: ";
	cin>>s.Enrolled_Course;
    Attendance a;
	cout<<"Enter total Classes: ";
	cin>>a.total_classes;
	cout<<"Classes Attended: ";
	cin>>a.attended_classes;
    a.Percentage=a.attended_classes/a.total_classes*100;
	cout<<"Percentage: "<<a.Percentage;
	cout<<endl;
	cout<<"Student Added Successfully!"<<endl;
    	   		break; }
    	   	case 2:
    	   		{
				   cout<<endl;
	Teacher t;
	cout<<"Enter ID: ";
	cin>>t.id;
	cout<<"Enter Name: ";
	cin>>t.name;
	Department d;
	cout<<"Enter Department ID: ";
	cin>>d.Dept_ID;
	cout<<"Enter Department Name: ";
	cin>>d.Dept_name;
	cout<<"Enter HOD ID: ";
	cin>>d.HOD.id;
	cout<<"Enter HOD Name: ";
	cin>>d.HOD.name;
	cout<<endl;
	cout<<"Teacher added Successfully!"<<endl;
}
    	   	break;	
	}
	
    	break;
}
    	case 2:
    		{
			
    		cout<<endl;
	Course c;
	cout<<"Enter course Code: ";
	cin>>c.course_code;
	cout<<"Enter Course Title: ";
	cin>>c.title;
	cout<<"Enter Credit Hours: ";
	cin>>c.credit_hours;
	Teacher t;
	cout<<"Enter Teacher ID: ";
	cin>>t.id;
	cout<<"Teacher Name: ";
	cin>>t.name;
	cout<<endl;
	cout<<"Student Enrolled Successfully!"<<endl;
    	
    	break;
    }
    	case 3:
    	   	
			   {
			   cout<<endl;
	Teacher t;
	cout<<"Enter Teacher ID: ";
	cin>>t.id;
	cout<<"Enter Teacher Name: ";
	cin>>t.name;
	cout<<"Enter Course Title: ";
	cin>>t.Courses_Taught;
	cout<<endl;
	cout<<"Course Assigned Successfully!"<<endl;
	cout<<endl;
    	break;
    }
    	case 4:
    	    
			{
			
			cout<<endl;
	Attendance a;
	cout<<"Enter Total Classes: ";
	cin>>a.total_classes;
	cout<<"Enter Attended Classes: ";
	cin>>a.attended_classes;
	a.Percentage=(a.attended_classes/a.total_classes)*100;
	cout<<"Attendance Percentage: "<<a.Percentage<<endl;
	cout<<endl;
    	break;
    }
    	case 5:
    	   
		   {
		   
		  Student s;
	int pid;
	cout<<"Enter Student ID: ";
	cin>>pid;
	if(pid=s.ID)
	{
	   cout<<endl;
	   Student s;
	   cout<<"Student Name: "<<s.Name<<endl;
	   cout<<"Student ID: "<<s.ID<<endl;
	   cout<<"Age: "<<s.age<<endl;
	   cout<<"Enrolled Course: "<<s.Enrolled_Course<<endl;
    }
    else
    {
    	cout<<"Student not Found!"<<endl;
	}
    	break;
    }
    	case 6:
    	   {
	Teacher t;
	Department d;
	int n;
	cout<<"Enter teacher ID: ";
	cin>>n;
	if(n==t.id)
	{
	
		cout<<"Teacher ID: "<<t.id<<endl;
		cout<<"Teacher Name: "<<t.name<<endl;
		cout<<"Department ID: "<<d.Dept_ID<<endl;
		cout<<"Department Name: "<<d.Dept_name<<endl;
		cout<<"Head of Department: "<<d.HOD.name<<endl;
	}
    	break;
    }
	}
}
}
