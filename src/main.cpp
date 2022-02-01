#include "raylib.h"

constexpr auto SCREEN_WIDTH  = 800;
constexpr auto SCREEN_HEIGHT = 450;

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "keyboard input");
    SetTargetFPS(60);

    Vector2 ballPosition = { (float)SCREEN_WIDTH / 2, (float)SCREEN_HEIGHT / 2 };

    // Texture2D texture = LoadTexture(ASSETS_PATH"test.png");

    while (!WindowShouldClose())
    {
        // update
        if (IsKeyDown(KEY_D)) ballPosition.x += 2.0f;
        if (IsKeyDown(KEY_A)) ballPosition.x -= 2.0f;
        if (IsKeyDown(KEY_W)) ballPosition.y -= 2.0f;
        if (IsKeyDown(KEY_S)) ballPosition.y += 2.0f;

        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("move ball with wasd keys", 10, 10, 20, DARKGRAY);
            DrawCircleV(ballPosition, 50, MAROON);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
