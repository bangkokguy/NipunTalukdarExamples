/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "filehandler_types.h"

namespace FileHandler {

int _kOperationValues[] = {
  Operation::CREATE,
  Operation::DELETE,
  Operation::FILECONTENT,
  Operation::DIRCONTENT
};
const char* _kOperationNames[] = {
  "CREATE",
  "DELETE",
  "FILECONTENT",
  "DIRCONTENT"
};
const std::map<int, const char*> _Operation_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kOperationValues, _kOperationNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* BadOperation::ascii_fingerprint = "96705E9A3FD7B072319C71653E0DBB90";
const uint8_t BadOperation::binary_fingerprint[16] = {0x96,0x70,0x5E,0x9A,0x3F,0xD7,0xB0,0x72,0x31,0x9C,0x71,0x65,0x3E,0x0D,0xBB,0x90};

uint32_t BadOperation::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->what);
          this->__isset.what = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->reason);
          this->__isset.reason = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t BadOperation::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("BadOperation");
  xfer += oprot->writeFieldBegin("what", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->what);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.reason) {
    xfer += oprot->writeFieldBegin("reason", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->reason);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* Work::ascii_fingerprint = "EC8C8E8D6042A67E4AF0F04DA3F39A73";
const uint8_t Work::binary_fingerprint[16] = {0xEC,0x8C,0x8E,0x8D,0x60,0x42,0xA6,0x7E,0x4A,0xF0,0xF0,0x4D,0xA3,0xF3,0x9A,0x73};

uint32_t Work::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->op = (Operation::type)ecast0;
          this->__isset.op = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->filename);
          this->__isset.filename = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->data);
          this->__isset.data = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->rootdir);
          this->__isset.rootdir = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Work::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Work");
  xfer += oprot->writeFieldBegin("op", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->op);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("filename", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->filename);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("data", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->data);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("rootdir", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->rootdir);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

} // namespace