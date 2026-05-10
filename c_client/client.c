#include <sys/socket.h>
#include <netinet/in.h> // sockaddr_in
#include <arpa/inet.h>  // inet_addr
#include <unistd.h>     // close()

int main() {
  int sock = socket(AF_INET, SOCK_STREAM, 0);
  struct in_addr addy;
  addy.s_addr = inet_addr("127.0.0.1");
  
  struct sockaddr_in addr;
  addr.sin_family = AF_INET;
  addr.sin_port = htons(9000);
  addr.sin_addr = addy;

  int connection = connect(sock,(struct sockaddr *) &addr, sizeof(addr));

}
