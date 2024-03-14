#include <set>
#include <string>

class User
{
public:
    // TODO: write special member functions, including default constructor!

    User();
    User(std::string name);

    User(const User &other) = delete;
    User &operator=(const User &other) = delete;

    User(User &&other);
    User &operator=(User &&other);

    // getter functions
    std::string getName() const;
    std::set<User> getFriends() const;

    // setter functions
    void setName(std::string name);

    // TODO: add the < operator overload here!
    

private:
    std::string name;
    std::set<User> friends;
};