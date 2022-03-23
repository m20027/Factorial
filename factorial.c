#include<stdio.h>

int Factorial(int a);
void Factorial_Print(int a);

int main(){
    //Factorial(5);
    //Factorial_Print(5);
}


int Factorial(int a){
    int ans=0;
    
    for(int i=1;i==(a-1);i++){
     ans=a*(ans-i);
    }
    return ans;
}

void Factorial_Print(int a){
    int ans=1;
    for(int i=1;i<(a+1);i++){
        ans=ans*i;
    }
    printf("%d\n",ans);
    
}
