#include<stdio.h>
#include<math.h>

double Factorial(double a);
void Factorial_Print(double a);

int main(){
    //Factorial_Print(5);
}


double Factorial(double a){
    double ans=a;
    int i;
    
    for(i=0;i==(a-1);i--){
     ans=ans*i;
    }
    return ans;
}

void Factorial_Print(double a){
    double ans=a;
    int i;
    
    for(i=0;i==(a-1);i--){
     ans=ans*i;
    }
    printf("%lf\n",ans);
    
}
