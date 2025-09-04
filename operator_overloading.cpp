#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Rectangle
{
	private:
		float h;
		float w;


	public:
	
	Rectangle(float he)
	{
		h=he;
	}
	Rectangle()
	{
		w=0;
	}
	void display()
	
	{
		cout<<"Height is:"<<h<<endl;
		cout<<"Width is :"<<w;
	}
};
---------------------------------------------------------------------------------------------------------------------------------------------------------------

int main ()               // main function from where execution starts
{
	Rectangle s(0);
	s.display();
   return 0; //return 0 to operating system
}
 
 //Overloading increment operator with user defined objects

 #include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Count
{
	private:
		int n;

	public:
	
	Count()      //constructor to initialize n to 0
	{
		n=0;
	}
	void show()  //function to display value of n
	{
		cout<<"n="<<n<<endl;
	}
	void operator ++()  //overloading increment operator
	{
		n=n+1;
	}
};

int main ()               // main function from where execution starts
{
	Count obj;
	obj.show();
	++obj;         //incrementing value of n by 1
	obj.show();
   return 0; //return 0 to operating system
}


---------------------------------------------------------------------------------------------------------------

//overloaded function returning an object after incrementing the data member

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Count
{
	private:
		int n;


	public:
	
	Count()
	{
		n=0;
	}
	void show()
	{
		cout<<"n="<<n<<endl;
	}
	Count operator ++()
	{
		Count temp;
		n=n+1;
		temp.n=n;
		return temp;
	}
};

int main ()               // main function from where execution starts
{
	Count x,y;
	x.show();
	y.show();
	y=++x;			//assigning the incremented value of x to y
	x.show();
	y.show();
	
   return 0; //return 0 to operating system
}


---------------------------------------------------------------------------------------------------------------

//Overloading postfix increment operator with user defined objects
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Count
{
	private:
		int n;


	public:
	
	Count()
	{
		n=0;
	}
	void show()
	{
		cout<<"n="<<n<<endl;
	}
	Count operator ++(int)  //postfix increment operator is overloaded by passing an int argument
	{
		Count temp;
		n=n+1;
		temp.n=n;
		return temp;
	}
};

int main ()               // main function from where execution starts
{
	Count x;
	x.show();
		x++;
	x.show();

	
   return 0; //return 0 to operating system
}


-------------------------------------------------------------------------------------------------------

// adding two objects using operator overloading

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Add
{
	private:
		int a,b;


	public:
	
	Add()
	{
		a=b=0;
	}
	void in()
	{
		cout<<"Enter a:";
		cin>>a;
		cout<<"Enter b:";
		cin>>b;
		
	}
	void show()
	{
		cout<<"a="<<a<<endl;
		cout<<"b="<<b<<endl;
	}
	Add operator +(Add p)
	{
		Add temp;
		temp.a=p.a+a;
		temp.b=p.b+b;
		return temp;
	}
};

int main ()               // main function from where execution starts
{
	Add x,y,z;
	x.in();
	y.in();
	z=x+y;
	x.show();
	y.show();
	z.show();
   return 0; //return 0 to operating system
}
-------------------------------------------------------------------------

//   concatenation of two strings using operator overloading

#include<iostream>     // include the iostream library (a preprocessor directive)
#include<string.h>
using namespace std;     // use the stanadard namespace
class String
{
	private:
		char str[50];


	public:
	
	String()
	{
		str[0]='\0';
	}
	void show()			//function to display string
	{
		cout<<str<<endl;
	}
	void in()		//function to input string
	{
		cout<<"Enter string :";
		gets(str);
	}
	String operator +(String p)  //overloading + operator to concatenate two strings
	{
		String temp;
		strcpy(temp.str,str);
		strcat(temp.str,p.str);
		return temp;
	}
};

int main ()               // main function from where execution starts
{
	String s1,s2,s3;
	s1.in();
	s2.in();
	cout<<"Value in s1 :";
	s1.show();
	cout<<"\nValue in s2 :";
	s2.show();
	cout<<"\nValue in s3 :";
	s3.show();
	cout<<"\nThe value after concatinating :";
	s3=s1+s2;
	s3.show();
	
   return 0; //return 0 to operating system
}


------------------------------------------------------------------------------------------------------
#include<iostream>     // include the iostream library (a preprocessor directive)
#include<string.h>
using namespace std;     // use the stanadard namespace
class String
{
	private:
		char str[50];


	public:
	
	String()
	{
		str[0]='\0';
	}
	void show()		//function to display string
	{
		cout<<str<<endl;
	}
	void in()		//function to input string
	{
		cout<<"Enter string :";
		gets(str);
	}
	int operator ==(String s) 	//overloading equality operator
	{
		if(strlen(s.str)==strlen(str))
		return 1;
		else 
		 return 0;
	}
};

int main ()               // main function from where execution starts
{
	String s1,s2;
	s1.in();
	s2.in();
	cout<<"Value in s1 :";
	s1.show();
	cout<<"\nValue in s2 :";
	s2.show();
	cout<<"\nValue in s3 :";
	if (s1==s2)       //comparing two strings
	cout<<"Both strings are equal";
	else
		cout<<"Both strings are equal";


	
	
   return 0; //return 0 to operating system
}

-------------------------------------------------------------------------------


