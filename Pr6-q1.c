#include<stdio.h>
main(){
	
	int i,j;
	int len=0,flag=1;
	char str[100];
	
	printf("\nEnter any string : ");
	scanf("%s",&str);
	
	for(i=0;str[i]!=NULL;i++){
		len++;
	}
	
	for(i=0;i<len/2;i++){
		
		if(str[i]!=str[len-1-i]){
			flag=0;
			break;
		}
	}
	
	if(flag==1){
		printf("String is Palindrome..");
	}
	else{
		printf("String is not a Palindrome..");
	}
	
}
