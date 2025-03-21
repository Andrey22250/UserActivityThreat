#pragma once
#include <string>
#include "UserActivityCollector.h"

using namespace std;

class MetadataEncryptor : public IDataCollector
{
public:
    static string encrypt(const string& data, char key);
    static string decrypt(const string& encryptedData, char key);
};