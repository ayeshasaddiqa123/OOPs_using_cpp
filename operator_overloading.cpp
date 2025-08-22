 
 //Overloading increment operator with user defined objects

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
	void operator ++()
	{
		n=n+1;
	}
};

int main ()               // main function from where execution starts
{
	Count obj;
	obj.show();
	++obj;
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
	y=++x;
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
	Count operator ++(int)
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
