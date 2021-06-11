#include"max2.h"
#include<iostream>
#include<random>
using namespace std;

#define scale 1024
int main() {
	random_device rd;   // non-deterministic generator
	mt19937 gen(rd());  // to seed mersenne twister.
	uniform_int_distribution<> dist(1, 999999); // distribute results between 1 and 6 inclusive.
	
	int list[scale];
	cout << "list";
	for (int i = 0; i < scale; i++)
	{
		int temp = dist(gen);
		list[i] = temp;
		cout << temp<<",";
	}
	cout << "\n";
	int lo = 0, hi = scale;
	int x1, x2,l=0;
	max2_0(list, lo, hi, x1, x2);
	cout <<"max2_0:" << x1 << "," << x2 << "\n";
	max2_1(list, lo, hi, x1, x2);
	cout << "max2_1:" << x1 << "," << x2 << "\n";
	max2_2(list, lo, hi, x1, x2,l);
	cout << "max2_2:" << l << '\n' << "max2_2:" << x1 << "," << x2 << "\n";

}