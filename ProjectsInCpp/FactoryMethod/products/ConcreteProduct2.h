#pragma once

#include "../core/Product.h"

class ConcreteProduct2 : public Product {
 public:
  std::string Operation() const override;
};
