#include <stdio.h>

void print_row(int bricks);
int height;
int main(void)
{

    // Prompt the user for height

    do
    {
       printf("Whats the height of pyramid: ");
        scanf("%d", &height);
    }
    while (height <= 0);

    // Build the pyramid of that height
    for (int i = 0; i < height; i++)
    {
        // print row based on which row i am
        print_row(i + 1);
    }
}
// a mini function to print bricks in a row for a certain times
void print_row(int bricks)
{
    for (int i = height - bricks; i > 0; i--)
    {
        printf(" ");
    }
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    for (int i = 0; i < 1; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    printf("\n");
}
