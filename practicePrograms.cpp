
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