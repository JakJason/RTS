#include "network_data.hpp"
#include <iostream>

Network_Data::Network_Data() {}

Network_Data::Network_Data(sf::IpAddress ip, unsigned short port)
{
    m_ip = ip;
    m_port = port;
}

void Network_Data::set_network_timeout(sf::Time network_timeout)
{
    m_network_timeout = network_timeout;
}

void Network_Data::set_ip_port(sf::IpAddress ip, unsigned short port)
{
    m_ip = ip;
    m_port = port;
}

sf::Time Network_Data::get_network_timeout() const
{
    return m_network_timeout;
}

sf::IpAddress Network_Data::get_ip() const
{
    return m_ip;
}

unsigned short Network_Data::get_port() const
{
    return m_port;
}

void Network_Data::add_network_timeout(sf::Time network_timeout)
{
    m_network_timeout += network_timeout;
}

bool Network_Data::compare(sf::IpAddress ip, unsigned short port) const
{
    if(m_port == port)
        if(m_ip == ip)
            return true;

    return false;
}

void Network_Data::debug_show_size() const
{
    //keep up to date!
    std::wcout << sizeof(m_network_timeout) << L"\n"
               << sizeof(m_ip) << L"\n"
               << sizeof(m_port) << L"\n";
}
