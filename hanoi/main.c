#include <stdio.h>
#include <string.h>

void hanoi(int n,int a,int b,char* output){
	char temp[10];
	int c=(a==1&&b==2||a==2&&b==1)?3:((a==1&&b==3||a==3&&b==1)?2:1);
	if(n!=0){
		hanoi(n-1,a,c,output);
		sprintf(temp,"%d->%d\n\0",a,b);
		strcat(output,temp);
		hanoi(n-1,c,b,output);
	}
}
int main(int agv,char* ags){
	char output[]="\0";
	hanoi(10,1,3,output);
	puts(output);
	
}
