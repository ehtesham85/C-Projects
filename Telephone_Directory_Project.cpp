#include<iostream>
using namespace std;
class MainMenu
{
private:
   string Id;
   string Name;
   string Address;
   int PhoneNumber;
   int Option;
public:
   MainMenu()
   {
     Id="N/A";
	 Name="N/A";
	 Address="N/A";
	 PhoneNumber=0;	
   }	
   void ShowMainMenu()
   {
   	cout<<"**********************************************"<<endl;
	cout<<"\tTelephone Directory: Main Menu"<<endl;
	cout<<"**********************************************"<<endl;
	cout<<"1. Insert a new student"<<endl;
   	 cout<<"2. Update an existing student"<<endl;
   	 cout<<"3. Delete a record"<<endl;
   	 cout<<"4. Search for a student"<<endl;
   	 cout<<"5. List Directory"<<endl;
   }
   void SelectOption()
   {
   	 cout<<"Select Option: ";
   	 cin>>Option;
   }
   void SubMenu()
   {
       int i=2;
	   while(i!=0)
       {
   	 switch(Option)
   	 {
   	   case 1:
   	   	{
   	   	cout<<"**********************************************"<<endl;
	    cout<<"\tTelephone Directory: Main Menu"<<endl;
	    cout<<"**********************************************"<<endl;
	    cout<<endl;
	    cin.ignore();
	    cout<<"Enter ID: ";
	   
	    getline(cin, Id);
	    
	    cout<<"Enter Name: ";
	   
	    getline(cin, Name);
	    
	    cout<<"Enter Address: ";
	   
	    getline(cin, Address);
	    
	    cout<<"Enter Phone Number: ";
	    cin>>PhoneNumber;
	    
	    int choice;
	    cout<<"Enter 1 for save and 0 for not save: ";
	    cin>>choice;
	    switch(choice)
	    {
	        case 0:
				{
				    cout<<"Not saved"<<endl;
				    break;
				}
	    	case 1:
	    		{
	    				cout<<"Saved successfully."<<endl;
	    				break;
				}
			
		}
		char Record;
		cout<<"Want to insert another record?[y/n]: ";
		cin>>Record;
		if(Record=='n')
		{
		   ShowMainMenu();
		   SelectOption();
		   SubMenu();
		}
		else
		{
			SubMenu();
		}
		
	    }
	    break;
	    case 2:
	    	{
	    string Case2Id;
	    cout<<"**********************************************"<<endl;
	    cout<<"\tTelephone Directory: Main Menu"<<endl;
	    cout<<"**********************************************"<<endl;
	    cout<<"Enter ID: ";
	    cin.ignore();
		getline(cin, Case2Id);
		if(Case2Id==Id)
		{
		  cout<<"Current Information is: "<<endl;
		  cout<<"ID: "<<Id<<endl;
		  cout<<"Name: "<<Name<<endl;
		  cout<<"Address: "<<Address<<endl;
		  cout<<"Phone: "<<PhoneNumber<<endl;	
		}
		char choice2;
		cout<<"Do you want to update[y/n]: ";
		cin>>choice2;
		if(choice2='y')
		{
			cout<<"Enter New Information: "<<endl;
			cout<<"Enter ID: ";
	        cin.ignore();
	        getline(cin, Id);
	    
	        cout<<"Enter Name: ";
	        cin.ignore();
	        getline(cin, Name);
	    
	        cout<<"Enter Address: ";
	        cin.ignore();
	        getline(cin, Address);
	    
	        cout<<"Enter Phone Number: ";
	        cin>>PhoneNumber;
	        cout<<endl;
	        cout<<"Record Updated Successfully"<<endl;
	        char choice2;
			cout<<"Do you want to update another info[y/n]: ";
	        cin>>choice2;
	        if(choice2='n')
	        {
	            ShowMainMenu();
	            SelectOption();
	        	SubMenu();
			}
			else if(choice2='y')
			{
				ShowMainMenu();
				 SelectOption();
	        	SubMenu();
			}
		}
		else
		{
			ShowMainMenu();
		SelectOption();
	        	SubMenu();
		}
		  break;
		   }
		   
		   case 3:
		   	{ 
			string Case3Id;
			cin.ignore();
		   	  cout<<"Enter ID: ";
			  getline(cin, Case3Id);
			  if(Case3Id==Id)
			  {
			  	
			  cout<<"Current Information is: "<<endl;
		  cout<<"ID: "<<Id<<endl;
		  cout<<"Name: "<<Name<<endl;
		  cout<<"Address: "<<Address<<endl;
		  cout<<"Phone: "<<PhoneNumber<<endl;
	}
		  char Case3Choice;
		  cout<<"Do you want to Delete the record[y/n]: ";
		  cin>>Case3Choice;
		  
		  if(Case3Choice='y')
		  {
		     
		     Id="N/A";
	         Name="N/A";
	         Address="N/A";
	         PhoneNumber=0;
	         cout<<"Record Deleted Successfully."<<endl;
		   		
			}
			else if(Case3Choice=='n')
			{
				ShowMainMenu();
				SelectOption();
				SubMenu();
			}
			
			char Case3Choice2;
			cout<<"Do you want to delete another record[y/n]: ";
			cin>>Case3Choice2;
			
			if(Case3Choice2=='y')
			{
				ShowMainMenu();
				SelectOption();
				SubMenu();
			}
			else if(Case3Choice2='n')
			{
				ShowMainMenu();
				SelectOption();
				SubMenu();
			}
			
			break;
			
	 }
	 
	 case 4:
	 	{
	 	  
		cout<<"**********************************************"<<endl;
	    cout<<"\tTelephone Directory: Main Menu"<<endl;
	    cout<<"**********************************************"<<endl;
	    string Case4Id;
		cout<<"Enter ID: ";
		cin.ignore();
		getline(cin, Case4Id);
		if(Case4Id==Id)
		{
		  cout<<"Record Found Successfully"<<endl;
		  cout<<"ID: "<<Id<<endl;
		  cout<<"Name: "<<Name<<endl;
		  cout<<"Address: "<<Address<<endl;
		  cout<<"Phone: "<<PhoneNumber<<endl;
		  
		}
		else
		{
			cout<<"Record Not found"<<endl;
		}
		char Case4Choice;
		cout<<"Do you want to search another record[y/n]: ";
		cin>>Case4Choice;
		if(Case4Choice=='y')
		{
		  ShowMainMenu();
		  SelectOption();
		  SubMenu();
		  	
		}	
		else if(Case4Choice='n')
		{
			ShowMainMenu();
			SelectOption();
		  SubMenu();
			
		}
	    
		   	break;
		}
		
        case 5:
		{
		cout<<"**********************************************"<<endl;
	    cout<<"\tTelephone Directory: Main Menu"<<endl;
	    cout<<"**********************************************"<<endl;
		cout<<"Showing All Members"<<endl;
	    cout<<"Record 1:"<<endl;
	    cout<<"ID: "<<Id<<endl;
		  cout<<"Name: "<<Name<<endl;
		  cout<<"Address: "<<Address<<endl;
		  cout<<"Phone: "<<PhoneNumber<<endl;
		char Case5Choice;
		cout<<"Press m for Main Menu: ";
		cin>>Case5Choice;
		if(Case5Choice=='m')
		{
			ShowMainMenu();
			SelectOption();
			SubMenu();
		}
		 break; 	
		}		

   	 }
}
}
};
int main()
{
	MainMenu a;
	a.ShowMainMenu();
	a.SelectOption();
	a.SubMenu();
}