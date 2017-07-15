#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <string.h>

//FILE *fopen(const char *"coordinates.csv", const char *"r");

#define np 10 //planetas
#define col 7 //columnas

int main(){

	//Abre y lee archivo

	FILE *in;
	char file[200];
	char temp[200];
	in=fopen("coordinates.csv", "r");

	int len=250;
	char buffer[len];
	char *split_buffer;
	const char *delimiter;
	delimiter = ",";
	int i=0, j=0; //definit matriz con i y j los numeros de planetas y columnas

	while(fgets(buffer,len,in)){
		printf("LINE IS: %s\n", buffer);
		split_buffer = strtok(buffer, delimiter);
		while(split_buffer != NULL){
			//usar aca atoi para cambiar los elementos a numeros 
			//recoriendo la matriz 
			printf("ITEM IN LINE: %s\n", split_buffer);
			split_buffer=strtok(NULL, delimiter);
			//j+=1;
		}
	//i+=1;	
	}

	//fgets(file, 200, (FILE*)in);
	//printf("%s\n", file);


	

	/*columnas-condicones iniciales -> masa, posx, posy posz vx, vy, vz*/
	
return 0;
}

//float LeapFrog(float posx, float vx){
	//inicializacion de variables
//	float h=0.01;
//	float xSun_0=0.0034386459;
//	float xMerc_0=0.3615039791;
//	float vxSun_0=-0.0008935944;
//	float vxMerc_0=-1.1184620552;

	

	//primer paso
	
//}















