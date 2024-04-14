#include <iostream>
#include <filesystem>
#include <string>


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

int countAllProblems(const std::string &path) {
    int count = 0;
    for (const auto &entry : std::filesystem::directory_iterator(path)) {
        if (entry.is_directory()) {
            if (entry.path().filename() == "Problems") {
                count += countAllCppFiles(entry.path().string());
            } else {
                count += countAllProblems(entry.path().string());
            }
        }
    }
    return count;
}

int main() {
    std::string path = "../Problemsets/";
    std::cout << "Total: " << countAllCppFiles(path) << std::endl;
    std::cout << "Problems: " << countAllProblems(path) << std::endl;

    int external = countAllCppFiles(path) - countAllProblems(path);
    std::cout << "External: " << external << std::endl;

    return 0;
}
