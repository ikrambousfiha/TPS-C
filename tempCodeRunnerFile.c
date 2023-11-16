#include <stdio.h>
int sum(int m , int n){
    int i,s;
    for (i=m;i>=n;i++){
        s+=i;
    }
    return s;
}


int main()
{    
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));
    
    return 0;
}
