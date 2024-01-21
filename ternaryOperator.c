#include <stdio.h>

void findMax(int x, int y){

   char *firstCondition = x > y ? "x greater than y" : "y greater than x";

   printf("%s", firstCondition);

}

int main(){

    int x = 5;
    int y = 4;

    findMax(x,y);

    return 0;
}