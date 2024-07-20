#include "HotelService.h"
#include <iostream>

HotelService::HotelService() {}

HotelService::HotelService(std::string serv, int id1, int rno) {
    serviceName = serv;
    id = id1;
    roomNo = rno;
}

void HotelService::display() {
    std::cout << "Service Name: " << serviceName << "\n"
              << "ID: " << id << "\n"
              << "Room No: " << roomNo << std::endl;
}
