#include <stdio.h>
int function(x,y){
int x=10;
int y=10;
x=x+1;
static y=y+1;
}

int main()
{
    int x;
    int y;
    function( x, y);
    
    printf("Result:%d\n",x);
    printf("Result:%d\n",y);
}