
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

// program 7   basic program to demonstrate the use of constructor

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


// program 10      // write a program to demonstrate the use of copy constructor

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

      
program 11     // parameterized and unparameterized constructors

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

-----------------------------------------------------------------------------------
// program 12    wrrite a program in which you create a class TV with constructor and member function to change the values of its data members and display them and declare functions outside the class.


#include<iostream>
#include<cstring>
using namespace std;

class TV {
    private:
        char Brand_Name[20];
        char model[10];
        float retail_price;
    public:
        TV(char brand[], char mod[], float price);
        void display();
        void change(char brand[], char mod[], float price);
};

TV::TV(char brand[], char mod[], float price) {
    strcpy(Brand_Name, brand);
    strcpy(model, mod);
    retail_price = price;
}

void TV::change(char brand[], char mod[], float price) {
    strcpy(Brand_Name, brand);
    strcpy(model, mod);
    retail_price = price;
}

void TV::display() {
    cout << "\nBrand is :" << Brand_Name;
    cout << "\nModel is :" << model;
    cout << "\nPrice is :" << retail_price;
}

int main() {
    TV test("Honda", "hdtv", 2505000);
    test.display();
    test.change("Tshiba", "LEd", 303333);
    test.display();
    return 0;
}
-----------------------------------------------------------------------------------

 
// program 13    Write a program to demonstrate the use of copy constructor

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class student
{
	private:
		int age;
		int roll;
		
	public:
	    student(int a , int r)
		{
			age=a;
			roll=r;
			
			}
			
			student(const student &s)
		{
		 this->	age=s.age;
		this->	roll=s.roll;
			
			}	
			
			void display()
			{
				cout<<"\nAge is :"<<age;
			cout<<"\nroll is :"<<roll;
			}
};
int main ()               // main function from where execution starts
{
	student s1(24,1);
	student s2(s1);
	s1.display();
		s2.display();
   return 0; //return 0 to operating system
}


---------------------------------------------------------------------------------------------------------------

// program 14    create a class with constructor and destructor and create an object of that class on heap


#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }

    // Function to display data
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    // Creating object on heap
    Student* s1 = new Student("Ali", 20);

    // Using the object
    s1->display();

    // Deleting object to free memory
    delete s1;

    return 0;
}
---------------------------------------------------------------------------------------------------------------


// program 15     describe use of pointers as a member of a class  shallow copy and deep copy

shallow copy  is an issue that created when we allow compiler to create the copy constructor itself and deep copy is the solution to this issue. In shallow copy, the pointer in the copied object points to the same memory location as the original object, which can lead to issues like double deletion. In deep copy, a new memory location is allocated for the copied object, ensuring that each object has its own separate memory.


#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class car
{
   private:	
     int  *price;
      
    public:
    	car( int value)
    	{
    		price = new int;
    		*price=value;
    		cout<<"\nPrice is "<<*price;
    		
    		cout<<"\nH i am constructor ";
		}
		car(const car &obj)
		{
			price = new int;
			*price=*(obj.price);
		}
		~ car()
		{
			delete price;
			cout<<"\nHi";
		}
};
int main ()               // main function from where execution starts
{
	car s1(100);
	car s2(s1);
   return 0; //return 0 to operating system
}
-------------------------------------------------------------------------------------------------------

// program 16

#include<iostream>
using namespace std;
class Teacher {
    private:
        int id;
        string name;
        int *age;
        double salary;
    public:
      Teacher(int i, string n, int a, double s) 
      {
      	id=i;
      	name=n;
      	age=new int;
      	*age=a;
      	salary=s;
	  }
	        
 // Copy constructor
        Teacher(const Teacher &t) {
            id = t.id;
            name = t.name;
            age=new int;
            *age=*(t.age);
            salary = t.salary;
            cout << "Copy constructor called" << endl;
        }
        void setid(int id) {
            this->id = id;
        }

        double getSalary() const {
            return salary;
        }


        // Destructor
        ~Teacher() {
        	delete age;
            cout << "Destructor called for " << name << endl;
        }

        display() const {
            cout << "ID: " << id << ", Name: " << name << ", Age: " << *age << ", Salary: " << salary << endl;
        }
    };

int main()
{
    Teacher t1(1, "John Doe", 35, 50000.0);
    Teacher t2(t1); // Copy constructor

    t2.setid(2); // Change ID of copied object
    cout<<"Record of 1st teacher: "<<endl;
    t1.display(); // Display original object
    cout<<"Record of 2nd teacher: "<<endl;
    t2.display(); // Display copied object

    // to compare the teaher's salary and print the largest one
    if (t1.getSalary() > t2.getSalary()) {
        cout << "Teacher 1 has a higher salary: " << t1.getSalary() << endl;
    } else {
        cout << "Teacher 2 has a higher salary: " << t2.getSalary() << endl;
    }

}



------------------------------------------------------------------------------------------------------------------------


// program 17    describe the returning of objects

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Travel
{
	private:
		int km;
		int hrs;
	
	public:
	 	Travel()
		 {
		 	km=0;
		 	hrs=0;
			 }	
		
		get()
		{
			cout<<"Enter kilometers :"<<km;
			cin>>km;
			cout<<"Enter hours :"<<hrs;
			cin>>hrs;
			}	
		show()
		{
			cout<<"Kilometers traveled :"<<km<<endl;
			cout<<"hours spent :"<<hrs<<endl;
			}	
		 Travel add( Travel p)
		{
			Travel t;
			t.km=km+p.km;
			t.hrs=hrs+p.km;
			return t;
			}	
	};
int main ()               // main function from where execution starts
{
	Travel t1,t2,r;
	
	
	t1.get();
	t1.show();
	t2.get();
	t2.show();
	
	r=t1.add(t2);
	cout<<"Total travelling is :"<<endl;
	r.show();
   return 0; //return 0 to operating system
}
------------------------------------------------------------------------------------------------------------------------


// program 18  use of character pointer

#include <iostream>
#include <cstring> // strcpy ??? strlen 
using namespace std;

class Book {
private:
    char* name; // Book name  character pointer

public:
    // Constructor
    Book() {
        name =" NULL";
    }

    // Setter function
    void setName(const char* newName) {
       

        name = new char[strlen(newName) + 1];
        strcpy(name, newName);
    }

    // Getter function
    const char* getname() {
        return name;
    }

    // Display function
    void display() {
        cout << "Book Name: " << name << endl;
    }
    Book(const Book &b)
    {
    	name=b.name;
	}

    // Destructor
    ~Book() {
        delete name; // Memory free 
    }
};

// Main function
int main() {
    Book b1; 
    
    b1.setName("C++ Basics");
    Book b2(b1);
    b1.display(); 
b2.display();
    return 0;
}




------------------------------------------------------------------------------------------------------------------------

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class  kitchen
{
	private:
		int spoons;
		
	public:
	
	void in()
	{
		cout<<"Enter no of spoons:";
		cin>>spoons;
		}
		
	void out()
	{
		cout<<"Number of spoons are :"<<spoons;
			}		
};
int main ()               // main function from where execution starts
{
	kitchen k1;
	k1.in();
	k1.out();
   return 0; //return 0 to operating 
   
}




   #include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Marks
{
	private:
		int marks1;		
		int marks2;
		int marks3;	
	public:
		void in()
		{
			cout<<"Enter marks of three subjects :";
			cin>>marks1>>marks2>>marks3;
		}
		
		int sum()
		{
			int sum=marks1+marks2+marks3;
			return sum;
		}
		
		float avg()
		{
			float average=(marks1+marks2+marks3)/3.0;
			return average;
		}
};

int main ()               // main function from where execution starts
{
	Marks m;
	m.in();
cout<<"Sum is :"<<m.sum();
cout<<"\nAverage is :"<<m.avg();
   return 0; //return 0 to operating system
}



#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class  circle
{
	private:
		float r;


	public:
	void getradius(float a)
	{
		r=a;
	}
	
	void radius()
	{
		float area=3.14*r*r;
		cout<<"Area is :"<<area;
	}
	
	void circum()
	{
		float circum=2*3.14*r;
		cout<<"\nCircumference is :"<<circum;
	}
};

int main ()               // main function from where execution starts
{
	circle c;
	c.getradius(4.3);
	c.radius();
	c.circum();
   return 0; //return 0 to operating system
}




#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Book
{
	private:
		int bookid,pages;
		float price;


	public:
	
	void get()
	{
		cout<<"Enter book id : ";
		cin>>bookid;
		cout<<"Enter book pages : ";
		cin>>pages;
		cout<<"Enter book price : ";
		cin>>price;

	}
	void show()
	{
		cout<<"Book id is:"<<bookid<<endl;
		cout<<"Book  pages is:"<<pages<<endl;
		cout<<"Book price is:"<<price<<endl;

	}
	
	void set(int i,int p,float pr)
	{
		bookid=i;
		pages=p;
		price=pr;
	}
	
	float getprice()
	{
		return price;
	}
};

int main ()               // main function from where execution starts
{
	Book b1,b2;
	b1.get();
	b2.set(20,34,500.0);
	
	cout<<"The detail of most costly book is:\n";
	if(b1.getprice()>b2.getprice())
	 b1.show();
	 else
	 b2.show();
   return 0; //return 0 to operating system
}
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class array
{
	private:
		int arr[5];


	public:
		void fill();
		void display();
		void max();
		int min();
};
	
	void array::fill()
	{
		cout<<"Enter numbers in  array :";
		
		for (int i=0;i<5;i++)
		cin>>arr[i];
	}
	
	void array::display ()
	{
		cout<<"The numbers in array are :";
		for (int i=0;i<5;i++)
		cout<<arr[i]<<"\t";
	}
	void array:: max()
	{
		int max=0;
		arr[0]=max;
		for (int i=0;i<5;i++)
		if(arr[i]>max)
		max=arr[i];
		cout<<"\nMax number is :"<<max;
	}
	int array:: min()
	{
		int min=0;
		arr[0]=min;
			for (int i=0;i<5;i++)
		if(arr[i]<min)
		min=arr[i];
		return min;
	}


int main ()               // main function from where execution starts
{
	array a;
	
	a.fill();
	a.max();
	cout<<"\n";
	a.display();
	cout<<"\nThe min value is :"<<a.min();
   return 0; //return 0 to operating system
}




#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class  cons
{
	private:
           int a;
           int b;

	public:
	
	cons()
	{
		a=100;
		b=100;
	}
	
	void avg()
	{
		int average= (a+b)/2.0;
		cout<<"\nAverage is :"<<average;
	}
};

int main ()               // main function from where execution starts
{
	cons c1;
	c1.avg();
	cons c2;
	c2.avg();

   cons *s=  new  cons();
   s->avg();
    delete s;
   
	
	
   return 0; //return 0 to operating system
}



#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class student
{
	private:
		int marks;
		char grade;


	public:
	student(int m,char g)
	{
		marks=m;
		grade=g;
	}
	// default
	student()
	{
	marks=0;
	grade=' ';	
	}
	
	void display()
	{
		cout<<"Marks  are :"<<marks<<endl;
		cout<<"Grade is :"<<grade<<endl;
	}
};



int main ()               // main function from where execution starts
{
	student s1(100,'A');
	s1.display();
	student s2;
	s2.display();
   return 0; //return 0 to operating system
}



#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Book 
{
	private:
		int pages;
		float price;
		string title;


	public:
	
	void get()
	{
		cout<<"Entr pages , price and title of book :";
		cin>>pages>>price>>title;
	}
	void show()
	{
		cout<<"The pages ,price  and title of book is : "<<pages<<":"<<price<<":"<<title<<endl;
	}
};

int main ()               // main function from where execution starts
{
	Book b1,b2;
	
	b1.get();
	b1.show();
	b2.get();
	b2.show();
	Book b3(b2);
    b3.show();
    
   return 0; //return 0 to operating system
}



#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class  student
{
	private:
		int roll;
		char grade;
		float *cgpa;
	public:	
	student(int r,char g,float f)
	{
		roll=r;
		grade=g;
		cgpa=new float;
		*cgpa=f;	
	}
	student(student &s)
	{
		roll=s.roll;
		grade=s.grade;
		cgpa=new float;
		*cgpa=*s.cgpa;
	}
	void display()
	{
		cout<<"Roll is :"<<roll<<endl;
		cout<<"Grade is :"<<grade<<endl;
		cout<<"cgpa :"<<*cgpa<<endl;
	}
	~student()
	{
		delete cgpa;
		cout<<"V"<<endl;
	}
};
int main ()               // main function from where execution starts
{
   student s1(1,'a',4.0);
   s1.display();
   student s2(s1);
  s2.display();

   	
   return 0; //return 0 to operating system
}



#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class gadget
{
	private:
		int price;


	public:
	
     
	gadget(int p):price( p)
	{
		
	}
	int getprice() const
	{
		return price;
	}
	void display() const
	{
		cout<<"price is :"<<price<<endl;
	}
};

int main ()               // main function from where execution starts
{ 
const gadget g1(100);
     g1.display();
	
	cout<<"Price is :"<<g1.getprice();
   return 0; //return 0 to operating system
}

--------------------------------------------------------------------------------------------



// program 19    write a program to demonstrate the use of association between classes one to one relationship no dependent
one object interacts with another

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Student
{
	private:
		string name;
		
	public:
	
       Student (string n):name(n)
	{
	}
	string getName()
	{
		return name;
	}
};
class Teacher
{
	private:
 	 string name;
 	 public:

	Teacher(string n):name(n)
	{
	}
	void teaches(Student s)
	{
		cout<<name<<" teaches "<<s.getName();
	}
};

int main ()               // main function from where execution starts
{
	Student s1("Ali");
	Teacher t1("Ahmad");
	
	t1.teaches(s1);
   return 0; //return 0 to operating system
}







---------------------------------------------------------------------

// program 20    write a program to demonstrate the use of composition between classes one to one relationship dependent
	one object is part of another object
	permant dependency
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Engine
{
	
	public:
	
	void start()
	{
		cout<<"Engine is started ."<<endl;
	}
};
class Car
{
     Engine engine;
     public:
     	
			void drive()
	{
		engine.start();
		cout<<"Car is moving"<<endl;
	}
};

int main ()               // main function from where execution starts
{
	Car c;
	c.drive();
   return 0; //return 0 to operating system
}


-----------------------------------------------------------------------------------------------------------------------------

// program 21    write a program to demonstrate the use of aggregation between classes one to one relationship dependent
	one object is part of another object
	temporary dependency

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class student
{
	public:
		string name;
	
	student (string n):name(n)
	{
	}
};
class Department
{
	private:
		student *st;
	public:	

	Department(student* s1)
	{
		st=s1;
		
	}
	void display()
	{
		cout<<st->name<<" is in department";
	}
};

int main ()               // main function from where execution starts
{
	student s2("Ali");
	Department cs(&s2);
	cs.display();
   return 0; //return 0 to operating system
}




-----------------------------------------------------------------------------------------------

// program 22    write a program to demonstrate the use of friend function

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class box
{
	private:
		float length;


	public:
	
	box(float l):length(l)
	{
	}
	friend void display(box b);
};
void display( box b)
{
	cout<<b.length;
}

int main ()               // main function from where execution starts
{
	box b1(5.0);
	display(b1);
   return 0; //return 0 to operating system
}
----