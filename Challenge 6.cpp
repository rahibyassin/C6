#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv){
    
    float C;

    printf("Temperature en F : \n");
    scanf("%f", &C);

    C = (C - 32) * 5/9;

    printf("Temperature en C : %f\n", C);
    

    return 0;
}
