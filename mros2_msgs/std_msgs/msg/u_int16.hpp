#include <string>

namespace std_msgs
{
namespace msg
{
class UInt16
{
public:
  std::string getTypeName();
  uint16_t data;
  void copyToBuf(uint8_t *addrPtr)
  {
    memcpy(addrPtr, &data, 2);
    addrPtr += 2;
    *addrPtr = 0;
  }

  void copyFromBuf(const uint8_t *addrPtr)
  {
    memcpy(&data, addrPtr, 2);
    addrPtr += 2;
  }

  uint8_t getTotalSize()
  {
    return 2;
  }
private:
  std::string type_name = "std_msgs::msg::dds_::UInt16";
};
}//namspace msg
}//namespace std_msgs

namespace message_traits
{

template<>
struct TypeName<std_msgs::msg::UInt16*> {
  static const char* value()
  {
    return "std_msgs::msg::dds_::UInt16_";
  }
};

}
