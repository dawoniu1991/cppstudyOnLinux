

class  Van {
public:
    Van(){std::cout << "Van===="  << std::endl;}
};

class ZMQVan : public Van {
public:
    ZMQVan(){std::cout << "ZMQVan = "  << std::endl; }
};