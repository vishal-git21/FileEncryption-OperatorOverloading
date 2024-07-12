#include "FileEncryption.h"
#include <iostream>


FileEncryption::FileEncryption(const std::string& fileName) {
    loadFromFile(fileName);
}


void FileEncryption::loadFromFile(const std::string& fileName) {
    std::ifstream file(fileName);
    if (file.is_open()) {
        content.assign((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        file.close();
    } else {
        std::cerr << "Unable to open file: " << fileName << std::endl;
    }
}


void FileEncryption::saveToFile(const std::string& fileName) {
    std::ofstream file(fileName);
    if (file.is_open()) {
        file << content;
        file.close();
    } else {
        std::cerr << "Unable to open file: " << fileName << std::endl;
    }
}


void FileEncryption::encrypt() {
    for (char& c : content) {
        c += 3;
    }
}


void FileEncryption::decrypt() {
    for (char& c : content) {
        c -= 3;
    }
}


FileEncryption& FileEncryption::operator++() {
    encrypt();
    return *this;
}


FileEncryption& FileEncryption::operator--() {
    decrypt();
    return *this;
}


const std::string& FileEncryption::getContent() const {
    return content;
}
