#include<stdio.h>
#include<math.h>
int main(){
	float a = 1,b=1,c=5,d=1;
	float A,B,C,D,E;
	A = 3*(a/5)+(1/b);
	B = (3*a+5*b)/(2+c);
	C = (2/7)*(pow(4,3+c)-5*d);
	D = sqrt((2+8*b)/a);
	E = cbrt(pow(b,2)-4*d);
	printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f",A,B,C,D,E);
	return 0;
}
