#include <stdio.h>

void main(){

    int index = 0;

    while(index < 10){

        if(5 < index){
            printf("\n\tIndex is %i, so, the loop will end here because of a break", index);
            break;/*It stops the loop*/

        }else if(3 == index){
            printf("\n\tNow index is %i and the rest of the iteration will be skiped", index);
            index++;
            continue;/*Stops the current iteration and starts the next one*/

        }else if(30 == index){
            LABEL:printf("\n\tArrive here is IMPOSIBLE unless you use goto LABEL");

        }else if(2 == index){
            goto LABEL;/*Jumps to the defined label in code*/

        }

        printf("\n\tEnd of iteration #%i\n", index);
        index++;
    }
}
