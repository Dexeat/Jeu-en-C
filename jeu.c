#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int genRandoms(int lower, int upper,int count){ 
    int i; 
    for (i = 0; i < count; i++) { 
        int num = (rand() % 
           (upper - lower + 1)) + lower; 
        return num; 
    } 
} 

void clrscr(){
    system("@cls||clear");
}



int main(void)
{
    
	return 0;
}