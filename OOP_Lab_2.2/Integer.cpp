#include <iostream>
#include "Integer.h"

using namespace std;

Integer::Integer() {
	x = 0;
}
Integer::Integer(int y)
{
	x = y;
}
Integer::Integer(const Integer& r)
{
	x = r.x;
}
Integer operator + (Integer& a, Integer& b)
{
	Integer t(0);
	t.x = a.x + b.x;
	return t;
}
Integer& Integer::operator - (Integer& a)
{
	Integer t(0);
	t.x = this->GetX() - a.x;
	return t;
}
ostream& operator << (ostream& out, const Integer& a)
{
	out << a.x << endl;
	return out;
}
istream& operator >> (istream& in, Integer& a)
{
	in >> a.x;
	return in;
}
