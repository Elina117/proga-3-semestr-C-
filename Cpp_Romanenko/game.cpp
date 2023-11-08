#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h> // for _kbhit and _getch
#include <windows.h> // for Sleep

// Function to check if a key is pressed
bool IsKeyPressed(int key) {
    return _kbhit() && _getch() == key;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)); // Seed the random number generator

    int p = 15; // Initial position of ">"
    int score = 0; // Score counter

    while (true) { // Game loop
        system("cls"); // Clear the console screen

        // Randomly generate an asterisk (*) at a random position
        int x = 30;
        int y = rand() % 18;
        if (x == 0) x++; // Ensure the asterisk doesn't appear at the left edge

        // Print the game elements
        for (int i = 0; i < 18; i++) {
            for (int j = 0; j < 32; j++) {
                if (i == 0 && j == 0) std::cout << ">"; // Print the character
                else if (i == y && j == x) std::cout << "*"; // Print the asterisk
                else std::cout << " ";
            }
            std::cout << std::endl;
        }

        std::cout << "Score: " << score << std::endl;

        // Check for key presses
        if (IsKeyPressed('7')) p--; // Move the character up
        if (IsKeyPressed('6')) p++; // Move the character down

        // Check for collision
        if (y == 0 && x == 0) {
            std::cout << "Game Over" << std::endl;
            break; // Exit the game loop
        }

        Sleep(70); // Sleep for a short time (70 milliseconds)
        score++; // Increase the score
    }

    return 0;
}

