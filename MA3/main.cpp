#include <map>
#include "TwitterData.hpp"
using namespace std;

int main(int argc, char* argv[])
{
    // Schema: UserName,Last,First,Email,NumTweets,MostViewedCategory
    string raw_data[5][6] = { {"rangerPower", "Smit", "Rick", "smitRick@gmail.com", "1117", "power lifting"},
                             {"kittyKat72", "Smith", "Kathryn", "kat@gmail.com", "56", "health"},
                             {"lexi5", "Anderson", "Alexis", "lexi5@gmail.com", "900", "education"},
                             {"savage1", "Savage", "Ken", "ksavage@gmail.com", "17", "president"},
                             {"smithMan", "Smith", "Rick", "rick@hotmail.com", "77", "olympics"} };
    TwitterData* twitter_data = new TwitterData[5];
    for (int i = 0; i < 5; ++i)
    {
        twitter_data[i].setUserName(raw_data[i][0]);
        twitter_data[i].setActualName(raw_data[i][2] + " " + raw_data[i][1]);
        twitter_data[i].setEmail(raw_data[i][3]);
        twitter_data[i].setNumTweets(stoi(raw_data[i][4]));
        twitter_data[i].setCategory(raw_data[i][5]);
    }


    //
    // Your code goes here
    //
    std::map<std::string, TwitterData> map1;
    for (int i = 0; i < 5; i++)
    {
        std::string username = twitter_data[i].getUserName();
        TwitterData data1 = twitter_data[i];
        map1[username] = data1;
    }
    std::map<std::string, TwitterData>::iterator map1_it = map1.begin();

    cout << "Print searchByName map: " << endl;
    while (map1_it != map1.end())
    {
        cout << "Key: " << map1_it->first << " Value: " << map1_it->second.print() << endl;
        ++map1_it;
    }

    if (map1.find("savage1") != map1.end())
    {
        cout << "Search for key: savage1 Value: " << map1["savage1"].print() << endl;
    }

    if (map1.erase("savage1"))
    {
        cout << "savage1 has been removed from the map!" << endl;
    }
    else
    {
        cout << "savage1 could not be removed from the map!" << endl;
    }

    std::map<std::string, TwitterData> map2;
    for (int j = 0; j < 5; j++)
    {
        std::string email = twitter_data[j].getEmail();
        TwitterData data2 = twitter_data[j];
        map2[email] = data2;
    }
   
    std::map<std::string, TwitterData>::iterator map2_it = map2.begin();

    cout << "Print searchByEmail map: " << endl;
    while (map2_it != map2.end())
    {
        cout << "Key: " << map2_it->first << " Value: " << map2_it->second.print() << endl;
        ++map2_it;
    }

    if (map2.find("kat@gmail.com") != map2.end())
    {
        cout << "Search for key: kat@gmail.com Value: " << map2["kat@gmail.com"].print() << endl;
    }
    

    if (map2.erase("kat@gmail.com"))
    {
        cout << "kat@gmail.com has been removed from the map!" << endl;
    }
    else
    {
        cout << "kat@gmail.com could not be removed from the map!" << endl;
    }

    return 0;
}