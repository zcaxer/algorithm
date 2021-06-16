// fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

long fib(int n) {
    if (n <3)return n;
    return fib(n-1)+fib(n-2);
}

long fib2(int n) {
    long f=1, g=1;
    for (int i = 2; i < n; i++)
    {
        f = g + f;
        g = f - g;
    }
    return f;
}



int main()
{
    for (int i = 1; i < 100; i++)
    {
        std::cout <<"\nfib2("<<i<<") = " << fib2(i) ;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
