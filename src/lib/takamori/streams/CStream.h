#pragma once

#include "IStream.h"

CGSS_NS_BEGIN

    class CGSS_EXPORT CStream : public IStream {

    public:

        virtual ~CStream() = default;

        virtual void Seek(int64_t offset, StreamSeekOrigin origin) override;

        virtual uint8_t ReadByte() override;

        virtual uint32_t WriteByte(uint8_t value) override;

        virtual void CopyTo(IStream &destination) override;

        virtual void CopyTo(IStream &destination, uint32_t bufferSize) override;

    protected:

        CStream() = default;

    private:

        CStream(const CStream &) = delete;

    };

CGSS_NS_END
