#include "kvatarnion.h"
Kvatarnion::Kvatarnion()
{
a=0;
b=0;
c=0;
d=0;
};
Kvatarnion::Kvatarnion(double x1,double x2,double x3,double x4)
{
a=x1;
b=x2;
c=x3;
d=x4;
};
const Kvatarnion Kvatarnion::operator +(const Kvatarnion& second)const
{
   double newa=a+second.a;
   double newb=b+second.b;
   double newc=c+second.c;
   double newd=d+second.d;
   return Kvatarnion(newa,newb,newc,newd);
};
const Kvatarnion Kvatarnion::operator -(const Kvatarnion& second)const
{
   double newa=a-second.a;
   double newb=b-second.b;
   double newc=c-second.c;
   double newd=d-second.d;
   return Kvatarnion(newa,newb,newc,newd);
};
 const bool Kvatarnion::operator ==(const Kvatarnion& second)const
 {
	return ((a==second.a)&&(b==second.b)&&(c==second.c)&&(d==second.d));
 };
const Kvatarnion Kvatarnion::operator -()const
{
   return Kvatarnion(-a,-b,-c,-d);
};

Kvatarnion& Kvatarnion::operator =(const Kvatarnion& second)
{
	  if (this!=&second)
	  {
		a=second.a;
		b=second.b;
		c=second.c;
   		d=second.d;
	  }
	  return *this;
};
const Kvatarnion Kvatarnion::operator *(const Kvatarnion& second)const
{
   double a2=second.a;
   double b2=second.b;
   double c2=second.c;
   double d2=second.d;

   double newa=(a*a2)-(b*b2+c*c2+d*d2);
   double newb=(a2*b+a*b2)+c*d2-d*c2;
   double newc=(a2*c+a*c2)-(b*d2-d*b2);
   double newd=(a2*d+a*d2)+(b*c2-b2*c);
   return Kvatarnion(newa,newb,newc,newd);
};
const Kvatarnion Kvatarnion::operator *(const double second)const
{
   double newa=a*second;
   double newb=b*second;
   double newc=c*second;
   double newd=d*second;
   return Kvatarnion(newa,newb,newc,newd);
};
const Kvatarnion Kvatarnion::operator *(const int second)const
{
   double newa=a*second;
   double newb=b*second;
   double newc=c*second;
   double newd=d*second;
   return Kvatarnion(newa,newb,newc,newd);
};
double Kvatarnion::norma()
{
return (a*a+b*b+c*c+d*d);
};
double Kvatarnion::getA()
{
return a;
};
double Kvatarnion::getB()
{
 return b;
};
double Kvatarnion::getC()
{
return c;
};
double Kvatarnion::getD()
{
 return d;
};
