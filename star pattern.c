#include <stdio.h>

void starPattern(int rows){
    for(int i = 0; i < rows + 1; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}


void reverseStarPattern(int rows){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j <= rows-i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}


int main() {
    int rows, type;
    printf("Enter 0 for Star Pattern, 1 for Reverse Star Pattern or 2 for triangle pattern: \n");
    scanf("%d", &type);
    printf("Enter number of Rows:");
    scanf("%d", &rows);
    
    switch(type)
    {
        case 0 :
            starPattern(rows);
            break;
        case 1 :
            reverseStarPattern(rows);
        case 2 :
            starPattern(rows);
            reverseStarPattern(rows);
            break;
        default :
            printf("You have entered incorrect choice \n");
    }
    return 0;
}