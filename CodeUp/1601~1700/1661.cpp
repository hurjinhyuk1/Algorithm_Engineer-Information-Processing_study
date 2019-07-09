#include <stdio.h>

int main()
{
    char str[100];
    
    scanf("%[^\n]s", str);
    for(int i=0; str[i] != NULL; i++){
	
		 if(str[i]==','){
			printf(" ");
			continue;
		}
		else if(str[i]==';'){
			printf("\n");
			continue;
		}
		else if(str[i]==' '){
			continue;
		}
		printf("%c",str[i]);	
	
	}
		
		
        
    return 0;
}

