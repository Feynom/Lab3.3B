#include "Triad.h"

void Triad::SetFirst(double first) { this->first = first; }
void Triad::SetSecond(double second) { this->second = second; }
void Triad::SetThird(double third) { this->third = third; }

double Triad::GetFirst() const { return first; }
double Triad::GetSecond() const { return second; }
double Triad::GetThird() const { return third; }

Triad::Triad() { SetFirst(0); SetSecond(0); SetThird(0); }
Triad::Triad(double first = 0, double second = 0, double third = 0) 
{ 
	SetFirst(first); SetSecond(second); SetThird(third); 
}
Triad::Triad(Triad& A)
{
	SetFirst(A.GetFirst());
	SetSecond(A.GetSecond());
	SetThird(A.GetThird());
}

bool operator > (Triad& A, Triad& B)
{
	return ((A.GetFirst() > B.GetFirst()) || (A.GetFirst() == B.GetFirst() && A.GetSecond() > B.GetSecond()) ||
		(A.GetFirst() == B.GetFirst() && A.GetSecond() == B.GetSecond() && A.GetThird() > B.GetThird()));
}
bool operator < (Triad& A, Triad& B) 
{ 
	return ((A.GetFirst() < B.GetFirst()) || (A.GetFirst() == B.GetFirst() && A.GetSecond() < B.GetSecond()) ||
		(A.GetFirst() == B.GetFirst() && A.GetSecond() == B.GetSecond() && A.GetThird() < B.GetThird()));
}
bool operator == (Triad& A, Triad& B)
{
	return (A.GetFirst() == B.GetFirst() && A.GetSecond() == B.GetSecond() && A.GetThird() == B.GetThird());
}

Triad::operator string() const
{
	stringstream ss;
	ss << "First = " << first << endl;
	ss << "Second = " << second << endl;
	ss << "Third = " << third << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Triad& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Triad& A)
{
	double first, second, third;
	cout << "Enter a value of First: "; in >> first;
	cout << "Enter a value of Second: "; in >> second;
	cout << "Enter a value of Third: "; in >> third;
	A.SetFirst(first); A.SetSecond(second); A.SetThird(third);
	return in;
}