#include "lib.h"

int main() {
  char *buf[2048];
  char ha[2048] = "hahaha";
  *buf = ha;
  std::cout << "hatokani" << std::endl;
  Udp_Recieve udp = Udp_Recieve();
  udp.recieve(12345, "239.192.1.2");
  *buf = udp.get_buf();
  std::cout << *buf << std::endl;
}
