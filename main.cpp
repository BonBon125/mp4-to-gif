#include <iostream>

char* VideoPath;

int main(int argc, char* argv[])
{
    VideoPath = argv[1];
    std::cout << VideoPath << "\n";

    // TODO: Open the Video Path and read the bytes to a buffer / new video object
    // TODO: Convert the data in the video object / buffer to a gif object
    // TODO: Write the contents of this gif object to a file

    return 0;
}
