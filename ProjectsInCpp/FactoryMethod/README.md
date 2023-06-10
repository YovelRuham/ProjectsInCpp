For run this code in my computer:
cd "c:\Users\USER\Documents\Yovel\ProjectsInCpp\FactoryMethod\" ; if ($?) { g++ main.cpp utils/ClientCode.cpp creators/ConcreteCreator1.cpp creators/ConcreteCreator2.cpp products/ConcreteProduct1.cpp products/ConcreteProduct2.cpp core/Creator.cpp -o main } ; if ($?) { .\main }


==================================================================================================================================================
g++ main.cpp utils/ClientCode.cpp creators/ConcreteCreator1.cpp creators/ConcreteCreator2.cpp products/ConcreteProduct1.cpp products/ConcreteProduct2.cpp core/Creator.cpp -o main

By including the source files for ClientCode, ConcreteCreator1, ConcreteCreator2, ConcreteProduct1, and ConcreteProduct2, the linker will be able to resolve the undefined references and generate the executable successfully.
==================================================================================================================================================
