#include<iostream>
#include<list>
using namespace std;

class youTubeChannel{
public:  
    string Name;
    string OwnerName;
    int subscriberCount;
    list<string> publishedVideoTitle;
    
};

int main() {
    
    youTubeChannel ytChannel;

    ytChannel.Name = "Coder";
    ytChannel.OwnerName = "Prakhar";
    ytChannel.subscriberCount = 4000;
    ytChannel.publishedVideoTitle = {"video1","video2"};

    cout << "Name" << " " << ytChannel.Name << endl;
    cout << "OwnerName" << " " << ytChannel.OwnerName << endl;
    cout << "Subscriber Count" << " " << ytChannel.subscriberCount << endl;
    cout << "Published Video Title" << endl;
    for(string videoTitle:ytChannel.publishedVideoTitle) {
          cout << videoTitle << endl;   
    }



}