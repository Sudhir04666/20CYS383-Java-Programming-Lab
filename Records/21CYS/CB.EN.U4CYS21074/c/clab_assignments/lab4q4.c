#include<stdio.h>
int main(){
    printf("enter the character for the ship ");
    char ship;
    scanf("%c", &ship);
    switch(ship){
        case 'b':
        case 'B':
        printf("Battleship");
        break;
        case 'c':
        case 'C':
        printf("Cruiser");
        break;
         case 'f':
        case 'F':
        printf("Frigate");
        break;
         case 'd':
        case 'D':
        printf("Destroyer");
        break;
        default :
        printf("unknown ship");
        break;

    }
    
}