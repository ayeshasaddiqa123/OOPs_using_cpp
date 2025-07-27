
// program 1

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
	class num
	{
		private :     // access specifier
			
			int variable;
		
		public:	      // access specifier
			
			void input()      // function to take input from user
			{
			cout <<	"Enter value in integer type variable :";
				cin>>variable;
			}
			
			void output()        // function to display output
			
			{
			    cout<<"The value stored in variable is :"<< variable;
			}
			
	};
int main ()               // main function from where execution starts

{
	num display;
	
	display.input();      // call input function to take input from user
	display.output();      // call output function to display output

   return 0; //return 0 to operating system
}

-----------------------------------------------------------------------------



// program 2

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace

      class marks      // class definition
      {
      	     private:       // access specifier
      	     	
      	     	int sub1;
      	     	int sub2;
      	     	int sub3;
      	     	
      	     public:     // access specifier
      	     	
      	     	void input()         // function to take input from user
	  	     	{
	  	     		cout<<"Enter marks of three subjects : ";
	  	     		cin>>sub1>>sub2>>sub3;
	  	     	}
      	     	
				   
				 int sum( )     // function to calculate sum of three subjects
				 {
				 	return sub1+sub2+sub3;
				   }
				   
				   float avg( )     // function to calculate average of three subjects
				   {
		            return (sub1+sub2+sub3)/3.0;

					 }  
	  };
int main ()               // main function from where execution starts
{
	marks m;            // create an object of class marks
	 m.input();
	 cout<<"The sum of these numbers is : "<<m.sum( )<<endl;
	 cout<<"The average is : "<<m.avg( )<<endl;
	 
	
   return 0; //return 0 to operating system
}




----------------------------------------------------------------------------------



// program 3

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace

      class circle        // class definition
      {
      	     private:       // access specifier
      	     	
      	     	float radius;
      	     	
      	     public:         // access specifier
      	     	 
      	     	void input(float r)
      	     	{
      	     		radius=r;
				   }
				   
				void area ()     // function to calculate area of circle
				 {
				 	cout<<"The area of circle is :"<<3.14*radius*radius<<endl;
				   }
				   
				void circum( )     // function to calculate circumference of circle
				   {
		             cout<<"The circumferrence of circle is :"<<2*3.14*radius;

					 }  
	  };
int main ()               // main function from where execution starts
{
     circle  c;
     int r;
     
     cout<<"Enter radius :";      // prompt user to enter radius
     cin>>r;
	 c.input(r);
	 
	c. area ();
	c. circum( );
	 
	 
   return 0; //return 0 to operating system
}
----------------------------------------------------------------------------------



// program 4

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace

class book         // class declaration
{
	  private:    //access specifier
	  	j
	  	int book_id;
	  	int pages;
	  	float book_price;
	  	
	  public:   //  access specifier
	  	
	  	void get()
	  	{
	  		cout<<"Enter book id :";
	  		cin>>book_id;
	  		cout<<"Enter book pages :";
	  		cin>>pages;
	  		cout<<"Enter book price :";
	  		cin>>book_price;
		  }
		  
		  
		 void show()
		 {
		 	cout<<" book id is:"<<book_id<<endl;
		 	cout<<" book pages are:"<<pages<<endl;
		 	cout<<" book price is:"<<book_price<<endl;

         }
         
        void set(int id,int pg,float pr)
		{
			book_id=id;
			pages=pg;
			book_price=pr;
		 } 
		 
		 
		 float get_price()
		 {
		 	return  book_price;
		 }
         
};
int main ()               // main function from where execution starts
{
	book b1,b2;
	b1.get();
	b2.set(2,320,120.45);
	cout<<"\n The most expensive book is:";
	if(b1.get_price()>b2.get_price())
	  b1.show();
	  
	 else
	  b2.show(); 
	
   return 0; //return 0 to operating system
}


---------------------------------------------------------------------------------


// program 5

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class student 
{
	private:    // access specifier
	    int rollno;
	  	char  grade;
	  	string name;
	  	
	  	
	public:         // access specifier
	  // use setters
	      void setrollno(int n)
	      {
	      	rollno=n;
		  }
		  
		  void setgrade( char c)
		  {
		  	grade=c;
		  }
		  
	      void setname(string a) 
		  {
		  	
		  	name=a;
		  }	
			
			
			void display() // function to display student details
			{
				cout<<"Roll no is :"<<rollno<<endl;
				cout<<"Grade is :"<<grade<<endl;
				cout<<"Name is :"<<name<<endl;
					  }	  	
};
int main ()               // main function from where execution starts
{
	student s;
   s.setname("Ayesha");
   s.setrollno(01);
   s.setgrade('A');
   s.display();
	
   return 0; //return 0 to operating system
}

------------------------------------------------------------------------

// program 6

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class hello 
{
	private:
		int n;
		
	public:
		hello()        // constructor
		{
			cout<<"object created......"<<endl;
			}
			
	void setn(int n)
		{
		this ->	n=n;    // this pointer is the sddress of current object
		}
		int getn()
		{
			return n;
		}
				
};

int main ()               // main function from where execution starts
{
	hello x,y,z;
	x.setn(100);
	cout<<"The value of n is :"<<x.getn();
	
	
	
	
   return 0; //return 0 to operating system
}
---------------------------------------------------

// program 7

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class num 
{
	private:
		int n1;
		int n2;
		
	public:
		num()
		{
		n1=n2=10;
			}
			
	void display()
	
		{
			cout<<"The value of n1 is :"<<n1;
			cout<<"\nThe value of n2 is :"<<n2;
			cout<<"\nAverage is :"<<(n1+n2)/2;
		}
				
};

int main ()               // main function from where execution starts
{
	 num n;
	 n.display();	
   return 0; //return 0 to operating system
}



------------------------------------------------------------------------


// program 8

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
	class book 
	{
	
		int pages ;
		int price ;
		string title;
		
	public:
	  
	   void get()
	   {
	   	cout<<"Enter pages :";
	   	cin>>pages;
	   	cout<<"Enter price :";
	   	cin>>price;
	   	cout<<"Enter title :";
	   	cin>>title;
		   }
		   
		   
		   void show()
		   {
		   	cout<<"Pages are :"<<pages<<endl;;
		   	cout<<"Price is :"<<price<<endl;
		   	cout<<"Title is :"<<title<<endl;
			   }
		};
		
		
		
int main ()               // main function from where execution starts
{
	book b1;
	b1.get();
	book b2=b1;
	book b3=b1;
	 
	 cout<<"\nThe detail of book 1 is :"<<endl;
	 b1.show();
	  cout<<"\nThe detail of book 2 is :"<<endl;
	  b2.show();
	   cout<<"\nThe detail of book 3 is :"<<endl;
	b3.show();
   return 0; //return 0 to operating system
}





------------------------------------------------------------------------


// program 9

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
	class student 
	{
	
		int marks;
		char grade;
		
	public:
		
		student (int m, char g)
		{
			marks = m;
			grade = g;
		}
	  
	   void show()
	   {
	   	cout<<"Marks :"<<marks<<endl;
	   	
	   	cout<<"Grade is  :"<<grade<<endl;
	   	
		   }
		   

		};
		
		
		
int main ()               // main function from where execution starts
{
	student s1(23,'A'),s2(25,'A');
	 
	 cout<<"\nThe detail of student is :"<<endl;
	 s1.show();
	  cout<<"\nThe detail of student 2 is :"<<endl;
	  s2.show();
	
   return 0; //return 0 to operating system
}




------------------------------------------------------------------------


// program 10

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Person
{
	string name;
	int age;
	
public:
	void setValues(string n, int a)
	{
		name=n;
		age=a;
	}
	
	void copied(const Person &p)
	{
		name=p.name;
		age=p.age;
	}
	
    void display()
	{
		cout<<"\nName is :"<<name;
		cout<<"\nAge is :"<<age;
		}
			
};
int main ()               // main function from where execution starts
{
	Person p1,p2;
	p1.setValues("ali",23);
	
	cout<<"Before passing object:";
	p1.display();
	p2.display();
	
	p2.copied(p1);
	
	cout<<"After passing object :";
	  p1.display();
	  p2.display();
	
	
	
	
	
   return 0; //return 0 to operating system
}




----------------------------------------


program 11

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Person
{
	private:
		int age;
		string name;
	
	public:
		 Person()
		{
			age=20;
			name="Ayesha";
		}
		
		 Person(int a, string n)
		{
			age=a;
			name=n;
		}
		
		
	void display()
	{
		cout<<"\n The age is :"<<age;
		cout<<"\n The name is :"<<name;
		}	
};
int main ()               // main function from where execution starts
{
	Person p1;
 Person	p2(24,"ali");
	p1.display();
	p2.display();
   return 0; //return 0 to operating system
}

