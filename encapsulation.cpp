#include<iostream>
#include<list>
using namespace std;

class youTubeChannel{
private:  
    string Name;
    string OwnerName;
    int subscriberCount;
    list<string> publishedVideoTitle;

public:

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

    void subscribe() {
        subscriberCount++;
    }

    void unsubscribe(){
       subscriberCount--;
    } 

    void publishVideo(string name){
        publishedVideoTitle.push_back(name);
    }

    list<string> getVideoTitles(){
        return publishedVideoTitle;
    }

    string getName(){
       return Name; 
    }

    void setName(string name){
        Name = name;
    }

};

int main() {
    
    youTubeChannel ytChannel("coder","prakhar kumar");
    
    ytChannel.subscribe();
    ytChannel.subscribe();
    ytChannel.subscribe();
    ytChannel.subscribe();
    ytChannel.subscribe();
    ytChannel.subscribe();
    ytChannel.subscribe();
    ytChannel.subscribe();
    ytChannel.unsubscribe();    

    ytChannel.publishVideo("video1");
    ytChannel.publishVideo("video2"); 

    list<string> publishedVideos = ytChannel.getVideoTitles();
    ytChannel.printInformation();



}