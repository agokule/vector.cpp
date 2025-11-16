#pragma once

#include <cstddef>

template<typename T>
class Vector {
public:
    Vector();
    ~Vector();

    Vector(Vector<T>& other);
    Vector(Vector<T>&& other);

    size_t size() const;

    void push_back(T& obj);
    void push_back(T&& obj);

    void pop_back();

    const T& at(size_t idx) const;
    T& at(size_t idx);

    const T& operator[](size_t idx) const;
    T& operator[](size_t idx);

    void extend(Vector<T>& other);

    size_t capacity() const;

    void resize(size_t new_size);
    void reserve(size_t size);
private:
    T* arrayM;
    size_t sizeM;
    size_t capacityM;
};

