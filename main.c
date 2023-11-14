#include "Include/raylib.h"
#define WIDTH 800
#define HEIGHT 600

int main(void) {
    InitWindow(WIDTH, HEIGHT, "Nishanth's Space");
    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(WHITE);
        DrawCircle(WIDTH/2, HEIGHT/2, 200, BLACK);

        EndDrawing();
    }

    return 0;
}