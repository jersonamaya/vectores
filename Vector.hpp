#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
#include<ctime>
using std:: time;
#include<cstdlib>
using std::rand;
using std::srand;
#include<cmath>
class Vector{
friend Vector &operator +(const Vector &,const Vector &);
friend Vector &operator -(const Vector&, const Vector &);
friend double operator ~(const Vector&);
friend double operator *=(const Vector&,const Vector&);
friend Vector &operator ^=(const Vector&, const Vector &);
friend ostream &operator <<(ostream &,const Vector&);
public:  Vector(const int);

Vector();
 
 const int getdim()const;
  Vector mostrarvectores();



private:
	int dim;
	int *vectores;

};

