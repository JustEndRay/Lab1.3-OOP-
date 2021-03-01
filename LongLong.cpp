#include "LongLong.h"

double LongLong::GetLong1() const { return Long1; }
double LongLong::GetLong2() const { return Long2; }

void LongLong::SetLong1(long int value) { Long1 = value; }
void LongLong::SetLong2(long int value) { Long2 = value; }

void LongLong::Init(double Long1, double Long2)
{
	this->Long1 = Long1;
	this->Long2 = Long2;
}
void LongLong::Read()
{
	cout << "\nLongLong1 = "; cin >> Long1;
	cout << "\nLongLong2 = "; cin >> Long2;

	Init(Long1, Long2);
}
void LongLong::Display()
{
	cout << "\n\nLongLong1 = " << Long1 << endl;
	cout << "LongLong2 = " << Long2 << endl;
}
void LongLong::Compare(LongLong first, LongLong second)
{
	if (first.Long1 > second.Long1)
	{
		cout<< first.Long1<< first.Long2<<" > "<< second.Long1 << second.Long2 <<endl;
	}
	else
	{
		if (first.Long1 = second.Long1)
		{
			if(first.Long2 > second.Long2){ cout << first.Long1 << first.Long2 << " > " << second.Long1 << second.Long2 << endl; }
			else
			{
				if (first.Long2 = second.Long2){ cout << first.Long1 << first.Long2 << " = " << second.Long1 << second.Long2 << endl; }
				else{ cout << first.Long1 << first.Long2 << " < " << second.Long1 << second.Long2 << endl; }
			}
		}
	}
}
LongLong LongLong::Subtruct(LongLong first, LongLong second)
{
	LongLong t;
	t.Long1= first.Long1 - second.Long1;
	t.Long2 = first.Long2 -second.Long2;
	return t;
}

string LongLong::toString() const
{
	stringstream sout;

	sout << "\n\nLongLong1 = " << GetLong1() << endl;
	sout << "Longlong2 = " << GetLong2() << endl;

	return sout.str();
}