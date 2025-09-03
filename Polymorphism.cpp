// polymorphism (pure virtual function,abstract class,virtual destructor,ptrs to access base class)

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Animal
{


	public:
//abstract class object of abstract will not instantiate
virtual void foo()=0;	
 virtual	void sound()   // late binding when exe file becomes  ther should be one pure function
	{
		cout<<"Animal sound";
	}
};
class Cat :public Animal{
void foo()
{
	cout<<"foo"<<endl;
}
 void sound ()
	{
		cout<<"Cats sound"<<endl;
	}
};
class dog :public Animal{
	void foo()
{
	cout<<"foo"<<endl;
}
	

 void sound ()
	{
		cout<<"dogs sound"<<endl;
	}

};

int main ()               // main function from where execution starts
{

	Animal *ptr;
	Cat cat;
	ptr=&cat;
	ptr->sound();
	
	dog dp;

	ptr=&dp;
	ptr->sound();
	Animal*p=new Cat();
	ptr->sound();  // destructor called automatically
	delete ptr;
	
	
	
   return 0; //return 0 to operating system
}
