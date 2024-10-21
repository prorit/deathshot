






































/*
#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main(){
 clrscr();
 int gd=DETECT, gm;
 initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

 int x=50, y=50;

 // alphabet R
 int R[7][5] = {
  {1,1,1,1,0},
  {1,0,0,0,1},
  {1,0,0,0,1},
  {1,1,1,1,0},
  {1,0,1,0,0},
  {1,0,0,1,0},
  {1,0,0,0,1},
 };

 // alphabet G
 int G[7][5] = {
  {0,1,1,1,0},
  {1,0,0,0,1},
  {1,0,0,0,0},
  {1,0,0,0,0},
  {1,0,1,1,1},
  {1,0,0,0,1},
  {0,1,1,1,0},
 };

 for(int i=0; i<7; i++){
  for(int j=0; j<5; j++){
   if(R[i][j]) putpixel(x+j,y+i,YELLOW);
  }
 }

 x += 10;

 for(int j=0; j<7; j++){
  for(int i=0; i<5; i++){
   if(G[j][i]) putpixel(x+i,y+j,YELLOW);
  }
 }

 getch();
 closegraph();
 return 0;
}
*/
