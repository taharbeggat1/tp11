#include<stdio.h>
int main(){
	
	int T1[10] , T2[10] ,T3[20], i  ;
	
	printf(" Enter table 1  values in ascending order \n");
	for(i=0;i<=9;i++){
		
	    printf("T1[%d]= ",i+1);
	    scanf("%d",&T1[i]);
	    
		if((i!=0)&&(T1[i-1]>T1[i])){
            return 1 ;
    	}
    	
    }
	printf(" Enter table 2  values in ascending order \n ");
    for(i=0;i<=9;i++){
		
	    printf("T2[%d]= ",i+1);
	    scanf("%d",&T2[i]);
	    
		if((i!=0)&&(T2[i-1]>T2[i])){
            return 1 ;
    	}
    	
    }
    int j,k;
    i=j=k=0;
    while( i<10 && j<10){
    	if(T1[i]<=T2[j]){
    		T3[k++]=T1[i++];
		}else{
        	T3[k++]=T2[j++];
    	}
	}
	
	while( i<10 ){
	    T3[k++]=T1[i++];
	}

	while( j<10 ){
	    T3[k++]=T2[j++];
	}
	
	for(i=0;i<=19;i++){
		printf("_%d ",T3[i]);
	}
	
    return 0 ;
}