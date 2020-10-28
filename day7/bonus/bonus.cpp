#include <iostream>

#include "/usr/include/pcap/pcap.h"



int main(){

    pcap_t *descr;
  char errbuf[PCAP_ERRBUF_SIZE];

  // open capture file for offline processing
  descr = pcap_open_offline("dump.pcap", errbuf);
  if (descr == NULL) {
      std::cout << "pcap_open_live() failed: " << errbuf << std::endl;
      return 1;
  }
/*
  // start packet processing loop, just like live capture
  if (pcap_loop(descr, 0, packetHandler, NULL) < 0) {
      std::cout << "pcap_loop() failed: " << pcap_geterr(descr);
      return 1;
  }
*/
  std::cout << "capture finished" << std::endl;
    
    return 0;
}