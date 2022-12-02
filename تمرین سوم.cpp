#include<iostream>
using namespace std;
float all(float a, float b);
float bll (float s, float z);

int main(){
	float sho, p ,area; 
	cout<<"Enter shoa and add P: ";
	cin>>sho>> p;
	area = all(sho, p);
	cout<<"area = "<<area<<endl;

	float s, z, mohit;
	cout<<"Enter s and z baray hesab kardan mohit: "<<endl;
	cin>>s>>z;
	mohit = bll(s, z);
	cout<<"mohit kol = "<<mohit;
	
	return 0;
}

float all(float a, float b)
{
	float all;
	all = a * b;
	return all;
}

float bll (float s, float z)
{
	float bll;
	bll =s * z * 2;
	return bll;
}
