//Code by Tayra Raqeeb

#include<iostream>
#include<string>


using namespace std;
//Displaying Board
void board_Display(char Board[][5])
{   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<Board[i][j];
        }
        if(i!=2)
            cout<<"\n"<<"------"<<endl;
    }
}

//Game Logic
int Game_process(char Board[][5],int row, int col,char player)
{
  if(col==1)
     col+=1;
else if(col==2)
     col+=2;
    int count=0;
  
    
    if(Board[row][col]=='X' || Board[row][col]=='O')
    {
        cout<<"\nWRONG MOVE! ALready played !\n";
        return 0;
    }
    else 
    {
        Board[row][col]=player;
    }

    //Winning
    if((Board[0][0]==player && Board[1][2]==player && Board[2][4]==player)
    ||(Board[0][0]==player && Board[0][2]==player && Board[0][4]==player)
    ||(Board[1][0]==player && Board[1][4]==player && Board[1][4]==player)
    ||(Board[2][0]==player && Board[2][2]==player && Board[2][4]==player)
    ||(Board[0][0]==player && Board[1][0]==player && Board[2][0]==player)
    ||(Board[0][2]==player && Board[1][2]==player && Board[2][2]==player)
    ||(Board[0][4]==player && Board[1][4]==player && Board[2][4]==player))
    {
        if(player=='X')
        {
            cout<<"\nPlayer 1 win the game!\n";
            return 1;

        }
        else if(player=='O')
        {
            cout<<"\nPlayer 2 wins the game! \n";
            return 2;
        }
    }
    

//Checking if there any move left
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(Board[i][j]==' ')
            {
                ++count;
            }
        }
    }
    if(count==0)
    {
        cout<<"\nGame Draw!\n";
        return -1;
    }

    return 3;
}

//Main Function
int main (void)
{

    char Board[3][5]={{' ','|',' ','|',' '},
                      {' ','|',' ','|',' '},
                      {' ','|',' ','|',' '}};

    cout<<"\n*************************";
    cout<<"\nTic Tac Toe Game \n";
    cout<<"\n*************************";
    int row,col;
    char player1='X',player2='O';
    int checker=9;
    int user_input1;
        while(1)
        {
           board_Display(Board);
            cout<<"\nPlayer 1(X) ROw(0-2) Col(0-2):";
            cin>>row;
            cin>>col;
            
            if(row<0 || row>2 || col<0 || col>2)
            {
                cout<<"\nInvalid input\n";
                continue;
            }

            checker=Game_process(Board,row,col,player1);

            if(checker==0)
            {
                continue;
            }
            else if(checker==-1)
            {
                board_Display(Board);
                break;
            }
            else if(checker==1 || checker==2)
           { 
                board_Display(Board);
                break;
           }
             board_Display(Board);

            while(1)
             {
             cout<<"\nPlayer 2(O):";
             cin>>row;
             cin>>col;
             if(row<0 || row>2 || col<0 || col>2)
             {
                 cout<<"\nInvalid input\n";
                 continue;
             }
            checker=Game_process(Board,row,col,player2);
            if(checker==0)
            {
                continue;
            }
            else if(checker==-1)
            {
                break;
            }
            else if(checker==1 || checker==2)
                break;
            else
                break;
        }
        
        }
        
    }
    




