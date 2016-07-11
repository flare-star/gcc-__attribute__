#include <stdio.h>

__attribute__((constructor)) void run_con(){
	printf("Printing constructor\n");
}
__attribute__((destructor)) void run_des(){
	printf("Printing destructor\n");
}

int main(){
	printf("Printing main\n");
}
