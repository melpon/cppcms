
#ifndef CPPCMS_BOOST_MPL_PAIR_HPP_INCLUDED
#define CPPCMS_BOOST_MPL_PAIR_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2001-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Id: pair.hpp 49267 2008-10-11 06:19:02Z agurtovoy $
// $Date: 2008-10-11 02:19:02 -0400 (Sat, 11 Oct 2008) $
// $Revision: 49267 $

#include <cppcms_boost/mpl/aux_/msvc_eti_base.hpp>
#include <cppcms_boost/mpl/aux_/na_spec.hpp>
#include <cppcms_boost/mpl/aux_/lambda_support.hpp>
#include <cppcms_boost/mpl/aux_/config/eti.hpp>

namespace cppcms_boost { namespace mpl {

template<
      typename CPPCMS_BOOST_MPL_AUX_NA_PARAM(T1)
    , typename CPPCMS_BOOST_MPL_AUX_NA_PARAM(T2)
    >
struct pair
{
    typedef pair type;
    typedef T1 first;
    typedef T2 second;

    CPPCMS_BOOST_MPL_AUX_LAMBDA_SUPPORT(2,pair,(T1,T2))
};

template<
      typename CPPCMS_BOOST_MPL_AUX_NA_PARAM(P)
    >
struct first
{
#if !defined(CPPCMS_BOOST_MPL_CFG_MSVC_70_ETI_BUG)
    typedef typename P::first type;
#else
    typedef typename aux::msvc_eti_base<P>::first type;
#endif
    CPPCMS_BOOST_MPL_AUX_LAMBDA_SUPPORT(1,first,(P))
};

template<
      typename CPPCMS_BOOST_MPL_AUX_NA_PARAM(P)
    >
struct second
{
#if !defined(CPPCMS_BOOST_MPL_CFG_MSVC_70_ETI_BUG)
    typedef typename P::second type;
#else
    typedef typename aux::msvc_eti_base<P>::second type;
#endif
    CPPCMS_BOOST_MPL_AUX_LAMBDA_SUPPORT(1,second,(P))
};


CPPCMS_BOOST_MPL_AUX_NA_SPEC_NO_ETI(2, pair)
CPPCMS_BOOST_MPL_AUX_NA_SPEC(1, first)
CPPCMS_BOOST_MPL_AUX_NA_SPEC(1, second)

}}

#endif // BOOST_MPL_PAIR_HPP_INCLUDED
