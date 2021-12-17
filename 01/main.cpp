#include <fstream>
#include <iostream>
#include <vector>

void puzzle1(const std::vector<int>& measurements) {
    int increases = 0;
    for(int i = 1; i < measurements.size(); i++) {
        if(measurements[i] > measurements[i - 1])
            increases++;
    } 
    std::cout << "Number of increases: " << increases << std::endl;
}

void puzzle2(const std::vector<int>& measurements) {
    int increases = 0;
    std::vector<int> windows;
    for(int i = 2; i < measurements.size(); i++) {
        windows.push_back(measurements[i] + measurements[i - 1] + measurements[i - 2]);
    }

    for(int i = 1; i < windows.size(); i++) {
        if(windows[i] > windows[i - 1])
            increases++;
    }
    std::cout << "Number of increases: " << increases << std::endl;
}

int main() {

    // Open the file
    std::ifstream file("input.txt");
    std::vector<int> measurements;
    while(file.eof() == false) {
        int next;
        file >> next;
        measurements.push_back(next);
    }
    file.close();
    
    puzzle1(measurements);
    puzzle2(measurements);
}
