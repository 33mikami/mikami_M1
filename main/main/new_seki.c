/* new_seki.c */

/********************************************/
/*   dataの数に応じて行列の積を計算します。	*/
/********************************************/

#include<stdio.h>
// yy -> w と xxの積
void new_seki(double w[][64], double **xx, double **yy, int data){

	int i, j, k;

	for(i = 0; i < 64; i++){
		for(j = 0; j < data; j++){
			yy[i][j] = 0.0;
			for(k = 0; k < 64; k++){
				yy[i][j] += w[i][k] * xx[k][j];
			}
		}
	}
}

