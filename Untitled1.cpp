#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Vehicle
{
	
	string type;
	//enum avail{yes,no
	//}av;
	string av;
	string name;
	public:
		void add();
		void show();
};
class Car: public Vehicle
{
	public:
		string name;
		
};
void Vehicle::add(vector<Vehicle> &arr)
{
	cout<<"Enter the type of car";
	cin>>type;
	arr.push_back(type);
	cout<<"Enter the status of avail";
	cin>>av;
	cout<<"Enter the name of the car";
	cin>>name;
	cout<<"Added successfully";
}
void Vehicle::show(vector<Vehicle> &arr)
{
	cout<<type;
	cout<<av;
	cout<<name;
	
}
int main()
{
	cout<<"Hello World"<<endl;
	int x;
	x=8;
	cout<<x;
	vector<int> arr(x,0);
	for(int i=0;i<arr.size();i++)
	cout<<arr[i]<<endl;
	Car c;
	vector<Vehicle> arr[x];
	
	c.add(arr);
	c.show(arr);
	
}
