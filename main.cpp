#include <iostream>
#include <string>

int main() {

    std::string user_command{};

    while (true) {

        std::cout << "\n Maze Generator + Solver \n";
        std::cout << "1. Generate maze\n";
        std::cout << "2. Show maze\n";
        std::cout << "3. Solve maze\n";
        std::cout << "4. Quit\n\n";

        std::cout << "Enter a choice: ";

        std::getline(std::cin, user_command);

        if (user_command == "1") {
            // generateMaze()
        }

        else if (user_command == "2") {
            // showMaze()
        }

        else if (user_command == "3") {
            // solveMaze()
        }

        else if (user_command == "4") {
            break;
        }

        else {
            std::cout << "Invalid Command, Try Again \n";
        }

    }

    return 0;
}