/* seki.c */

/****************************/
/*   �s��̐ς��v�Z���܂��B	*/
/****************************/

#include<stdio.h>
// y -> w64*64 �� x64*1024 �̐�
void seki(double w[][64], double x[][1024], double y[][1024]){

	int i, j, k;

	for(i = 0; i < 64; i++){
		for(j = 0; j < 1024; j++){
			y[i][j] = 0.0;
			for(k = 0; k < 64; k++){
				y[i][j] += w[i][k] * x[k][j];
			}
		}
	}
}

