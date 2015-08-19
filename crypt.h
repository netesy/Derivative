#include <QString>
#include <cryptopp/aes.h>
#include <cryptopp/cryptlib.h>
#include <cryptopp/hex.h>
#include <cryptopp/modes.h>
#ifndef CRYPT_H
#define CRYPT_H

class Crypt
{
public:

    Crypt();
     QString Crypted(const QString &uncrypted);
     QString DeCrypt(const QString &crypted);
};

#endif // CRYPT_H
