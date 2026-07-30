#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int OlokinhoMeu = 3;
	int ArrayInteressante[OlokinhoMeu][OlokinhoMeu];
	
	
	for(int i = 0; i < OlokinhoMeu; i++){
		for(int j = 0; j < OlokinhoMeu; j++){
			ArrayInteressante[i][j] = 0;
		}
	};
	
	for(int i = 0; i < OlokinhoMeu; i++){
		for(int j = 0; j < OlokinhoMeu; j++){
			if(i == j){
				ArrayInteressante[i][j] = 1;
			}
		}
	};
	
	for(int i = 0; i < OlokinhoMeu; i++){
		for(int j = 0; j < OlokinhoMeu; j++){
			printf("| %i ", ArrayInteressante[i][j]);
			if(j == OlokinhoMeu-1){
				printf("| \n\n");	
			}
		}
	};
	
	return 0;
	
};