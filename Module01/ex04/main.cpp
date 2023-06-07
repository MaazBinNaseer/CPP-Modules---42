#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    size_t startPos = 0;
    while((startPos = str.find(from, startPos)) != std::string::npos) {
        str.replace(startPos, from.length(), to);
        startPos += to.length(); // Handles case where 'to' is a substring of 'from'
    }
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Usage: ./replace filename s1 s2\n";
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string newFilename = filename + ".replace";
    std::string buffer;

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

    std::stringstream strStream;
    strStream << inputFile.rdbuf();
    buffer = strStream.str();

    size_t pos = 0;
    while ((pos = buffer.find(s1, pos)) != std::string::npos) {
        buffer.replace(pos, s1.length(), s2);
        pos += s2.length();
    }

    outputFile << buffer;

    inputFile.close();
    outputFile.close();

    return 0;
}

