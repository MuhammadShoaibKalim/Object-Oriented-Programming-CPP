#ifndef HOTELSERVICE_H
#define HOTELSERVICE_H

#include <string>

class HotelService {
protected:
    std::string serviceName;
    int id;
    int roomNo;

public:
    HotelService();
    HotelService(std::string serv, int id1, int rno);
    virtual void display();
};

#endif
