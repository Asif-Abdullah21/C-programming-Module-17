#include<stdio.h>

void print(int n)
{
    int i=1;
    i++;
    if(i==6) return;
    print(i);
}

int main()
{
    int n=5;
    print(n);
    
    return 0;
}