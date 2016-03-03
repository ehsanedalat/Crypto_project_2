/*#include<stdio.h>
#include<malloc.h>
#include "General.h"

int _Sbox_0_linearProfile[INPUT_SIZE][OUTPUT_SIZE];


void init(){
	//initialize the linear profile of s1
	for(int i=0;i<INPUT_SIZE;i++)
		for(int j=0;j<OUTPUT_SIZE;j++)
			_Sbox_0_linearProfile[i][j]=0;
}

int liklyhood(char x,char y,int* sbox){
	int counter=0;
	for(int i=0;i<16;i++){
		int tmp=*(sbox+i);
		if((x&1&i)^((x&2&i)>>1)^((x&4&i)>>2)^((x&8&i)>>3)==(y&1&tmp)^((y&2&tmp)>>1)^((y&4&tmp)>>2)^((y&8&tmp)>>3)){
			counter++;
		}
	}

	return counter;
}

void generatingLinearProfile(int profile[INPUT_SIZE][OUTPUT_SIZE],int* sbox){
	for(int i=0;i<INPUT_SIZE;i++)
		for(int j=0;j<OUTPUT_SIZE;j++){
			profile[i][j]=liklyhood(i,j,sbox);
		}
}
*/
#include "LinearProfile.h"
