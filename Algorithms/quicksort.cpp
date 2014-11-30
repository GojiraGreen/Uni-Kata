#include <iostream>
#include <cstdlib>
using namespace std;

int Split(int *p, int low, int high);
void QuickSort(int *p, int low, int high);

int main() {
    int tab[10];
    int high = 9, low=0;
    srand(time(NULL));
    cout << "Array to sort: " << endl;
    for(int i=0; i<10; i++){
        tab[i] = rand() % 90;
    }
    for(int i=0; i<10; i++){
        cout << tab[i] << " ";
    }
    QuickSort(tab, low, high);
    cout << "Array sorted: " << endl;
    for(int i=0; i<10; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
    return 0;
}

int Split(int *p, int low, int high){
    int div_v = p[low];
    while(low<high){
        if(p[high] < div_v){
	    p[low] = p[high];
            low++;
	}
	else{
	    high--;
	    continue;
	}
	while(low<high){
            if(p[low] >= div_v){
		p[high] = p[low];
		high--;
		break;
	    }
	    else{
		low++;
	    }
	}
    }
    p[low]=div_v;
    return low;
}

void QuickSort(int *p, int low, int high){
    int dziel;
    if(low >= high){ return;}
    dziel = Split(p, low, high);
    QuickSort(p, low, dziel-1);
    QuickSort(p, dziel+1, high);
}
