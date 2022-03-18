#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;


class Vector{
friend Vector &operator +(const Vector &,const Vector &);
friend ostream &operator <<(ostream &,const Vector&);
public: Vector(int);

Vector();
 
 void getVector();
 void  mostrarVector();



private:
	int dim;
	Vector **vector;

};

