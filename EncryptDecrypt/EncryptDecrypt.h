#ifndef ENCRYPTDECRYPT_H
#define ENCRYPTDECRYPT_H
#include <iostream>

class EncryptDecrypt
{
public:

	// Encryption with given key
	std::string Encrypt(std::string text, char key) {
		std::string Encrypted = text;
		// No encryption key given -> return
		// TODO: Maybe when encryption key is not given, we should use the private key?
		if (!key) return 0;

		for (int i = 0; i < text.size(); i++)
		{
			Encrypted[i] = text[i] ^ key;
		}

		return Encrypted;

	}

	std::string Decrypt(std::string text, char key) {
		std::string Encrypted = text;
		// No encryption key given -> return
		if (!key) return 0;

		for (int i = 0; i < text.size(); i++)
		{
			Encrypted[i] = text[i] ^ key;
		}

		return Encrypted;
	}

	// Encryption with private key
	std::string Encrypt(std::string text) {
		std::string output = text;

		for (int i = 0; i < text.size(); i++) {
			output[i] = text[i] ^ EncryptKey[i % (sizeof(EncryptKey) / sizeof(char))];
		}
		return output;
	}

	std::string Decrypt(std::string text) {
		std::string output = text;

		for (int i = 0; i < text.size(); i++) {
			output[i] = text[i] ^ EncryptKey[i % (sizeof(EncryptKey) / sizeof(char))];

		}

		return output;

	}
private:
	// Encryption key, the more letters the better
	// Can be any letters
	char EncryptKey[5] = { 'E', 'K', 'E', 'E', 'Y' };


};

#endif