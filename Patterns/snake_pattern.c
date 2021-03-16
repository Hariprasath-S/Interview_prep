#include <stdio.h> 
#include <string.h>
int main(){
    int i,j,k=1,sum=1;
    int n=4;
    for(i=0;i<n;i++){
    	
    	
    	for(j=0;j<n;j++){
    		
    		printf("%d ",sum);
    		sum+=k;
    	}
    	k*=-1;
    	sum+=k;    	
    	sum = sum+n;
    	printf("\n");
    }
    return 0;
}

/*
OUPUT:
	
1 2 3 4
8 7 6 5
9 10 11 12
16 15 14 13

*/
