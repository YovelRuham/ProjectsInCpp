#pragma once

#include "../core/Creator.h"
#include "../products/ConcreteProduct1.h"

class ConcreteCreator1 : public Creator {
 public:
  Product* FactoryMethod() const override;
};
