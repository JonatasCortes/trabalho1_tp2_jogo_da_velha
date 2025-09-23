/**
 * \file  velha.cpp
 */

 
#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int check_winner_by_axis(int velha[3][3], bool y){

	int center = 1;
	int dim = 3;

	for(int i=0; i<dim; i++){

		int a = y ? velha[i][center-1] : velha[center-1][i];
		int b = y ? velha[i][center]   : velha[center][i];
		int c = y ? velha[i][center+1] : velha[center+1][i];

		if(a > 0 && a == b && a == c){
			return a;
		}
	}
	return 0;
}

int VerificaVelha(int velha[3][3]){

	int winner = check_winner_by_axis(velha);
	if(winner != 0) return winner;

	winner = check_winner_by_axis(velha, true);
	if(winner != 0) return winner;

	return 0;
}


