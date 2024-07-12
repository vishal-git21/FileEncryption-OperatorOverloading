# File Encryption System Using Operator Overloading

This project implements a file encryption and decryption system using operator overloading in C++. The system reads the contents of `input.txt`, encrypts it using a simple Caesar cipher (shift by 3), writes the encrypted content to `encrypt.txt`, then decrypts it and writes the decrypted content to `decrypt.txt`. If the system works properly, the content of `decrypt.txt` should match `input.txt`.

## Features

- Encrypts a file using a simple Caesar cipher
- Decrypts the encrypted file back to its original content
- Uses operator overloading for encryption and decryption operations
- File handling to read from and write to files

## Operator Overloading

- **Encryption:** Overloaded the prefix increment (`++`) operator to encrypt the file content.
- **Decryption:** Overloaded the prefix decrement (`--`) operator to decrypt the file content.

## Project Structure

```plaintext
FileEncryption-OperatorOverloading/
├── FileEncryption.h
├── FileEncryption.cpp
├── main.cpp
├── input.txt
└── README.md
```

## Files

- **FileEncryption.h:** Header file containing the `FileEncryption` class declaration.
- **FileEncryption.cpp:** Implementation of the `FileEncryption` class methods.
- **main.cpp:** Main file demonstrating the use of the `FileEncryption` class.
- **input.txt:** Example input file to be encrypted and decrypted.
- **README.md:** Project documentation.

## Usage

1. Clone the repository:
    ```sh
    git clone https://github.com/vishal-git21/FileEncryption-OperatorOverloading.git
    cd FileEncryption-OperatorOverloading
    ```

2. Create an `input.txt` file in the project directory with the content you want to encrypt.

3. Compile the program:
    ```sh
    g++ -o FileEncryptionSystem main.cpp FileEncryption.cpp
    ```

4. Run the program:
    ```sh
    ./FileEncryptionSystem
    ```

5. Check the generated `encrypt.txt` and `decrypt.txt` files in the project directory. The content of `decrypt.txt` should match `input.txt` if the encryption and decryption processes are correct.

## Example

- **input.txt:** Contains the original text to be encrypted.
- **encrypt.txt:** Contains the encrypted text.
- **decrypt.txt:** Contains the decrypted text, which should match `input.txt`.
