#include "TXLib.h"

using namespace std;

void drawLuntik(int x, int y);
void drawKuzya(int x, int y);
void drawPchela(int x, int y);
void drawMila(int x, int y);
void drawSher(int x, int y);
void drawKapa(int x, int y);

int main() {
    txCreateWindow(900,600);
    drawMila(200,100);
    return 0;
}
void drawLuntik(int x, int y) {
    txSetFillColour(TX_PINK);
    txCircle(x, y, 30);

}

void drawKuzya(int x, int y) {
    txSetFillColour(TX_GREEN);
    txSetColour(TX_GREEN);
    txCircle(x,y, 15); // Head
    txLine(x, y+15, x, y+25); // Neck
    txEllipse(x-10, y+25, x+10, y+75); //Body
    txLine(x-10, y+40, x-30, y+70); // Right hand
    txLine(x+10, y+40, x+30, y+70); // Left hand
    txLine(x-5, y+70, x-25, y+120); // Right leg
    txLine(x+5, y+70, x+25, y+120); // Left leg
}

void drawPchela(int x, int y) {
    txSetFillColour(TX_ORANGE);
    txSetColour(TX_ORANGE);
    txCircle(x,y, 15); // Head
    txLine(x, y+15, x, y+25); // Neck
    txEllipse(x-10, y+25, x+10, y+75); //Body
    txLine(x-10, y+40, x-30, y+70); // Right hand
    txLine(x+10, y+40, x+30, y+70); // Left hand
    txLine(x-5, y+70, x-25, y+120); // Right leg
    txLine(x+5, y+70, x+25, y+120); // Left leg
}

void drawMila(int x, int y) {
    POINT body[3] = {{x, y}, {x-30, y+90}, {x+30, y+90}};
    txSetFillColour(TX_RED);
    txSetColour(TX_RED);
    txPolygon(body, 3); // Body
    txSetFillColour(TX_YELLOW);
    txSetColour(TX_YELLOW);
    txCircle(x,y, 25); // Head
    txSetColour(TX_BROWN);
    txLine(x-20, y+90, x-25, y+120); // Right leg
    txLine(x+20, y+90, x+25, y+120); // Left leg

}

void drawSher(int x, int y) {
}

void drawKapa(int x, int y) {
}
