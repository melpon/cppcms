// (C) Copyright 2008 CodeRage, LLC (turkanis at coderage dot com)
// (C) Copyright 2003-2007 Jonathan Turkanis
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt.)

// See http://www.boost.org/libs/iostreams for documentation.

#ifndef CPPCMS_BOOST_IOSTREAMS_INPUT_SEQUENCE_HPP_INCLUDED
#define CPPCMS_BOOST_IOSTREAMS_INPUT_SEQUENCE_HPP_INCLUDED

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif

#include <utility>           // pair.
#include <cppcms_boost/config.hpp>  // DEDUCED_TYPENAME, MSVC.
#include <cppcms_boost/detail/workaround.hpp>
#include <cppcms_boost/iostreams/detail/wrap_unwrap.hpp>
#include <cppcms_boost/iostreams/operations_fwd.hpp>  // is_custom 
#include <cppcms_boost/iostreams/traits.hpp>
#include <cppcms_boost/mpl/if.hpp>

// Must come last.
#include <cppcms_boost/iostreams/detail/config/disable_warnings.hpp>

namespace cppcms_boost { namespace iostreams {

namespace detail {

template<typename T>
struct input_sequence_impl;

} // End namespace detail.

template<typename T>
inline std::pair<
    CPPCMS_BOOST_DEDUCED_TYPENAME char_type_of<T>::type*,
    CPPCMS_BOOST_DEDUCED_TYPENAME char_type_of<T>::type*
>
input_sequence(T& t)
{ return detail::input_sequence_impl<T>::input_sequence(t); }

namespace detail {

//------------------Definition of direct_impl-------------------------------//

template<typename T>
struct input_sequence_impl
    : mpl::if_<
          detail::is_custom<T>,
          operations<T>,
          input_sequence_impl<direct_tag>
      >::type
    { };

template<>
struct input_sequence_impl<direct_tag> {
    template<typename U>
    static std::pair<
        CPPCMS_BOOST_DEDUCED_TYPENAME char_type_of<U>::type*,
        CPPCMS_BOOST_DEDUCED_TYPENAME char_type_of<U>::type*
    >
    input_sequence(U& u) { return u.input_sequence(); }
};

} // End namespace detail.

} } // End namespaces iostreams, boost.

#include <cppcms_boost/iostreams/detail/config/enable_warnings.hpp>

#endif // #ifndef BOOST_IOSTREAMS_INPUT_SEQUENCE_HPP_INCLUDED
