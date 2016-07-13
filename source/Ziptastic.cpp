#include <iostream>
#include <string>

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
        MakeRequest(string url);
        GetApiKey();
}

//member functions
Ziptastic::Ziptastic(string key)
{
    apiKey = key;
}

void Ziptastic::ForwardGeo()
{
    
}

void Ziptastic::ReverseGeo()
{

}

string Ziptastic::MakeRequest()
{

}

void Ziptastic::GetApiKey()
{
    cout << "API KEY : " << apiKey;
}

int main()
{
    Ziptastic Ziptastic("asdasdasdasdasd");
    Ziptastic.GetApiKey();
}