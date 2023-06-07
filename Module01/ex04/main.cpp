#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Usage: ./replace filename s1 s2\n";
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string newFilename = filename + ".replace";

    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cout << "Failed to open file: " << filename << '\n';
        return 1;
    }

    std::ofstream outputFile(newFilename.c_str());
    if (!outputFile) {
        std::cout << "Failed to open output file: " << newFilename << '\n';
        inputFile.close();
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::istringstream lineStream(line);
        std::string word;
        bool firstWord = true;
        while (lineStream >> word) {
            if (!firstWord) {
                outputFile << " ";
            }
            if (word == s1) {
                outputFile << s2;
            } else {
                outputFile << word;
            }
            firstWord = false;
        }
        outputFile << "\n";
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
