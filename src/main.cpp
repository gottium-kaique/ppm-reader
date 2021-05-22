#include <iostream>
#include <image.hpp>

int main(int argc, char**argv) {
  Image image(1920, 1080);
  image.save("image.ppm");
  return 0; 
}