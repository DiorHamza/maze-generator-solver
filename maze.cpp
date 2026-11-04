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