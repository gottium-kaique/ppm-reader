#pragma once 
#include <iostream>
#include <fstream>
#include <vector>
#include <color.hpp>

using std::vector;
using std::string;
using std::ofstream;
using std::to_string;

class Image {
  private:
    const int width;
    const int height;
    vector <Color> pixels;

  public:
    Image(
      const int width, 
      const int height
    ): width(width), height(height) {
      for (int i=0; i<width*height; i++) {
        pixels.push_back(Color(255, 255, 255));
      }
    }

    Color get_pixel(const int x, const int y) {
      return pixels[x*y];
    }

    void put_pixel(
      unsigned int x, 
      unsigned int y, 
      Color color
    ) {
      pixels[x*y] = color;
    }

    void save(const char*path) {
      ofstream image_file;

      string header = "P3\n";
      string content;

      header += to_string(width);
      header.append(" ");
      header += to_string(height);
      header.append("\n255\n");

      image_file.open(path);

      content.append(header);

      for (auto pixel:pixels) {
        string color;

        color += to_string(pixel.get_r());
        color.append(" ");

        color += to_string(pixel.get_g());
        color.append(" ");

        color += to_string(pixel.get_b());
        color.append("\n");
        
        content.append(color.c_str());
      }

      image_file.write(content.c_str(), content.length());
      image_file.close();
    }
};