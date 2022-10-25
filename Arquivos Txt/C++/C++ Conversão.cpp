#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;	
int main(){

float m,dc,c,mm;

cout<<"Informe o Valor em Metros"<<endl;
cin>>m;

dc = m*10;
c = m*100;
mm = m*1000;


cout<<"\nO valor em Decimetros e: "<<dc<<endl;
cout<<"O valor em Centimetros e: "<<c<<endl;
cout<<"O valor em Milimetros e: "<<mm<<endl;

	exit (0);
	return 0;
}
