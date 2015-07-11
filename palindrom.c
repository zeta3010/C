#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//gibt die Länge des Char Arrays zurück
int laenge (char *ptr){

	int l = 0;

	while(ptr[l] != '\0'){	
		l++;		
	}

	return (l-1);

}

//checkt ob es ein Palindrom ist, ja = true, nein = false
bool checkPalin(char *ptr, int l){
	
	bool h;
	int i = 0;
	
	while(i!=(l/2)){
		
		if(ptr[i]!=ptr[l-1-i]){
			h = false;
		}

		else{
			h = true;
		}
		i++;
	}	
	return h;
}

//Start des Programmes
int main(){

	char wort[100];

	printf("Gebe eine Wort ein\n");
	fgets(wort,100,stdin);

	int l = laenge(wort);

	printf("--------------------\n");
	
	if(checkPalin(wort,l)){
		printf("Palindrom\n");
	}

	else{
		printf("Kein Palindrom\n");
	}
}	
