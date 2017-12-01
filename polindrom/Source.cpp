#include <iostream>
using namespace std;

int main(){
	int nr,calcul,temp,final=0;
	cout << "Introduceti un numar:"<< endl;
	cin >> nr;
	calcul=nr;

	while(calcul>0){
		temp=calcul%10;
		//in temp se memoreaza ultima cifra din numar
		final=final*10+temp;
		calcul=calcul/10;
	}

	if(final==nr){
		cout <<"Numarul este palindrom" << endl;
	}
	else{
		cout << "Numarul nu este palindrom" << endl;
	}

	system("pause");
	return 0;
}