#include <cstdio>

int main (void)
{
	double h,w;
	double standardW,fatpercent;
	scanf("%lf %lf",&h,&w);
	
	if(h>=160){
		standardW=(h-100)*0.9;
		fatpercent=(w-standardW)*100/standardW;
		//printf("%lf",fatpercent);
		if(fatpercent<=10)printf("정상");
		else if(fatpercent>=10 &&fatpercent<=20)printf("과체중");
		else printf("비만");
		}
	
	else if(h>=150&&h<160){
		standardW=(h-150)/2+50;
		fatpercent=(w-standardW)*100/standardW;
		//printf("%lf",fatpercent);
		if(fatpercent<=10)printf("정상");
		else if(fatpercent>=10 &&fatpercent<=20)printf("과체중");
		else printf("비만");
		}
	else if(h<150){
		standardW=(h-100);
		fatpercent=(w-standardW)*100/standardW;
        if(fatpercent<=10)printf("정상");
	    else if(fatpercent>=10 &&fatpercent<=20)printf("과체중");
	    else printf("비만");
	  
		
	} 
	
	
	return 0; 
}
