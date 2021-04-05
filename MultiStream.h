#ifndef _MULTISTREAM_H_
#define _MULTISTREAM_H_
#include <Stream.h>
class MultiStream : public Stream{
  private:
    Stream *telnet;
    Stream *serial;
  public:
    


    void setTelnet(Stream*);
    void setSerial(Stream*);
    
    void begin(int);
    void stop();

    int read();
    int available();
    int peek();

    virtual size_t write(uint8_t val);
    virtual size_t write(const uint8_t *buf, size_t size);
    using Print::write; // pull in write(str) and write(buf, size) from Print
    virtual void flush();
};




#endif
