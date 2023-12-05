#include<stdio.h>
#include<math.h>

double exp(double x, double epsilon){
	double sum=1, tmp=1;
	for(int i=1;fabs(tmp)>epsilon;i++){
		tmp*=x/i;
		sum+=tmp;
	}
	return sum;
}

int main(){
	double x, epsilon;
    scanf("%lf %lf", &x, &epsilon);
    double ans = exp(x,epsilon);
    printf("%lf", ans);
    return 0;
}
