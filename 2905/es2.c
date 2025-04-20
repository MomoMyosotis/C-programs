#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	int i;
	int status;
	for(i=0; argv[i]!=NULL; i++){
		printf("argv[%d]=%s\n",i,argv[i]);
	}
	status=fork();
	if(status < 0){
		printf("Fork fallita");
		exit(0);
	}
	if(status == 0){ //Figlio
		printf("Sono il figlio\n");
		execvp(argv[1], &argv[1]);
		exit(0);
	}else{
		sleep(10);
		printf("Terminazione padre\n");
	}
	return 0;
}
