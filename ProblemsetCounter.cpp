// make a function that read every file, and sub directory and their files, all being cpp, from the folder named Problemsets, and return the number of cpp files in the folder and its subdirectories if there are any
#include <iostream>
#include <filesystem>
#include <string>
#include <vector>

int countAllCppFiles(const std::string &path) {
    int count = 0;
    for (const auto &entry : std::filesystem::directory_iterator(path)) {
        if (entry.is_directory()) {
            count += countAllCppFiles(entry.path().string());
        } else if (entry.path().extension() == ".cpp") {
            ++count;
        }
    }
    return count;
}

int main() {
    std::string path = "../Problemsets/";
    std::cout << "Total: " << countAllCppFiles(path) << std::endl;

    return 0;
}
