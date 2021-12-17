#include <fstream>
#include <iostream>

void puzzle1() {
    std::ifstream file("input.txt");
    std::string s;
    while(std::getline(file, s)) {
        std::cout << s << std::endl;
    }
}
int main() {
    puzzle1();
}