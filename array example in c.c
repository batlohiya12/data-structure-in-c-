#include <stdio.h>
int main() {
	//array declaration
	int rollNo[10];
	
	//taking inputs
	for(int i=0;i<10;i++)
	    scanf("%d",&rollNo[i]);
	
	//printing
	for(int i=0;i<10;i++)
	    printf("%d ",rollNo[i]);
	return 0;
}

Input:
12 13 34 56 12 87 56 78 23 10

Output:
12 13 34 56 12 87 56 78 23 10
