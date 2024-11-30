#include<iostream>
#include<list>
using namespace std;

class youTubeChannel{
private:  
    string Name;
    int subscriberCount;
    list<string> publishedVideoTitle;

protected:
    string OwnerName;    

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

class cookingYouTubeChannel:public youTubeChannel{
public:

    cookingYouTubeChannel(string name, string ownerName) : youTubeChannel(name, ownerName){

    }

    void practice(){
        cout << OwnerName << " is practicing" << endl;
    }

}; 

int main() {
    
    cookingYouTubeChannel cookingytChannel("prak cooks","prakhar kumar");
    cookingYouTubeChannel cookingytChannel2("amy cooks","amy");
    cookingytChannel.printInformation();
    
    cookingytChannel.publishVideo("corn flakes");
    cookingytChannel.publishVideo("maggi");

    cookingytChannel.subscribe();
    cookingytChannel.subscribe();

    cookingytChannel.printInformation();
    cookingytChannel.practice();
    cookingytChannel2.practice();


}