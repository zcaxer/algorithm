#include"max2.h"
#include<iostream>
#include<random>
using namespace std;


int main() {
	random_device rd;   // non-deterministic generator
	mt19937 gen(rd());  // to seed mersenne twister.
	uniform_int_distribution<> dist(1, 99); // distribute results between 1 and 6 inclusive.
	
	int list[100];
	cout << "list";
	for (int i = 0; i < 100; i++)
	{
		int temp = dist(gen);
		list[i] = temp;
		cout << temp<<",";
	}
	cout << "\n";
	int lo = 0, hi = 100;
	int x1, x2;
	max2_0(list, lo, hi, x1, x2);
	cout <<"max2_0:" << x1 << "," << x2 << "\n";
	max2_1(list, lo, hi, x1, x2);
	cout << "max2_1:" << x1 << "," << x2 << "\n";
	max2_2(list, lo, hi, x1, x2);
	cout << "max2_2:" << x1 << "," << x2 << "\n";

}