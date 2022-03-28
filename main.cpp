#include"Vector.hpp"


int main(){
	srand(time(NULL));
	Vector v1(3),v2(3),v3(3);
	v1.mostrarvectores();
	v2.mostrarvectores();
	v3=v1+v2;
	v3.mostrarvectores();	
	v3=v1-v2;
	v3.mostrarvectores();
	
	
	return 0;
}
