#include <stdio.h>

int main(){
int N, i;
 
    do
    {
        printf("\n Nhap vao so N = ");
        scanf("%d", &N);
    }
    while(N <= 0);
    printf("\n Cac so nguyen nho hon %d :", N);
    for(i = 1; i <= N; i++)
    {
        if("so nguyen  i");
            printf(" %d ", i);
    }
  
}
 
// Ham kiem tra so nguyen
int so_nguyen_to(int N)
{ 
    int i;
    if(N == 1)
        return 1;
    else
    {
        for( i = 2; i < N; i++)
        { 
            if(N % i == 0)
                return 0;
        }
        return 1;
    }
}
