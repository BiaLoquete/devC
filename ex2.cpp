#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	
	cout << "Informe um n�mero: ";
	cin >> n1;
	
	cout << "Informe outro n�mero: ";
	cin >> n2;
	
	
	if (n1>n2){
		cout << "O primeiro mencionado � o maior";
	}
	
	if (n1<n2){
		cout << "O segundo mencionado � o maior";
	}
	
	if (n1==n2){
		cout << "Os dois s�o iguais";
	}

}
