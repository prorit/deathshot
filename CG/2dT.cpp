#include <graphics.h>

#include <math.h>

#include <conio.h>
#include <dos.h>
#define PI 3.14159265
void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
  setcolor(YELLOW);
  line(x1, y1, x2, y2);
  line(x2, y2, x3, y3);
  line(x3, y3, x1, y1);
}
void translateTriangle(int *x1, int *y1, int *x2, int *y2, int *x3, int *y3, int tx, int ty) {
  *x1 += tx;
  *y1 += ty;
  *x2 += tx;
  *y2 += ty;
  *x3 += tx;
  *y3 += ty;
}
void scaleTriangle(int *x1, int *y1, int *x2, int *y2, int *x3, int *y3, float sx, float sy, int cx,
  int cy) {
  *x1 = cx + (*x1 - cx) * sx;

  *y1 = cy + (*y1 - cy) * sy;

  *x2 = cx + (*x2 - cx) * sx;

  *y2 = cy + (*y2 - cy) * sy;
  *x3 = cx + (*x3 - cx) * sx;
  *y3 = cy + (*y3 - cy) * sy;
}
void rotateTriangle(int *x1, int *y1, int *x2, int *y2, int *x3, int *y3, float angle, int cx, int cy) {
  float rad = angle * PI / 180.0;
  int x,
  y;
  x = *x1 - cx;
  y = *y1 - cy;
  *x1 = cx + (x * cos(rad) - y * sin(rad));
  *y1 = cy + (x * sin(rad) + y * cos(rad));
  x = *x2 - cx;
  y = *y2 - cy;
  *x2 = cx + (x * cos(rad) - y * sin(rad));
  *y2 = cy + (x * sin(rad) + y * cos(rad));
  x = *x3 - cx;
  y = *y3 - cy;
  *x3 = cx + (x * cos(rad) - y * sin(rad));
  *y3 = cy + (x * sin(rad) + y * cos(rad));
}
int main() {
  int gd = DETECT,
  gm;
  initgraph(&gd, &gm, "c://turboc3//bgi");
  int x1 = 100,
  y1 = 100;
  int x2 = 200,
  y2 = 100;
  int x3 = 150,
  y3 = 200;
  // Draw original triangle
  drawTriangle(x1, y1, x2, y2, x3, y3);
  delay(2000); // Wait for 2 seconds
  // Clear screen
  cleardevice();
  // Apply translation
  translateTriangle(&x1, &y1, &x2, &y2, &x3, &y3, 50, 50);
  drawTriangle(x1, y1, x2, y2, x3, y3);
  delay(2000);
  // Clear screen

  cleardevice();

  // Apply scaling

  scaleTriangle(&x1, &y1, &x2, &y2, &x3, &y3, 1.5, 1.5, 200, 150);
  drawTriangle(x1, y1, x2, y2, x3, y3);
  delay(2000);
  // Clear screen
  cleardevice();
  // Apply rotation
  rotateTriangle(&x1, &y1, &x2, &y2, &x3, &y3, 45, 200, 150);
  drawTriangle(x1, y1, x2, y2, x3, y3);
  delay(2000);
  // Close graph
  closegraph();
  return 0;
}