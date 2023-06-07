#include <fstream>
#include <iostream>
#include <sstream>

void replaceOccurrences(std::string& content, const std::string& s1, const std::string& s2)
{
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) 
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
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

    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cout << "Failed to open file: " << filename << '\n';
        return 1;
    }

    std::stringstream buffer;
    buffer << inputFile.rdbuf();

    std::string content = buffer.str();

    replaceOccurrences(content, s1, s2);

    inputFile.close();

    std::ofstream outputFile(newFilename.c_str());
    if (!outputFile) {
        std::cout << "Failed to open output file: " << newFilename << '\n';
        return 1;
    }

    outputFile << content;

    outputFile.close();

    return 0;
}
