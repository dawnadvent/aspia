//
// Aspia Project
// Copyright (C) 2019 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef CRYPTO__MESSAGE_ENCRYPTOR_OPENSSL_H
#define CRYPTO__MESSAGE_ENCRYPTOR_OPENSSL_H

#include "base/macros_magic.h"
#include "base/memory/byte_array.h"
#include "crypto/message_encryptor.h"
#include "crypto/openssl_util.h"

namespace crypto {

class MessageEncryptorOpenssl : public MessageEncryptor
{
public:
    ~MessageEncryptorOpenssl();

    static std::unique_ptr<MessageEncryptor> createForAes256Gcm(
        const base::ByteArray& key, const base::ByteArray& iv);

    static std::unique_ptr<MessageEncryptor> createForChaCha20Poly1305(
        const base::ByteArray& key, const base::ByteArray& iv);

    // MessageEncryptor implementation.
    size_t encryptedDataSize(size_t in_size) override;
    bool encrypt(const uint8_t* in, size_t in_size, uint8_t* out) override;

private:
    MessageEncryptorOpenssl(EVP_CIPHER_CTX_ptr ctx, const base::ByteArray& iv);

    EVP_CIPHER_CTX_ptr ctx_;
    base::ByteArray iv_;

    DISALLOW_COPY_AND_ASSIGN(MessageEncryptorOpenssl);
};

} // namespace crypto

#endif // CRYPTO__MESSAGE_ENCRYPTOR_OPENSSL_H