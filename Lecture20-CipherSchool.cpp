#include<iostream>
using namespace std;

int main()
{
	long long int a;
	int b;
	float c;
	cout<<"The size of int is:"<<sizeof(int);
	cout<<"The size of long long int: "<<sizeof(a);
	cout<<"The size of b: "<<sizeof(b);
	
	cout<<"The address of c is"<<&c<<"The address of b is:"<<&b;
	return 0;
}
