#pragma once

class Color {
  private:
    unsigned int r;
    unsigned int g;
    unsigned int b;

  public:
    constexpr Color(
      const unsigned int r, 
      const unsigned int g, 
      const unsigned int b
    ): r(r), g(g), b(b) {}

    int get_r() {
      return r;
    }

    int get_g() {
      return g;
    }

    int get_b() {
      return b;
    }

    void set_r(unsigned int r) {
      this->r = r;
    }

    void set_g(unsigned int g) {
      this->g = g;
    }

    void set_b(unsigned int b) {
      this->b = b;
    }

    void set_color(unsigned int r, unsigned int g, unsigned int b) {
      this->r = r;
      this->g = g;
      this->b = b;
    }
};