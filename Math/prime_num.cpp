
#include <iostream>
using namespace std;
int main() {
    int n=0;
    do{
        cin >> n;
    }while(n>=1000000 || n<=0);
    
    int tab[n];
    for(int i=0; i<n; i++){
        do{
            cin >> tab[i];
	}while(tab[i] > 10000 || tab[i]<=0);
    }

    for(int i=0; i<n; i++){
        if(tab[i] == 1){
            cout << "NIE" << endl;
	    continue;
	}
	for(int j=2; j<=tab[i]; j++){
	    if(j == tab[i]){
		cout << "TAK" << endl;
		break;
	    }
	    if((tab[i] % j)==0){
		cout << "NIE" << endl;
		break;
	    }
	}
    }

    return 0;
}

