﻿#include "Network.h"

#define DEBUG

//Client object, created with hostname and port
Client::Client(std::string hostname, std::string port)
{
    portno = stoi(port);
    server = gethostbyname(hostname.c_str());
    if (server == NULL) {
        fprintf(stderr,"ERROR, no such host\n");
        exit(0);
    }
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0)
        error("ERROR opening socket");
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    bcopy((char *)server->h_addr, (char *)&serv_addr.sin_addr.s_addr, server->h_length);
    serv_addr.sin_port = htons(portno);
}
Client::~Client()
{
	//Deconstructor 
}

//Attempts connection to server 
void Client::connectToServer()
{
  int tmp = connect(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr));
  if (tmp < 0)
      error("ERROR connecting");
  else
      fprintf(stdout, "Connected to Server successfully!\n");
}
void Client::sendMessage(std::string message)
{
  bzero(buffer,1000);
  message.copy(buffer, 999, 0);
  //fgets(buffer,255,stdin);
  n = write(sockfd,buffer,strlen(buffer));
  if (n < 0){
    error("ERROR writing to socket");
  }
  //#ifdef DEBUG
  //std::cout << "Message sent: " << message << std::endl;
  //#endif

}
//Reads message from the server socket
std::string Client::receiveMessage()
{
  std::string message;
  bzero(buffer,1000);
  n = read(sockfd,buffer,999);
  if (n < 0){
    error("ERROR reading from socket");
  }
  else{
    message = buffer;
  }
  return message;
}
//Closes connection to server 
void Client::closeConnection()
{
  close(sockfd);
  fprintf(stdout, "Connection to Server terminated by the Client!\n");
}
//Error flag 
void Client::error(const char *msg)
{
    perror(msg);
    exit(0);
}
