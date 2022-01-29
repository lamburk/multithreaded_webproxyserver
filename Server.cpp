#define WIN32_LEAN_AND_MEAN

#include<ws2tcpip.h>
#include<winsock2.h>
#include<process.h>
#include<memory>
#include<thread>
#include<stdio.h>
#include<iostream>
#include<string>
#include<regex>
#include<vector>
#include<mutex>
#include<chrono>
#include <fstream>
// Need to link with Ws2_32.lib
#pragma comment (lib, "Ws2_32.lib")
using std::cin;		using std::cout;
using std::endl;	using std::string;
using std::regex;   using std::regex_token_iterator;
using std::unique_ptr;
using std::make_unique;
using std::thread;
using std::vector;
using std::ofstream;

static const char SERVER_IP[] = "127.0.0.1"; //default server ip (localhost)

void startThreadPorts(const int port, FILE *logFile);
void servClient(SOCKET clientInstance, int port, FILE *logfile);
void printBuffer(char* bufferPtr, int size);
void putClientOnDiferrentPort(SOCKET clientInstance,int port);
void getClientResource(SOCKET clientInstance);
void openFileWithPathAndSend(string filePath, SOCKET clientInstance);
void sendFile(FILE* m_file, SOCKET clientInstance);
string processRequest(char* bufferPtr);
string getFilePath(string p_toParse);
void printClientPortAndIP(SOCKET clientInstance, int port, FILE *logfile);
int roundRobinGetNextPort(int port);