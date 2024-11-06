#pragma once

template<typename T> struct remove_pointer { using type = T; };
template<typename T> struct remove_pointer<T *> { using type = T; };
template<typename T> struct remove_pointer<T * const> { using type = const T; };
template<typename T> struct remove_pointer<T * const volatile> { using type = const volatile T; };
template<typename T> struct remove_pointer<T * volatile> { using type = volatile T; };

