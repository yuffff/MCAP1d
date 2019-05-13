

#include <stdio.h>
int a = 2, b = 0, c = 0;

void hannoi(int num ,int &start,int &tmp ,int &end){
    if (num == 1)
    {
        start--; end++;
        printf("%d  %d  %d\n",a,b,c);
    }
    else{
        hannoi(num - 1, start, end, tmp);
        hannoi(1, start, tmp, end);
        hannoi(num - 1, tmp, start, end);
    }
}

int main(){
    printf("%d  %d  %d\n", a, b, c);
    hannoi(2,a,b,c);
    getchar();
    return 0;
}