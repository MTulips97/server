#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#define PORT 2222

void main(){
	
	int SocketClient;
	int sock = 0, valread;
	struct sockaddr_in serverAddr;
	char buffer[1024];
	char *hello = "Assalamualaikum";

	SocketClient = socket(PF_INET, SOCK_STREAM, 0);
	printf(" Client Socket has successfully created. tunggu jap \n");

	memset(&serverAddr, '\0', sizeof(serverAddr));
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(PORT);
	serverAddr.sin_addr.s_addr = inet_addr("192.168.46.134");

	connect(SocketClient, (struct sockaddr*)&serverAddr, sizeof(serverAddr));
	printf("      .--..--..--..--..--..--.\n");
	printf("   .'    (`._   (_)     _   \n");
	printf("  .'     |  '._)         (_) |\n");
	printf("  | _.') |     .----..---.   |\n");
	printf("  |(_.'  |    |    .-|-.  |  |\n");
	printf("  |     0|    |   ( O| O) | o|\n");
	printf("  |   _  |  .--.____.'._.-.  |\n");
	printf("  |  (_) | o         -` .-`  |\n");
	printf("  |      |   |`-._ _ _ _ _|  |\n");
	printf("  |      |   |  `. |_||_|    |\n");
	printf("  |   o  |    |_      |      |     -.   .-.\n");
	printf("  |  .-. |     `--..-'   O   |     `.`-' .'\n");
	printf("  _.'  .'|     `-.-'         |-.__   ' .-'\n");
	printf(".' `-.` '|='=.='=.='=.='=    |.__ `-'.'\n");
	printf("`-._  `. |___________________|    `-.'\n");
	printf("   .'   )| '=' '='__ '=' |\n");
	printf("   `._.`  '---------------'\n");
	printf("           ||___||   ||___||n");
	printf("              ||       ||\n");
	printf("              ||_.-.   ||_.-.\n");
	printf("             (_.--__) (_.--__)\n");
	printf("ok dah connect dengan server.\n");

	recv(SocketClient, buffer, 1024, 0);
	printf("[+] Hi, my name is Wila. Nice to meet U!: %s\n", buffer);
	
}
