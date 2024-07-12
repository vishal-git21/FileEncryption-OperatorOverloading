#include <iostream>
#include "FileEncryption.h"

int main() {

    FileEncryption file("input.txt");


    ++file;
    file.saveToFile("encrypt.txt");


    --file;
    file.saveToFile("decrypt.txt");


    std::ifstream originalFile("input.txt");
    std::ifstream decryptedFile("decrypt.txt");

    std::string originalContent((std::istreambuf_iterator<char>(originalFile)), std::istreambuf_iterator<char>());
    std::string decryptedContent((std::istreambuf_iterator<char>(decryptedFile)), std::istreambuf_iterator<char>());

    if (originalContent == decryptedContent) {
        std::cout << "Decryption successful, files are identical." << std::endl;
    } else {
        std::cout << "Decryption failed, files are different." << std::endl;
    }

    return 0;
}
