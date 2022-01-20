//
// Created by kafka on 1/17/2022.
//

#ifndef FCAD_SINGLETON_H
#define FCAD_SINGLETON_H

#include <memory>

namespace utility
{
    class Singleton
    {
    public:
        Singleton(Singleton const&) = delete;

        Singleton& operator=(Singleton const&) = delete;

        static std::shared_ptr<Singleton> instance()
        {
            static std::shared_ptr<Singleton> s{new Singleton};

            return s;
        }

    private:
        Singleton() {}
    };
}

#endif //FCAD_SINGLETON_H
