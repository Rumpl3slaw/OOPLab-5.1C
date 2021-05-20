#include <iostream>
#include <Windows.h>
#include <math.h>
#include "Rational.h"

using namespace std;

int Rational::Get_a1()const { return a1; }
int Rational::Get_b1()const { return b1; }
int Rational::Get_a2()const { return a2; }
int Rational::Get_b2()const { return b2; }

void Rational::Set_a1(int value) { a1 = value; }
void Rational::Set_b1(int value) { b1 = value; }
void Rational::Set_a2(int value) { a2 = value; }
void Rational::Set_b2(int value) { b2 = value; }

Rational::Rational() { a1 = 0, b1 = 0, a2 = 0, b2 = 0; }
Rational::Rational(int a1 = 0, int b1 = 0, int a2 = 0, int b2 = 0)
{
	this->a1 = a1;
	this->b1 = b1;
	this->a2 = a2;
	this->b2 = b2;
}
Rational::Rational(const Rational& X)
{
	a1 = X.Get_a1();
	b1 = X.Get_b1();
	a2 = X.Get_a2();
	b2 = X.Get_b2();
}
void Rational::Read()
{
	int a1, b1, a2, b2;
	cout << "¬вед≥ть чисельник першого дробу(а1) = ";cin >> a1;
	cout << "¬вед≥ть знаменник першого дробу(b1) = ";cin >> b1;
	cout << "¬вед≥ть чисельник другого дробу(а2) = ";cin >> a2;
	cout << "¬вед≥ть знаменник другого дробу(b2) = ";cin >> b2;
}
void Rational::Display()
{
	cout << "ѕерший др≥б : " << Get_a1() << "/" << Get_b1() << endl;
	cout << "ƒругий др≥б : " << Get_a2() << "/" << Get_b2() << endl;
}