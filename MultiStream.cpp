#include "MultiStream.h"


void MultiStream::setTelnet(Stream *stream) {
  telnet = stream;
}
void MultiStream::setSerial(Stream *stream) {
  serial = stream;
}

/*
void MultiStream::begin(int val) {
  telnet->begin(val);
  serial->begin(val);
}
*/
int MultiStream::read() {
  return 0;
}

int MultiStream::available() {
  return 0;
}
int MultiStream::peek() {
  return 0;
}



size_t MultiStream::write(uint8_t val) {
  serial->write(val);
  telnet->write(val);
  return 0;
}
size_t MultiStream::write(const uint8_t *buf, size_t size) {
  serial->write(buf, size);
  telnet->write(buf,size);
  return 0;
}

void MultiStream::flush() {
  telnet->flush();
  serial->flush();
}
