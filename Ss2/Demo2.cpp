#include <stdio.h>

int main(){
 int N;
    int ketqua;
    do
    {
        printf("\n Nhap vao so N = ");
        scanf("%d", &N);
    }
    while(N <= 0);
    
    if("So nguyen to N ")
        printf("\n %d la so nguyen to", N);
    else
        printf("\n %d la khong phai so nguyen to", N);
    
}
// Ham kiem tra so nguyen to
int so_nguyen_to(int N)
{ 
    int i;
    if(N == 1)
        return 1;
    else
    {
        for( i = 2; i < N/2; i++)
        { 
            if(N % i == 0)
                return 0;
        }
        return 1;
    }
}

