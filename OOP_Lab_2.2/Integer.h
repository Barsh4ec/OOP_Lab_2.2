#pragma once
#include <string>
using namespace std;
class Integer
{
private:
	int x;
public:
	int GetX() const { return x; }
	void SetX(int value) { x = value; }

	Integer();
	Integer(int);
	Integer(const Integer&);

	friend Integer operator + (Integer&, Integer&);
	Integer& operator - (Integer&);	

	friend ostream& operator << (ostream&, const Integer&);
	friend istream& operator >> (istream&, Integer&);
};

