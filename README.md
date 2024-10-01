# ConsoleLogoOutputer

Output ASCII text and logos to your console application with these simple, but modular functions.

I have sample logos/art in the functions.cpp file - just edit those (scrolling timers, etc.).

For example:

-  ````
    void printASCIIArtScrolling(const std::string &asciiArt, int delayNonWhitespace, int delayLine)
    {
        // Code
    }

    ````

    This function that scrolls through ASCII art character-by-character and has a speed customizer for scrolling through both lines and whitespace. To edit these variables, simply navigate to `main.cpp`, go to that function, and change the timer values like so:

    ````
    // seperet.com voodoo logo
    printASCIIArtScrolling(scroll_voodooASCII, 0, 50);
    ````

## Compiling

- For testing, compile at the root directory with: `g++ -I ./ *.cpp`
- Then run the output/`.exe` file.