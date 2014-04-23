//
//  Stealth Puzzle
//  By Connor Hagan
//
//
//
//  TODO:
//  Design enemy loop
//  Design player loop
//  Random or prebuilt levels
//  Base game loop
//  Instructions
//  malloc to choose level size - DONE
//  Choose enemy count
//  Enemy starting position


#include <stdio.h>
#include <stdlib.h>

char** allocateLevel(int sizeOfLevel);
void genLevel(char** inLevel);

#define true 1
#define false 2

struct player {
    //X and Y coordinates
    int x;
    int y;
    int seen;
};
struct enemy {
    int x;
    int y;
    int orders[20];
};


int main(void)
{
    //Use MyAlloc to generate the array
    char** level;
    int gameRun = true;
    int difficulty;
    int size;

    while(gameRun==true)
    {
        //TODO not allow input other than numbers between 1 and 5
        printf("Choose a difficulty (between 1 and 5): ");
        scanf("%d", difficulty);
        //TODO not allow input other than numbers between 1 and 4
        printf("Choose a size (between 1 and 4): ");
        scanf("%d", size);

        //Size of sides of the array
        size=10*size;

        //used to allocate the array of the level
        level = allocateLevel(size);

        //generates the level
        genLevel(level);

    }   //TODO clean up after mallocc

}

//Used to alloc space for Level
char** allocateLevel(int sizeOfLevel)
{
    char** levelPointer = malloc(sizeOfLevel * sizeof(char*));
    int counter;


    for(counter = 0 ; counter < sizeOfLevel ; counter++)
    {
        levelPointer[counter] = malloc(sizeOfLevel * sizeof(char));
    }
}

void genLevel(char** inLevel)
{

}
