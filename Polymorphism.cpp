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

----------------------------------------------------------------


#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
class Vehicle
{
	protected:
		int vehicleID;
		string brand;
		int days;


	public:
		virtual void rentalCost(int d)=0;	
	  virtual	void rentalcost()=0;
	
};
class Bike : public Vehicle
{protected:
		int CostPerHour=200;
	     
	public:
		 void rentalCost(int d)
		{
			days=d;
		}	
	int rentalcost()
	{
		return days * CostPerHour;
	}
};




class Car :protected Vehicle
{
	protected:
		int costPerDay=300;


	public:
		 void rentalCost(int d);
		 {
		 	days=d;
		 }
	
	int rental cost()
	{
		return days*costPerDay;
	}

};

int main ()               // main function from where execution starts
{
	int da;

	vehicle *ptr[0]=new Bike;
	Vehicle *ptr[1]=new Car;
	
	
	for(int i=0 ;i<=1;i++)
	{
		cout<<"Enter rental days :";
		cin>>da;
		ptr[i]->rentalCost(da);
	cout<<"Rental Cost is :"<<ptr[i]->rentalcost();
	}
	delete ptr[0];
	delete ptr[1];
	
   return 0; //return 0 to operating system
}