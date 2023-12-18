#include<stdio.h>
#include<string.h>
main(){
	
	int i,j,length,count;
	char str[100];
	
	printf("enter any string :- ");
	gets(str);
	
	length=strlen(str);
	
	printf("Frequency of each letter:\n");
	
	for(i=0;i<length;i++){
		
		count=1;
		if(str[i]){
		
			for(j=i+1;j<length;j++){
			
			if(str[i]==str[j]) {
				count++;
				str[j]='\0';
			}
					
		}
	 printf(" %c = %d \n",str[i],count);	
	}		
	}

}
