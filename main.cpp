#include"Vector.hpp"


int main(){
	srand(time(NULL));
	Vector v1(2),v2(2),v3(2);
	double modulo,esc ;
	v1.mostrarvectores();
	v2.mostrarvectores();
	v3=v1+v2;
	v3.mostrarvectores();	
	v3=v1-v2;
	v3.mostrarvectores();
	modulo=~v3;
    v3.mostrarvectores();
    cout<<modulo<<endl;
	cout<< "la dimenencion del vector es:"<<v2<<endl;
	esc=v1*=v2;
	cout<<esc<<endl;
	return 0;
}
