#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class LongLong
{
	long int Long1, Long2;
public:
	double GetLong1() const;
	double GetLong2() const;

	void SetLong1(long int value);
	void SetLong2(long int value);

	void Init(double Long1, double Long2);
	void Read();
	void Display();

	void Compare(LongLong x, LongLong y);
	LongLong Subtruct(LongLong x, LongLong y);

	string toString() const;
};

