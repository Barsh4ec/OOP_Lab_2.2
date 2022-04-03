#include <iostream>
#include "Integer.h"

using namespace std;

int main() 
{
	Integer a, b;
	cout << "a = ? "; cin >> a;
	cout << "b = ? "; cin >> b;
	cout << endl;
	cout << "a + b = " << a + b;
	Integer t = a - b;
	cout << "a - b = " << t;
	
	return 0;
}