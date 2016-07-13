#include <iostream>

using namespace std;

//base class
class Ziptastic
{
    private:
        string apiKey;
    public:
        Ziptastic(string key); // Constructor
        ForwardGeo(string zip);
        ReverseGeo(string latitude, string longitude);
}
