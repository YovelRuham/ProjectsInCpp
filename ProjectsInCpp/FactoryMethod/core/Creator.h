#pragma once

#include "Product.h"

class Creator {
 public:
  virtual ~Creator() {}
  virtual Product* FactoryMethod() const = 0;
  std::string SomeOperation() const;
};
