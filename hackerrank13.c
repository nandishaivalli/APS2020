#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//https://www.hackerrank.com/challenges/array-left-rotation/problem
char* readline();
char** split_string(char*);

int main() {
    int n;
    int d;
    int temp;
    int *array = (int *)malloc(sizeof(int) * n);
    
    scanf("%d", &n);
    scanf("%d", &d);
    
    for(int i = 0; i < n; i++){
        temp = i - d;
        if(temp < 0){
            temp = temp + n;
        }
        scanf("%d", &array[temp]);
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
   
    return 0;
}
