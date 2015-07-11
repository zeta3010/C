#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int laenge (char *ptr){

	int l = 0;

	while(ptr[l] != '\0'){	
		l++;		
	}

	return (l-1);

}


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


int main(){

	char wort[100];
	char *ptr = wort;

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
