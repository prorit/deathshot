






































/*
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main() {
    int Pn[3][3];
    int tx, ty, x1, x2, x3, y1, y2, y3;
    clrscr();
    int gd = DETECT, gm = 0;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    printf("enter the first co-ordinates: ");
    scanf("%d %d", &x1, &y1);
    printf("enter the second co-ordinates: ");
    scanf("%d %d", &x2, &y2);
    printf("enter the third co-ordinates: ");
    scanf("%d %d", &x3, &y3);
    printf("enter the value of tx and ty: ");
    scanf("%d %d", &tx, &ty);

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    int T[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {tx, ty, 1}
    };

    int P[3][3] = {
        {x1, y1, 1},
        {x2, y2, 1},
        {x3, y3, 1}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Pn[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                Pn[i][j] += P[i][k] * T[k][j];
            }
        }
    }

    line(Pn[0][0], Pn[0][1], Pn[1][0], Pn[1][1]);
    line(Pn[1][0], Pn[1][1], Pn[2][0], Pn[2][1]);
    line(Pn[2][0], Pn[2][1], Pn[0][0], Pn[0][1]);

    getch();
    closegraph();
}
*/
