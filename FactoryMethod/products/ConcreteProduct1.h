#pragma once

#include "../core/Product.h"

class ConcreteProduct1 : public Product {
 public:
  std::string Operation() const override;
};
