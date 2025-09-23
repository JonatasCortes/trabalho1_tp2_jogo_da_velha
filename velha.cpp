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

int VerificaVelha( int velha[3][3] )
{
	int center_column = 1;
	for(int row=0; row<3; row++){

		int left_square = velha[row][center_column-1];
		int center_square = velha[row][center_column];
		int right_square = velha[row][center_column+1];

		if(center_square == left_square && center_square == right_square && center_square > 0){
			return center_square;
		}
	}

	int center_row = 1;
	for(int column=0; column<3; column++){

		int up_square = velha[center_row-1][column];
		int center_square = velha[center_row][column];
		int down_square = velha[center_row+1][column];

		if(center_square == up_square && center_square == down_square && center_square > 0){
			return center_square;
		}
	}

	return 0;
}


