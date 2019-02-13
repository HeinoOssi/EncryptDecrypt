#ifndef ENCRYPTDECRYPT_H
#define ENCRYPTDECRYPT_H
#include <iostream>

class EncryptDecrypt
{
public:

	std::string Encrypt(std::string text, char key) {
		std::string Encrypted = text;
		// No encryption key given -> return
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

};

#endif