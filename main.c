#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y;
	
	printf("input the year : ");
	scanf("%d", &x);
	
	y = (x%400 == 0)||(x%4==0 && x%100!=0);
	printf("Is the year %i the leap year? : %i", x, y);
	
	
	return 0;
}
