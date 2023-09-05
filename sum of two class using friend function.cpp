//WAP to make two class with single private datamember in each add these datamember and show the sum using necessary function
#include<iostream>
using namespace std;
class Y;
class X {
	private:
		int a;
	public:
		void getdata()
		{
			cout<<"enter the value of a";
			cin>>a;
		}
		void showresult()
		{
			cout<<"the value of a="<<a;
		}
		friend void sum(X x,Y y);
};

class Y {
	private:
		int b;
	public:
		void getdata()
		{
			cout<<"enter the value of b";
			cin>>b;
		}
		void showresult()
		{
			cout<<"the value of b="<<b;
		}
		friend void sum(X x,Y y);
};
void sum(X x,Y y)
{
	int sum=0;
	sum=x.a+y.b;
	cout<<"sum is" <<sum;
}
int main()
{
	X obj1;
	Y obj2;
	obj1.getdata();
	obj2.getdata();
	obj1.showresult();
	obj2.showresult();
	sum(obj1,obj2);
	return 0;
}

