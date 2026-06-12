#include <iostream>
using namespace std;
int plansza[10][10];
int c,b,x,y,C,B;
int main()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
           if((i+j)%2!=0)
           {
            if(i>4) plansza[i][j]=b;
            else if(i<5) plansza[i][j]=c;
            else plansza[i][j]=#;
           }
           else plansza[i][j]=#;
           }
    }
    int gracz_ruch=b;
    
        
}
