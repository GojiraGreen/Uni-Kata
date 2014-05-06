/*
 * GojiraGreen 06.05.14
 * Two dimensional matrix multplication
 * Volker Strassen Algorithm
 */


#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int matrix_one[2][2] = {0};
    int matrix_two[2][2] = {0};
    int matrix_resoult[2][2] = {0};
    int P, Q, R, S, T, U, V;
    
    srand(time(NULL));
    
    for(int i=0; i<2; i++)
	for(int j=0; j<2; j++)
	    matrix_one[i][j] = rand() % 90;

    
    for(int i=0; i<2; i++)
	for(int j=0; j<2; j++)
	    matrix_two[i][j] = rand() % 90;

    
    P = (matrix_one[0][0] + matrix_one[1][1]) * (matrix_two[0][0] + matrix_two[1][1]);
    Q = (matrix_one[1][0] + matrix_one[1][1]) * matrix_two[0][0];
    R = matrix_one[0][0] * (matrix_two[0][1] - matrix_two[1][1]);
    S = matrix_one[1][1] * (matrix_two[1][0] - matrix_two[0][0]);
    T = matrix_two[1][1] * (matrix_one[0][0] + matrix_one[0][1]);
    U = (matrix_one[1][0] - matrix_one[0][0]) * (matrix_two[0][0] + matrix_two[0][1]);
    V = (matrix_one[0][1] - matrix_one[1][1]) * (matrix_two[1][0] + matrix_two[1][1]);

    matrix_resoult[0][0] = P + S - T + V;
    matrix_resoult[0][1] = R + T;
    matrix_resoult[1][0] = Q + S;
    matrix_resoult[1][1] = P + R - Q + U;


    cout << "matix_one: " << endl;

    for(int i=0; i<2; i++){
	for(int j=0; j<2; j++){
	    cout << matrix_one[i][j] << " ";
	}
        cout << endl;
    }

    cout << "matrix_two: " << endl;

    for(int i=0; i<2; i++){
	for(int j=0; j<2; j++){
	    cout << matrix_two[i][j] << " ";
	}
        cout << endl;
    }

    cout << "matrix_resoult: " << endl;

    for(int i=0; i<2; i++){
	for(int j=0; j<2; j++){
	    cout << matrix_resoult[i][j] << " ";
	}
        cout << endl;
    }
    cout << endl;

    return 0;
}

