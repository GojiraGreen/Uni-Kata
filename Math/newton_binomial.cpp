#include <iostream>
#include <math.h>
using namespace std;

#define nmax 10

void  PascalT(int n, int tab[]){
	int tmp1, tmp2;
	tab[0] = 1;
	tab[1] = 1;
	if(n<2){return;}
	cout << endl;
	for(int i=2; i<=n; i++){
		tmp1 = tab[0];
		tmp2 = tab[1];
		for(int k=1; k<=i; k++){
			tab[k] = tmp1 + tmp2;
			tmp1 = tmp2;
			tmp2 = tab[k+1];
		}
	}
}

long long Newton_binomial(int x, int y, int power, int tab[]){
	int n=0, m=power;
	long long sol = 0;
	for(int i=0; i<=power;i++){
		sol += tab[i]*pow(x,m)*pow(y,n);
		m--;
		n++;
	}
	return sol;
}

int main() {
	int tab[nmax] = {0};
	int x, y, n;
	cout << "set power to n (max 10) => ";
	cin >> n;
	while(n>10){
		cout << "to big\n=>";
		cin >> n;
	}
	cout << "set value x (max 38) => ";
	cin >> x;
	while(x>38){
		cout << "to big\n=>";
		cin >> x;
	}
	cout << "set value y: (max 38) => ";
	cin >> y;
	while(y>38){
		cout << "to big\n=>";
		cin >> y;
	}
	PascalT(n, tab);
	cout << "pascal: ";
	for(int i=0; i<=n; i++){
		cout << tab[i] << " ";
	}
	cout << endl << endl;
	cout << "wynik: " << Newton_binomial(x, y, n, tab) << endl;
	return 0;
}
