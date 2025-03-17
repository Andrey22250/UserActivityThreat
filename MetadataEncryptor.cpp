#include "MetadataEncryptor.h"

string MetadataEncryptor::encrypt(const string& data, char key) {
    string encrypted = data;
    for (int i = 0; i < data.size(); i++) {
        encrypted[i] = data[i] ^ key;
    }
    return encrypted;
}

string MetadataEncryptor::decrypt(const string& encryptedData, char key) {
    return encrypt(encryptedData, key); // XOR шифрование двустороннее
}