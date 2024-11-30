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
    int ContentQuality;    

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
    
    string getQualityMetrics(){
        if(ContentQuality < 5){
            return Name + "has bad quality";
        }
        return Name + "has good quality";
    }
    
};

class cookingYouTubeChannel:public youTubeChannel{
public:

    cookingYouTubeChannel(string name, string ownerName) : youTubeChannel(name, ownerName){

    }

    void practice(){
        cout << OwnerName << " is practicing" << endl;
        ContentQuality++;
    }

}; 

class studyingYouTubeChannel:public youTubeChannel{
public:

    studyingYouTubeChannel(string name, string ownerName) : youTubeChannel(name, ownerName){

    }

    void practice(){
        cout << OwnerName << " is studying" << endl;
        ContentQuality++;
    }

}; 

int main() {
    
    cookingYouTubeChannel cookingytChannel("amy cooks","amy");
    studyingYouTubeChannel studyingytChannel("prakhar studies","Prakhar");

    cookingytChannel.practice();
    studyingytChannel.practice();
    studyingytChannel.practice();
    studyingytChannel.practice();
    studyingytChannel.practice();
    studyingytChannel.practice();
    studyingytChannel.practice();
    studyingytChannel.practice();

    youTubeChannel* yt1 = &cookingytChannel;
    youTubeChannel* yt2 = &studyingytChannel;

    cout << yt1->getQualityMetrics();
    cout << yt2->getQualityMetrics();

}