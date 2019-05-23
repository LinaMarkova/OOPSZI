#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "math.h"
#include <iostream>

using namespace std;

class Rational			
{
private:

	int sign;           // знак дроби (+ или -)
	int intPart;        // целая часть дроби
	int numerator;      // числитель дроби
	int denominator;    // знаменатель дроби
	void GetMixedView();	//преобразование в смешанный вид
	void Cancellation();     //сокращение дроби
	void GetIntPart();       //выделение целой части дроби

public:

	Rational();
	Rational(int n, int d, int i, int s);
	int getSign() const;
	int getIntPart() const;
	int getNumerator() const;
	int getDenominator() const;
	Rational FromDoubleToRational(double num);

	Rational operator + (Rational);
	Rational operator - (Rational);
	Rational operator * (Rational);

	operator double();
	friend ostream& operator<<(ostream &out, const Rational &a);
};