#include <iostream>
#include "Vector.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
#include<ctime>
using std:: time;
#include<cstdlib>
using std::rand;
using std::srand;


Vector::Vector(const int midim){
	this->dim=midim;
	this->vectores=new int[this->dim];
	for(int i=0;i<this->dim;i++){
		
		 this->vectores[i]=0+rand()%100;
	}
	
	
}
  Vector Vector ::mostrarvectores() {
	

	cout<<"[";
	for(int i=0;i<this->dim; i++){
		
		
		cout<<this->vectores[i]<<",";
	}
	
	cout<<"]"<<endl;
	
	
}

const int  Vector::getdim()const{


return this->dim;

}

ostream &operator <<(ostream &mensaje,const Vector &vectores){
	
	mensaje<<vectores<<endl;
	
	return mensaje;
	
	
}

Vector &operator +(const Vector &vect1,const Vector &vect2){
	
	
Vector *vect3= new Vector(vect1.getdim());
for(int i=0;i<vect1.getdim();i++){
	
	
	vect3->vectores[i]=vect1.vectores[i]+vect2.vectores[i];
	
	
}
	
	return *vect3;
	
	
}
Vector &operator -(const Vector &vect1,const Vector &vect2){
	
	
Vector *vect3= new Vector(vect1.getdim());
for(int i=0;i<vect1.getdim();i++){
	
	
	vect3->vectores[i]=vect1.vectores[i]-vect2.vectores[i];
	
	
}
	
	return *vect3;
	
	
}
