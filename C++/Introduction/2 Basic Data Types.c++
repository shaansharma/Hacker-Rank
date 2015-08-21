#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int a = 0;
    long b = 0;
    long long c = 0;
    long d = 0;
    char e = '\0';
    float f = 0;
    double g = 0;
    
    int i = scanf("%d %ld %lld %c %f %lf",&a,&b,&c,&e,&f,&g);
    
    printf("%d\n%ld\n%lld\n%c\n%f\n%lf\n",a,b,c,e,f,g);
    
    return 0;
}

