#include "functions.h"

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
  coloredSeperetLogoScrolling(31, 33);

  // Green and Cyan
  coloredSeperetLogoScrolling(32, 36);

  // Yellow and Magenta
  coloredSeperetLogoScrolling(33, 35);

  std::cout << "\n\n\n";

  // Scrolling outputs
  printASCIIArtScrolling(voodooASCII, 0, 50);

  printASCIIArtScrolling(logoChain, 0, 100);

  printASCIIArtScrolling(disappointedGarfield, 0, 50);

  std::cout << "\n\n\n\n\n";
}