#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define medida 1000

const char *texto = "text1.txt"; //We open the txt that are going to read
const char *palabra = "word.txt";

int main(){

	FILE *txt; //We declared our variables
	FILE *word;

	int rec;
	char palabra[100];
	int count;

	printf("Escribe la palabra que quieres buscar: \n"); 
	scanf("%s ",palabra);

	txt=fopen(texto,"r"); //Condition if the file doesn't exist
	if(txt==NULL){
		fprintf(stderr," Este archivo llamado %s no se puede abrir", texto);
	return(8);
	}

	word=fopen(palabra,"w+"); //Condition if the second file doesn't exist
	if(word==NULL){
                fprintf(stderr," Este archivo llamado %s no se puede abrir", palabra);
	return(8);
	}

	count = contador_veces(txt,palabra); //It is the counter of the word that is repeat.
	fprintf(word,"'%s' las veces son %d \n", palabra, rec);
	fclose(txt);
	fclose(word);

return 0;
}

int cont_time(FILE *txt, const char *texto){
	char str[medida];
	char *pasar;
	int index;
	int i=0;
	while((fgets(str,medida,txt)) !=NULL)
	{
		index =0;
		while((pasar = strstr(str+index,palabra)) !=NULL){
		index=(pasar - str)+1;
		i++;
		}
	}
return i;

}
