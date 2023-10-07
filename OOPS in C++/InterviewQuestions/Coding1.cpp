#include <iostream>
#include <string>

using namespace std;

// Base AudioPlayer class
class AudioPlayer {
protected:
    string audioFile;

public:
    AudioPlayer(string file) {
        this->audioFile=file;
    }

    void play() {
        cout << "Playing: " << audioFile << endl;
    }

    void stop() {
        cout << "Stopping: " << audioFile << endl;
    }

    void pause() {
        cout << "Pausing: " << audioFile << endl;
    }

    virtual void volumeUp() {
        cout << "Volume up for audio: " << audioFile << endl;
    }

    virtual void volumeDown() {
        cout << "Volume down for audio: " << audioFile << endl;
    }
};

// Derived class for a specialized AudioPlayer
class MusicPlayer : public AudioPlayer {
public:

// best practice for c++ , using constructor initialize data members 
    MusicPlayer(string file) : AudioPlayer(file) {}

    // Override volumeUp() for MusicPlayer
    void volumeUp() override {
        cout << "Volume up for music: " << audioFile << endl;
    }

    // Override volumeDown() for MusicPlayer
    void volumeDown() override {
        cout << "Volume down for music: " << audioFile << endl;
    }
};

int main() {
    // Create an AudioPlayer object
    AudioPlayer audio("sample.mp3");

    // Play, pause, stop, and adjust volume
    audio.play();
    audio.pause();
    audio.volumeUp();
    audio.volumeDown();
    audio.stop();

    // Create a MusicPlayer object
    MusicPlayer music("song.mp3");

    // Play, pause, stop, and adjust volume for music
    music.play();
    music.pause();
    music.volumeUp();
    music.volumeDown();
    music.stop();

    return 0;
}
