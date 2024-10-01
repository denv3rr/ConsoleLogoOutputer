#include "functions.h"
#include <iostream>

int main()
{
  /*******************************
   * This program allows you to create custom
   * scrolling ASCII text and logos by simply pasting
   * them into the functions in the format you want.
   *
   ***************************** */

  // Logo / Startup

  // Break
  std::cout << "\n\n\n";

  // Red and Yellow
  // coloredSeperetLogo(31, 33);

  // Green and Cyan
  coloredSeperetLogoScrolling(32, 36);

  // Yellow and Magenta
  // coloredSeperetLogo(33, 35);

  std::cout << "\n\n\n";

  // seperet.com voodoo logo
  printASCIIArtScrolling(scroll_voodooASCII, 0, 50);

  std::cout << "\n\n\n";

  sleep(2);
}