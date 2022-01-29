//mainthreadsock define the entry point for console application

#define WIN32_LEAN_AND_MEAN

#include <ws2tcpip.h>
#include <winsock2.h>
#include<process.h>
#include<memory>
#include<thread>
#include <stdio.h>
#include<iostream>
#include<string>
#include<regex>
#include<vector>
#include<mutex>
#include <chrono>
// Need to link with Ws2_32.lib
#pragma comment (lib, "Ws2_32.lib")
using std::cin;		using std::cout;
using std::endl;	using std::string;
using std::regex;   using std::regex_token_iterator;
using std::unique_ptr;
using std::make_unique;
using std::thread;
using std::vector;


static const char SERVER_IP[] = "127.0.0.1";//the default ip for client connecting

void clientThread(const int port,int clientNum);
void printBuffer(char* bufferPtr, int size);
void selectOneWebpage(string &sendbuf);

std::recursive_mutex g_r_lock;
std::mutex g_mutex;
int g_webpage=0;