#pragma once

#include "../core/Creator.h"
#include "../products/ConcreteProduct2.h"

class ConcreteCreator2 : public Creator {
 public:
  Product* FactoryMethod() const override;
};
