#include "server_base.hpp"

void server_base::start()


void ServerBase::process_request_and_respond(std::shared_ptr<socket_type> socket) const
{
	
}

Request ServerBase::parse_request(std::istream& stream) const
{

}

void ServerBase::respond(std::shared_ptr<socket_type> socket, std::shared_ptr<Request> request)const
{

}
