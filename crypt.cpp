#include "crypt.h"
#include <string>
#include <cryptopp/aes.h>
#include <cryptopp/cryptlib.h>
#include <cryptopp/hex.h>
#include <cryptopp/modes.h>
#include <cryptopp/filters.h>

using namespace std;
////////////////////////////////////////////////////////
/// \brief Crypt::Crypt
////////////////////////////////////////////////////////
Crypt::Crypt()
{
}
////////////////////////////////////////////////////////
/// \brief Crypt::Crypted
/// \param uncrypted
/// \return
////////////////////////////////////////////////////////
QString Crypt::Crypted(const QString &uncrypted)
{
/*    QString getData = uncrypted; //Data to process
//    std::string output;

//    QByteArray data = getData.toUtf8();
//    //Creating key and iv: <..>

//    //Creating AES encryptor: <..>

//    //Encrypting AES and Base32:
//    CryptoPP::StringSource((const byte*) data.data(),getData.size(), true,
//        new CryptoPP::StreamTransformationFilter( Encryptor,
//            new CryptoPP::Base32Encoder(
//                    new CryptoPP::StringSink(output)
//            ) // Base32Encoder
//        ) // StreamTransformationFilter
//    ); // StringSource

//    getData = QString::fromUtf8(output.c_str());
//    getData = output.c_str();
//    return(getData);
*/
//    string plain = uncrypted.toStdString();
//    string ciphertext;
//    // Hex decode symmetric key:
//    HexDecoder decoder;
//    decoder.Put( (byte *)PRIVATE_KEY, 32*2 );
//    decoder.MessageEnd();
//    word64 size = decoder.MaxRetrievable();
//    char *decodedKey = new char[size];
//    decoder.Get((byte *)decodedKey, size);
//    // Generate Cipher, Key, and CBC
//    byte key[ AES::MAX_KEYLENGTH ], iv[ AES::BLOCKSIZE ];
//    StringSource( reinterpret_cast<const char *>(decodedKey), true,
//                  new HashFilter(*(new SHA256), new ArraySink(key, AES::MAX_KEYLENGTH)) );
//    memset( iv, 0x00, AES::BLOCKSIZE );
//    CBC_Mode<AES>::Encryption Encryptor( key, sizeof(key), iv );
//    StringSource( plain, true, new StreamTransformationFilter( Encryptor,
//                  new HexEncoder(new StringSink( ciphertext ) ) ) );
//    return QString::fromStdString(ciphertext);
}
////////////////////////////////////////////////////////
/// \brief Crypt::DeCrypt
/// \param crypted
/// \return
////////////////////////////////////////////////////////
QString Crypt::DeCrypt(const QString &crypted)
{
//   QString getData = crypted;
//    QByteArray data;
//    data.append(getData);
//    std::string output;

//    //Creating key and iv:
//    byte key[ CryptoPP::AES::DEFAULT_KEYLENGTH ],
//          iv[ CryptoPP::AES::BLOCKSIZE ];

//    //Memsetting them: (randomization needed)
//    ::memset( key, 0x01, CryptoPP::AES::DEFAULT_KEYLENGTH );
//    ::memset(  iv, 0x01, CryptoPP::AES::BLOCKSIZE );

//    //Creating AES decryptor:
//    CryptoPP::CBC_Mode<CryptoPP::AES>::Decryption
//        Decryptor( key, sizeof(key), iv );

//    //Decrypting Base32 and AES
//    CryptoPP::StringSource((const byte*) data.data(), data.size(), true,
//        new CryptoPP::Base32Decoder(
//            new CryptoPP::StreamTransformationFilter( Decryptor,
//                new CryptoPP::StringSink(output)
//            ) // StreamTransformationFilter
//        ) // Base32Encoder
//    ); // StringSource

//    getData = QString::fromUtf8(output.c_str());
//    return(getData);

//    string plain;
//        string encrypted = crypted.toStdString();
//        // Hex decode symmetric key:
//        HexDecoder decoder;
//        decoder.Put( (byte *)PRIVATE_KEY,32*2 );
//        decoder.MessageEnd();
//        word64 size = decoder.MaxRetrievable();
//        char *decodedKey = new char[size];
//        decoder.Get((byte *)decodedKey, size);
//        // Generate Cipher, Key, and CBC
//        byte key[ AES::MAX_KEYLENGTH ], iv[ AES::BLOCKSIZE ];
//        StringSource( reinterpret_cast<const char *>(decodedKey), true,
//                      new HashFilter(*(new SHA256), new ArraySink(key, AES::MAX_KEYLENGTH)) );
//        memset( iv, 0x00, AES::BLOCKSIZE );
//        try {
//            CBC_Mode<AES>::Decryption Decryptor
//            ( key, sizeof(key), iv );
//            StringSource( encrypted, true,
//                          new HexDecoder(new StreamTransformationFilter( Decryptor,
//                                         new StringSink( plain ) ) ) );
//        }
//        catch (Exception &e) { // ...
//        }
//        catch (...) { // ...
//        }
//        return QString::fromStdString(plain);
}
