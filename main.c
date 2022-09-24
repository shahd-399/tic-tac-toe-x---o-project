#include <stdio.h>
#include <stdlib.h>

int checkwin();
void board();

char cell[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9' };
int main()
{
int player ,position, i;
    int again;
    char current_move;

do{
        player=1;
    do
    {
        board();
        printf("Enter a number between [1,9] \n");

        if(player %2)
           {
            player=1;
            current_move='x';
           }
        else
           {
            player=2;
            current_move='o';
           }

       printf("It's %c turn\n",current_move) ;
       scanf("%i",&position);

         if (position == 1 && cell[0] == '1')
            cell[0] =current_move;

        else if (position == 2 && cell[1] == '2')
            cell[1] = current_move;

        else if (position == 3 && cell[2] == '3')
            cell[2] = current_move;

        else if (position == 4 && cell[3] == '4')
            cell[3] = current_move;

        else if (position == 5 && cell[4] == '5')
            cell[4]= current_move;

        else if (position == 6 && cell[5] == '6')
            cell[5] = current_move;

        else if (position == 7 && cell[6] == '7')
            cell[6] = current_move;

        else if (position == 8 && cell[7] == '8')
            cell[7] = current_move;

        else if (position == 9 && cell[8] == '9')
            cell[8] = current_move;
        else
        {
            printf("Invalid input\n");
            player--;
        }

        i = checkwin();

        player++;
    }while (i == 2);


          board();

          cell[0]='1';
          cell[1]='2';
          cell[2]='3';
          cell[3]='4';
          cell[4]='5';
          cell[5]='6';
          cell[6]='7';
          cell[7]='8';
          cell[8]='9';

    if (i==0)
        printf("draw Do you want to play another game?\n");
        else
        {
           if(player %2==0)
              printf("x wins the game.Do you want to play another game?\n");
          else
              printf("o wins the game.Do you want to play another game?\n");
        }
        printf("Enter 0 to exit, 1 to continue\n");
        scanf("%i" ,&again);
    }while (again==1);

        printf(" Thanks for playing! ");

        return 0;
}
void board()
{
    printf(" ------------------------ \n");
    printf("|       |       |        |\n");
    printf("|   %c   |   %c   |   %c    |\n", cell[0] ,cell[1], cell[2]);
    printf("|       |       |        |\n");
    printf(" ------------------------ \n");
    printf("|       |       |        |\n");
    printf("|   %c   |   %c   |   %c    |\n", cell[3] ,cell[4], cell[5]);
    printf("|       |       |        |\n");
    printf(" ------------------------ \n");
    printf("|       |       |        |\n");
    printf("|   %c   |   %c   |   %c    |\n", cell[6] ,cell[7], cell[8]);
    printf("|       |       |        |\n");
    printf(" ------------------------ \n");
    return;
}


int checkwin()
{
    if (cell[0] == cell[1] && cell[1] == cell[2])
        return 1;

    else if (cell[3] == cell[4] && cell[4] == cell[5])
        return 1;

    else if (cell[6] == cell[7] && cell[7] == cell[8])
        return 1;

    else if (cell[0] == cell[3] && cell[3] == cell[6])
        return 1;

    else if (cell[1] == cell[4] && cell[4] == cell[7])
        return 1;

    else if (cell[2] == cell[5] && cell[5] == cell[8])
        return 1;

    else if (cell[0] == cell[4] && cell[4] == cell[8])
        return 1;

    else if (cell[2] == cell[4] && cell[4] == cell[6])
        return 1;

    else if (cell[0] != '1' && cell[1] != '2' && cell[2] != '3' &&
             cell[3] != '4' && cell[4] != '5' && cell[5] != '6' &&
             cell[6] != '7' && cell[7] != '8' && cell[8] != '9')

        return 0;
    else
        return  2;
}
