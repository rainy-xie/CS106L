#include "user.h"
#include <set>
#include <iostream>
#include <string>

User::User()
{
    this->name = "";
}

User::User(std::string name)
{
    // TODO: Implement the additional constructor here!
    this->name = name;
}

User::User(User &&other) : name(std::move(other.name)), friends(std::move(other.friends))
{
    // this->name = std::move(other.name);
    // this->friends = std::move(other.friends);
}

User &User::operator=(User &&other)
{
    if (this != &other)
    {
        name = std::move(other.name);
        friends = std::move(other.friends);
    }
    return *this;
}

std::string User::getName() const
{
    return name;
}

std::set<User> User::getFriends() const
{
    return friends;
}

void User::setName(std::string name)
{
    this->name = name;
}

// TODO: Implement the < operator overload here!