#include "Rational_public.h"
#include <Windows.h>



Rational_public::Rational_public()
	:Rational(0, 0, 0, 0)
{}
Rational_public::Rational_public(int a1 = 0, int b1 = 0, int a2 = 0, int b2 = 0)
	: Rational(a1, b1, a2, b2)
{}
Rational_public::Rational_public(Rational_public& X)
	: Rational(X.Get_a1(), X.Get_b1(), Get_a2(), Get_b2())
{}

Rational_public& Rational_public::operator =(const Rational_public& X)
{
	Rational(X.Get_a1(), X.Get_b1(), Get_a2(), Get_b2());
	return *this;
}
ostream& operator <<(ostream& out, const Rational_public& X)
{
	//	int a1, b1, a2, b2;
	out << "\n\n������ �������� :";
	out << "\n a1 = " << X.Get_a1();
	out << "\n b1 = " << X.Get_b1();
	out << "\n a2 = " << X.Get_a2();
	out << "\n b2 = " << X.Get_b2();
	return out;
}
istream& operator >>(istream& in, Rational_public& X)
{
	int a1, b1, a2, b2;
	cout << "������ ��������� ������� �����(�1) = ";in >> a1;
	cout << "������ ��������� ������� �����(b1) = ";in >> b1;
	cout << "������ ��������� ������� �����(�2) = ";in >> a2;
	cout << "������ ��������� ������� �����(b2) = ";in >> b2;
	X.Set_a1(a1);X.Set_b1(b1);X.Set_a2(a2);X.Set_b1(b1);
	return in;
}
Rational_public::operator string()const
{
	stringstream ss;
	ss << "" << this->Get_a1() << endl;
	ss << "" << this->Get_b1() << endl;
	ss << "" << this->Get_a2() << endl;
	ss << "" << this->Get_b2() << endl;
	return ss.str();
}
Rational_public& Rational_public::operator++()
{
	this->Set_a1(this->Get_a1() + 1);
	this->Set_b1(this->Get_b1() + 1);
	return *this;
}
Rational_public& Rational_public::operator--()
{
	this->Set_a1(this->Get_a1() - 1);
	this->Set_b1(this->Get_b1() - 1);
	return *this;
}
Rational_public Rational_public::operator++(int)
{
	Rational_public t(*this);
	this->Set_a2(this->Get_a2() + 1);
	this->Set_b2(this->Get_b2() + 1);
	return t;
}
Rational_public Rational_public::operator--(int)
{
	Rational_public t(*this);
	this->Set_a2(this->Get_a2() - 1);
	this->Set_b2(this->Get_b2() - 1);
	return t;
}
double Rational_public::Mnojennya()
{
	int Ma = (Get_a1() * Get_a2());
	int Mb = (Get_b1() * Get_b2());
	cout << "�������� ����� = " << Ma << "/" << Mb << endl;
	return Ma;
}
double Rational_public::Dodavannya()
{
	int Da = (Get_a1() * Get_b2() + Get_a2() * Get_b1());
	int Db = (Get_b1() * Get_b2());
	cout << "��������� ����� = " << Da << "/" << Db << endl;
	return Da, Db;
}
double Rational_public::Vidnimannya()
{
	int Va = (Get_a1() * Get_b2() - Get_a2() * Get_b1());
	int Vb = (Get_b1() * Get_b2());
	cout << "³������� ����� = " << Va << "/" << Vb << endl;
	return Va, Vb;
}
double Rational_public::Value()
{
	cout << "������ ���������� ��� : " << Get_b1() << "/" << Get_a1() << endl;
	cout << "������ ���������� ��� : " << Get_b2() << "/" << Get_a2() << endl;
	return 1. * Get_a1() / Get_b1();
}