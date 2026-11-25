#include "maze.h"
#include <iostream>

void showMaze(const std::vector<std::vector<char>>& grid) {

    for (int row = 0; row < grid.size(); row++) {
        for (int col = 0; col < grid[row].size(); col++) {
            std::cout << grid[row][col];
        }
        std::cout << "\n";
    }
}

void generateMaze(std::vector<std::vector<char>>& grid) {

    for (int row = 0; row < grid.size(); row++) {
        for (int col = 0; col < grid[row].size(); col++) {
            grid[row][col] = '#';
        }
    }

    int row = 1;
    int col = 1;
    grid[row][col] = ' ';

    int dRow = 0;
    int dCol = 2;

    int newRow = row + dRow;
    int newCol = col + dCol;

    grid[row + dRow / 2][col + dCol / 2] = ' ';
    grid[newRow][newCol] = ' ';
}
