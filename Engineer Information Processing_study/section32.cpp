#include <stdio.h>

int main (void)
{
	int n,i,j,k;
	
	int data[10];
	n=-1;
	
	do{
		n++;
		scanf("%d",&data[n]);
	}while(n<9);
	
	i=-1;
	do{
		i++;
		j=-1;
		do{
			j++;
			if(data[j]>data[j+1]){
				k=data[j];
				data[j]=data[j+1];
				data[j+1]=k;
			}
		
		}while(j<8-i);
	}while(i<8);
	
	for(int x =0; x<=9; ++x){
		printf("%d ",data[x]);
	}
	
	return 0;
}
