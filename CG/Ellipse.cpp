#include <graphics.h>
#include <math.h>

#include <conio.h>
void drawEllipse(int xc, int yc, int a, int b) {
  int x = 0,
  y = b;
  float a2 = a * a;
  float b2 = b * b;
  float fa2 = 4 * a2;
  float fb2 = 4 * b2;
  // Initial decision parameter for region 1
  float p1 = (b2 - (a2 * b) + (0.25 * a2));
  // Region 1
  while ((fa2 * y) > (fb2 * x)) {
    // Draw points in all four quadrants
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    if (p1 < 0) {
      p1 += fb2 * (2 * x + 3);
    } else {
      p1 += fb2 * (2 * x + 3) - fa2 * (2 * y - 2);
      y--;
    }
    x++;
  }
  // Initial decision parameter for region 2
  float p2 = (b2 * (x + 0.5) * (x + 0.5) + a2 * (y - 1) * (y - 1) - a2 * b2);
  // Region 2
  while (y >= 0) {
    // Draw points in all four quadrants
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);

    putpixel(xc - x, yc - y, WHITE);

    if (p2 > 0) {

      p2 += fa2 * (-2 * y + 3);
    } else {
      p2 += fa2 * (-2 * y + 3) + fb2 * (2 * x + 2);
      x++;
    }
    y--;
  }
}
int main() {
  int gd = DETECT,
  gm;
  initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
  int xc = 200; // Center x-coordinate
  int yc = 200; // Center y-coordinate
  int a = 100; // Semi-major axis length
  int b = 50; // Semi-minor axis length
  drawEllipse(xc, yc, a, b);
  getch(); // Wait for a key press
  closegraph();
  return 0;
}