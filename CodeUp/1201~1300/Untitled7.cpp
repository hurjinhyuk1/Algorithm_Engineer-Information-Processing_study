#include<stdio.h>
#include<math.h>  // 제곱근 함수 사용하기 위함
int main(){
int a,c;
int i=1;
int j=1;
int count=1;
scanf("%d", &a); // 숫자 받기

while(c != 0){ 
count++; // 1부터 얼마까지 뺐는지 계산
a=a-i; // 1부터 빼기
c=a;
while(c>0){ // 홀수의 합은 제곱수임을 이용
c=c-(2*j-1); // 홀수를 계속해서 빼서,  c가 0이 되면 제곱수임.(1부터 홀수의 합은 제곱수 임으로, 제곱수가 아니면 0이 되지 않고 0보다 작게됨)
j++;}
j=1;}
printf("%d %.0f", count-1, sqrt((double)a)); // count의 경우 2번째 while문에 걸릴때 까지 더해지므로, 1을 빼야 함. 제곱근은 sqrt함수 사용.
}
