#include<iostream>
#include<windows.h>
using namespace std;

char square[10]={'0',' ',' ',' ',' ',' ',' ',' ',' ',' '};
int player=1;

void board()
{
    system("cls");
    cout<<"\n\n\tTIC TAC TOE\n\n";
    cout<<"\n\n\tPLAYER1 (0)    PLAYER2 (X)\n\n";

    cout<<"   |   |   \n";
    cout<<" "<<square[1]<<" | "<<square[2]<<" | "<<square[3]<<" \n";
    cout<<"   |   |   \n";

    cout<<"   |   |   \n";
    cout<<" "<<square[4]<<" | "<<square[5]<<" | "<<square[6]<<" \n";
    cout<<"   |   |   \n";

    cout<<"   |   |   \n";
    cout<<" "<<square[7]<<" | "<<square[8]<<" | "<<square[9]<<" \n";
    cout<<"   |   |   \n";
}

int win()
{
        if ((square[1]=='X'||square[1]=='0')&&(square[1]==square[2]&&square[2]==square[3]))
        return 1;

        else if ((square[4]=='X'||square[4]=='0')&&(square[4]==square[5]&&square[4]==square[6]))
        return 1;

        else if ((square[7]=='X'||square[7]=='0')&&(square[7]==square[8]&&square[7]==square[9]))
        return 1;

        else if ((square[1]=='X'||square[1]=='0')&&(square[1]==square[4]&&square[1]==square[7]))
        return 1;

        else if ((square[2]=='X'||square[2]=='0')&&(square[2]==square[5]&&square[2]==square[8]))
        return 1;

        else if ((square[3]=='X'||square[3]=='0')&&(square[3]==square[6]&&square[6]==square[9]))
        return 1;

        else if ((square[1]=='X'||square[1]=='0')&&(square[1]==square[5]&&square[1]==square[9]))
        return 1;

        else if ((square[3]=='X'||square[3]=='0')&&(square[3]==square[5]&&square[3]==square[7]))
        return 1;

        else if (square[1]!=' '&&square[2]!=' '&&square[3]!=' '&&square[4]!=' '&&square[5]!=' '&&square[6]!=' '&&square[7]!=' '&&square[8]!=' '&&square[9]!=' ')
        return 0;

        else
        return -1;
}

void play(char mark,int choice)
{

        if (choice==1&&square[1]==' ')
        square[1]=mark;

        else if(choice==2&&square[2]==' ')
        square[2]=mark;

        else if(choice==3&&square[3]==' ')
        square[3]=mark;

        else if(choice==4&&square[4]==' ')
        square[4]=mark;

        else if(choice==5&&square[5]==' ')
        square[5]=mark;

        else if(choice==6&&square[6]==' ')
        square[6]=mark;

        else if(choice==7&&square[7]==' ')
        square[7]=mark;

        else if(choice==8&&square[8]==' ')
        square[8]=mark;

        else if(choice==9&&square[9]==' ')
        square[9]=mark;

        else
        {
        cout<<"illegal move\n";
        player--;
        }
}

int main()
{
    int choice,i;

    do
    {
        board();

        player=(player%2)?1:2;

        char mark=(player==1)?'X':'0';

        cout<<"player "<<player<<"enter a number(1-9): ";
        cin>>choice;

        play(mark,choice);

        i=win();
        player++;

     }while (i==-1);

      board();

      if (i==1)
      cout<<"==>\tPlayer "<<--player<<" wins\n";
      else
      cout<<"==> game drawn";
      return 0;
}
