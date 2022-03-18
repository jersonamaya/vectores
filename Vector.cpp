#include <iostream>
#include "Vector.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::ostream;


Vector::Vector(int midime){
	
	this->dim=midime;
}


Vector::Vector(){
	this->dim=8;
	
	
	this->vector=new Vector*[this->dim];
	for(int i = 0; i < this->dim; i++){
        this->vector[i] = new Vector[this->dim];
        
    }

 
}

ostream &operator <<(ostream &mensaje,const Vector &vectores){
	
	mensaje<<vectores<<endl;
	
	return mensaje;
	
	
}

Vector &operator +(const Vector &V1,const Vector &V2){
	
	
	int V12= V1.dim+V2.dim;
	
	return *(new Vector(V12));
	
	
}

