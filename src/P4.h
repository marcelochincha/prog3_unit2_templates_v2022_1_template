//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P4_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P4_H

template <typename T>
class smart_ptr {
    T* ptr = nullptr;
    public:
        smart_ptr(){};

        smart_ptr(const smart_ptr &obj){
            ptr = obj.ptr;
        }

        smart_ptr(smart_ptr &&obj){
            ptr = obj.ptr;
            obj.ptr = nullptr;
        }

        smart_ptr& operator=(const smart_ptr &obj){
            ptr = obj.ptr;
            return *this;
        }

        smart_ptr& operator=(smart_ptr &&obj){
            ptr = obj.ptr;
            obj.ptr = nullptr;
            return *this;
        }

        T& operator*(){
            return *ptr;
        }

        T* operator->(){
            return ptr;
        }

        ~smart_ptr(){
            delete ptr;
        };

        template <typename U, typename ...Args>
        friend smart_ptr<U> make_smart_ptr(Args&&... args);
};

template <typename U, typename ...Args>
smart_ptr<U> make_smart_ptr(Args&&... args){
    smart_ptr<U> newPtr;
    newPtr.ptr = new U(std::forward<Args>(args)...);
    return newPtr;
}



void P4();

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P4_H
