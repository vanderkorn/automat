#pragma once
#ifndef KvatarnionH
#define KvatarnionH
#include <cstdlib>
#include <cmath>
class Kvatarnion
 {
		public:
		   Kvatarnion();
		   Kvatarnion(double x1,double x2,double x3,double x4);
		   double getA();
		   double getB();
		   double getC();
		   double getD();
		   const Kvatarnion operator +(const Kvatarnion& second)const;
		   const Kvatarnion operator -(const Kvatarnion& second)const;
		   const bool operator ==(const Kvatarnion& second)const;
           const Kvatarnion operator -()const;
		   Kvatarnion& operator =(const Kvatarnion& second);
		   const Kvatarnion operator *(const Kvatarnion& second)const;
		   const Kvatarnion operator *(const double second)const;
		   const Kvatarnion operator *(const int second)const;
		   double norma();
        private:
		   double a;
		   double b;
		   double c;
		   double d;
 };
 #endif
