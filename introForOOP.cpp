#include<iostream>
#include<list>
using namespace std;

class youTubeChannel{
public:  
    string Name;
    string OwnerName;
    int subscriberCount;
    list<string> publishedVideoTitle;

    youTubeChannel(string name,string ownerName){
        Name = name;
        OwnerName = ownerName;
        subscriberCount = 0;
    }

    void printInformation(){
        cout << "Name" << " " << Name << endl;
        cout << "OwnerName" << " " << OwnerName << endl;
        cout << "Subscriber Count" << " " <<  subscriberCount << endl;
        cout << "Published Video Title" << endl;
        for(string videoTitle:publishedVideoTitle) {
          cout << videoTitle << endl;   
        }

    }

};

int main() {
    
    youTubeChannel ytChannel("coder","prakhar kumar");
    youTubeChannel ytChannel2("prak","prakhar");

    ytChannel.publishedVideoTitle.push_back("video1");
    ytChannel.publishedVideoTitle.push_back("video2");

   ytChannel.printInformation();



}