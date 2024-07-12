#ifndef FILEENCRYPTION_H
#define FILEENCRYPTION_H

#include <string>
#include <fstream>

class FileEncryption {
private:
    std::string content;

public:
    FileEncryption(const std::string& fileName);
    void encrypt();
    void decrypt();
    void saveToFile(const std::string& fileName);
    void loadFromFile(const std::string& fileName);


    FileEncryption& operator++();

    FileEncryption& operator--();

    const std::string& getContent() const;
};

#endif // FILEENCRYPTION_H
