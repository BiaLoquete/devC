#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float hoje,nascimento,result;
	
	cout << "Informe o ano atual: ";
	cin >> hoje;
	
	cout << "Informe o ano do seu anivers�rio: ";
	cin >> nascimento;
	
	result = (hoje-nascimento) ;
	
	if (result >=16){
		cout << "Voc� j� pode votar";
	}else {
		cout << "Voc� ainda n�o pode votar";
	}
	
}
