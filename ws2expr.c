#include<stdio.h>
#include<math.h>
int main(){
	int a = 1,b=1,c=5,d=1;
	int A,B,C,D,E;
	A = 3*(a/5)+(1/b);
	B = (3*a+5*b)/(2+c);
	C = (2/7)*(pow(4,3+c)-5*d);
	D = sqrt((2+8*b)/a);
	E = cbrt(pow(b,2)-4*d);
	printf("%d\n%d\n%d\n%d\n%d",A,B,C,D,E);
}
