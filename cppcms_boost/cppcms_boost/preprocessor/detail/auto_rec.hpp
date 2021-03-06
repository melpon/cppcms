# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# include <cppcms_boost/preprocessor/config/config.hpp>
#
# if CPPCMS_BOOST_PP_CONFIG_FLAGS() & CPPCMS_BOOST_PP_CONFIG_DMC()
#     include <cppcms_boost/preprocessor/detail/dmc/auto_rec.hpp>
# else
#
# ifndef CPPCMS_BOOST_PREPROCESSOR_DETAIL_AUTO_REC_HPP
# define CPPCMS_BOOST_PREPROCESSOR_DETAIL_AUTO_REC_HPP
#
# include <cppcms_boost/preprocessor/control/iif.hpp>
#
# /* BOOST_PP_AUTO_REC */
#
# define CPPCMS_BOOST_PP_AUTO_REC(pred, n) CPPCMS_BOOST_PP_NODE_ENTRY_ ## n(pred)
#
# define CPPCMS_BOOST_PP_NODE_ENTRY_256(p) CPPCMS_BOOST_PP_NODE_128(p)(p)(p)(p)(p)(p)(p)(p)
# define CPPCMS_BOOST_PP_NODE_ENTRY_128(p) CPPCMS_BOOST_PP_NODE_64(p)(p)(p)(p)(p)(p)(p)
# define CPPCMS_BOOST_PP_NODE_ENTRY_64(p) CPPCMS_BOOST_PP_NODE_32(p)(p)(p)(p)(p)(p)
# define CPPCMS_BOOST_PP_NODE_ENTRY_32(p) CPPCMS_BOOST_PP_NODE_16(p)(p)(p)(p)(p)
# define CPPCMS_BOOST_PP_NODE_ENTRY_16(p) CPPCMS_BOOST_PP_NODE_8(p)(p)(p)(p)
# define CPPCMS_BOOST_PP_NODE_ENTRY_8(p) CPPCMS_BOOST_PP_NODE_4(p)(p)(p)
# define CPPCMS_BOOST_PP_NODE_ENTRY_4(p) CPPCMS_BOOST_PP_NODE_2(p)(p)
# define CPPCMS_BOOST_PP_NODE_ENTRY_2(p) CPPCMS_BOOST_PP_NODE_1(p)
#
# define CPPCMS_BOOST_PP_NODE_128(p) CPPCMS_BOOST_PP_IIF(p(128), CPPCMS_BOOST_PP_NODE_64, CPPCMS_BOOST_PP_NODE_192)
#    define CPPCMS_BOOST_PP_NODE_64(p) CPPCMS_BOOST_PP_IIF(p(64), CPPCMS_BOOST_PP_NODE_32, CPPCMS_BOOST_PP_NODE_96)
#        define CPPCMS_BOOST_PP_NODE_32(p) CPPCMS_BOOST_PP_IIF(p(32), CPPCMS_BOOST_PP_NODE_16, CPPCMS_BOOST_PP_NODE_48)
#            define CPPCMS_BOOST_PP_NODE_16(p) CPPCMS_BOOST_PP_IIF(p(16), CPPCMS_BOOST_PP_NODE_8, CPPCMS_BOOST_PP_NODE_24)
#                define CPPCMS_BOOST_PP_NODE_8(p) CPPCMS_BOOST_PP_IIF(p(8), CPPCMS_BOOST_PP_NODE_4, CPPCMS_BOOST_PP_NODE_12)
#                    define CPPCMS_BOOST_PP_NODE_4(p) CPPCMS_BOOST_PP_IIF(p(4), CPPCMS_BOOST_PP_NODE_2, CPPCMS_BOOST_PP_NODE_6)
#                        define CPPCMS_BOOST_PP_NODE_2(p) CPPCMS_BOOST_PP_IIF(p(2), CPPCMS_BOOST_PP_NODE_1, CPPCMS_BOOST_PP_NODE_3)
#                            define CPPCMS_BOOST_PP_NODE_1(p) CPPCMS_BOOST_PP_IIF(p(1), 1, 2)
#                            define CPPCMS_BOOST_PP_NODE_3(p) CPPCMS_BOOST_PP_IIF(p(3), 3, 4)
#                        define CPPCMS_BOOST_PP_NODE_6(p) CPPCMS_BOOST_PP_IIF(p(6), CPPCMS_BOOST_PP_NODE_5, CPPCMS_BOOST_PP_NODE_7)
#                            define CPPCMS_BOOST_PP_NODE_5(p) CPPCMS_BOOST_PP_IIF(p(5), 5, 6)
#                            define CPPCMS_BOOST_PP_NODE_7(p) CPPCMS_BOOST_PP_IIF(p(7), 7, 8)
#                    define CPPCMS_BOOST_PP_NODE_12(p) CPPCMS_BOOST_PP_IIF(p(12), CPPCMS_BOOST_PP_NODE_10, CPPCMS_BOOST_PP_NODE_14)
#                        define CPPCMS_BOOST_PP_NODE_10(p) CPPCMS_BOOST_PP_IIF(p(10), CPPCMS_BOOST_PP_NODE_9, CPPCMS_BOOST_PP_NODE_11)
#                            define CPPCMS_BOOST_PP_NODE_9(p) CPPCMS_BOOST_PP_IIF(p(9), 9, 10)
#                            define CPPCMS_BOOST_PP_NODE_11(p) CPPCMS_BOOST_PP_IIF(p(11), 11, 12)
#                        define CPPCMS_BOOST_PP_NODE_14(p) CPPCMS_BOOST_PP_IIF(p(14), CPPCMS_BOOST_PP_NODE_13, CPPCMS_BOOST_PP_NODE_15)
#                            define CPPCMS_BOOST_PP_NODE_13(p) CPPCMS_BOOST_PP_IIF(p(13), 13, 14)
#                            define CPPCMS_BOOST_PP_NODE_15(p) CPPCMS_BOOST_PP_IIF(p(15), 15, 16)
#                define CPPCMS_BOOST_PP_NODE_24(p) CPPCMS_BOOST_PP_IIF(p(24), CPPCMS_BOOST_PP_NODE_20, CPPCMS_BOOST_PP_NODE_28)
#                    define CPPCMS_BOOST_PP_NODE_20(p) CPPCMS_BOOST_PP_IIF(p(20), CPPCMS_BOOST_PP_NODE_18, CPPCMS_BOOST_PP_NODE_22)
#                        define CPPCMS_BOOST_PP_NODE_18(p) CPPCMS_BOOST_PP_IIF(p(18), CPPCMS_BOOST_PP_NODE_17, CPPCMS_BOOST_PP_NODE_19)
#                            define CPPCMS_BOOST_PP_NODE_17(p) CPPCMS_BOOST_PP_IIF(p(17), 17, 18)
#                            define CPPCMS_BOOST_PP_NODE_19(p) CPPCMS_BOOST_PP_IIF(p(19), 19, 20)
#                        define CPPCMS_BOOST_PP_NODE_22(p) CPPCMS_BOOST_PP_IIF(p(22), CPPCMS_BOOST_PP_NODE_21, CPPCMS_BOOST_PP_NODE_23)
#                            define CPPCMS_BOOST_PP_NODE_21(p) CPPCMS_BOOST_PP_IIF(p(21), 21, 22)
#                            define CPPCMS_BOOST_PP_NODE_23(p) CPPCMS_BOOST_PP_IIF(p(23), 23, 24)
#                    define CPPCMS_BOOST_PP_NODE_28(p) CPPCMS_BOOST_PP_IIF(p(28), CPPCMS_BOOST_PP_NODE_26, CPPCMS_BOOST_PP_NODE_30)
#                        define CPPCMS_BOOST_PP_NODE_26(p) CPPCMS_BOOST_PP_IIF(p(26), CPPCMS_BOOST_PP_NODE_25, CPPCMS_BOOST_PP_NODE_27)
#                            define CPPCMS_BOOST_PP_NODE_25(p) CPPCMS_BOOST_PP_IIF(p(25), 25, 26)
#                            define CPPCMS_BOOST_PP_NODE_27(p) CPPCMS_BOOST_PP_IIF(p(27), 27, 28)
#                        define CPPCMS_BOOST_PP_NODE_30(p) CPPCMS_BOOST_PP_IIF(p(30), CPPCMS_BOOST_PP_NODE_29, CPPCMS_BOOST_PP_NODE_31)
#                            define CPPCMS_BOOST_PP_NODE_29(p) CPPCMS_BOOST_PP_IIF(p(29), 29, 30)
#                            define CPPCMS_BOOST_PP_NODE_31(p) CPPCMS_BOOST_PP_IIF(p(31), 31, 32)
#            define CPPCMS_BOOST_PP_NODE_48(p) CPPCMS_BOOST_PP_IIF(p(48), CPPCMS_BOOST_PP_NODE_40, CPPCMS_BOOST_PP_NODE_56)
#                define CPPCMS_BOOST_PP_NODE_40(p) CPPCMS_BOOST_PP_IIF(p(40), CPPCMS_BOOST_PP_NODE_36, CPPCMS_BOOST_PP_NODE_44)
#                    define CPPCMS_BOOST_PP_NODE_36(p) CPPCMS_BOOST_PP_IIF(p(36), CPPCMS_BOOST_PP_NODE_34, CPPCMS_BOOST_PP_NODE_38)
#                        define CPPCMS_BOOST_PP_NODE_34(p) CPPCMS_BOOST_PP_IIF(p(34), CPPCMS_BOOST_PP_NODE_33, CPPCMS_BOOST_PP_NODE_35)
#                            define CPPCMS_BOOST_PP_NODE_33(p) CPPCMS_BOOST_PP_IIF(p(33), 33, 34)
#                            define CPPCMS_BOOST_PP_NODE_35(p) CPPCMS_BOOST_PP_IIF(p(35), 35, 36)
#                        define CPPCMS_BOOST_PP_NODE_38(p) CPPCMS_BOOST_PP_IIF(p(38), CPPCMS_BOOST_PP_NODE_37, CPPCMS_BOOST_PP_NODE_39)
#                            define CPPCMS_BOOST_PP_NODE_37(p) CPPCMS_BOOST_PP_IIF(p(37), 37, 38)
#                            define CPPCMS_BOOST_PP_NODE_39(p) CPPCMS_BOOST_PP_IIF(p(39), 39, 40)
#                    define CPPCMS_BOOST_PP_NODE_44(p) CPPCMS_BOOST_PP_IIF(p(44), CPPCMS_BOOST_PP_NODE_42, CPPCMS_BOOST_PP_NODE_46)
#                        define CPPCMS_BOOST_PP_NODE_42(p) CPPCMS_BOOST_PP_IIF(p(42), CPPCMS_BOOST_PP_NODE_41, CPPCMS_BOOST_PP_NODE_43)
#                            define CPPCMS_BOOST_PP_NODE_41(p) CPPCMS_BOOST_PP_IIF(p(41), 41, 42)
#                            define CPPCMS_BOOST_PP_NODE_43(p) CPPCMS_BOOST_PP_IIF(p(43), 43, 44)
#                        define CPPCMS_BOOST_PP_NODE_46(p) CPPCMS_BOOST_PP_IIF(p(46), CPPCMS_BOOST_PP_NODE_45, CPPCMS_BOOST_PP_NODE_47)
#                            define CPPCMS_BOOST_PP_NODE_45(p) CPPCMS_BOOST_PP_IIF(p(45), 45, 46)
#                            define CPPCMS_BOOST_PP_NODE_47(p) CPPCMS_BOOST_PP_IIF(p(47), 47, 48)
#                define CPPCMS_BOOST_PP_NODE_56(p) CPPCMS_BOOST_PP_IIF(p(56), CPPCMS_BOOST_PP_NODE_52, CPPCMS_BOOST_PP_NODE_60)
#                    define CPPCMS_BOOST_PP_NODE_52(p) CPPCMS_BOOST_PP_IIF(p(52), CPPCMS_BOOST_PP_NODE_50, CPPCMS_BOOST_PP_NODE_54)
#                        define CPPCMS_BOOST_PP_NODE_50(p) CPPCMS_BOOST_PP_IIF(p(50), CPPCMS_BOOST_PP_NODE_49, CPPCMS_BOOST_PP_NODE_51)
#                            define CPPCMS_BOOST_PP_NODE_49(p) CPPCMS_BOOST_PP_IIF(p(49), 49, 50)
#                            define CPPCMS_BOOST_PP_NODE_51(p) CPPCMS_BOOST_PP_IIF(p(51), 51, 52)
#                        define CPPCMS_BOOST_PP_NODE_54(p) CPPCMS_BOOST_PP_IIF(p(54), CPPCMS_BOOST_PP_NODE_53, CPPCMS_BOOST_PP_NODE_55)
#                            define CPPCMS_BOOST_PP_NODE_53(p) CPPCMS_BOOST_PP_IIF(p(53), 53, 54)
#                            define CPPCMS_BOOST_PP_NODE_55(p) CPPCMS_BOOST_PP_IIF(p(55), 55, 56)
#                    define CPPCMS_BOOST_PP_NODE_60(p) CPPCMS_BOOST_PP_IIF(p(60), CPPCMS_BOOST_PP_NODE_58, CPPCMS_BOOST_PP_NODE_62)
#                        define CPPCMS_BOOST_PP_NODE_58(p) CPPCMS_BOOST_PP_IIF(p(58), CPPCMS_BOOST_PP_NODE_57, CPPCMS_BOOST_PP_NODE_59)
#                            define CPPCMS_BOOST_PP_NODE_57(p) CPPCMS_BOOST_PP_IIF(p(57), 57, 58)
#                            define CPPCMS_BOOST_PP_NODE_59(p) CPPCMS_BOOST_PP_IIF(p(59), 59, 60)
#                        define CPPCMS_BOOST_PP_NODE_62(p) CPPCMS_BOOST_PP_IIF(p(62), CPPCMS_BOOST_PP_NODE_61, CPPCMS_BOOST_PP_NODE_63)
#                            define CPPCMS_BOOST_PP_NODE_61(p) CPPCMS_BOOST_PP_IIF(p(61), 61, 62)
#                            define CPPCMS_BOOST_PP_NODE_63(p) CPPCMS_BOOST_PP_IIF(p(63), 63, 64)
#        define CPPCMS_BOOST_PP_NODE_96(p) CPPCMS_BOOST_PP_IIF(p(96), CPPCMS_BOOST_PP_NODE_80, CPPCMS_BOOST_PP_NODE_112)
#            define CPPCMS_BOOST_PP_NODE_80(p) CPPCMS_BOOST_PP_IIF(p(80), CPPCMS_BOOST_PP_NODE_72, CPPCMS_BOOST_PP_NODE_88)
#                define CPPCMS_BOOST_PP_NODE_72(p) CPPCMS_BOOST_PP_IIF(p(72), CPPCMS_BOOST_PP_NODE_68, CPPCMS_BOOST_PP_NODE_76)
#                    define CPPCMS_BOOST_PP_NODE_68(p) CPPCMS_BOOST_PP_IIF(p(68), CPPCMS_BOOST_PP_NODE_66, CPPCMS_BOOST_PP_NODE_70)
#                        define CPPCMS_BOOST_PP_NODE_66(p) CPPCMS_BOOST_PP_IIF(p(66), CPPCMS_BOOST_PP_NODE_65, CPPCMS_BOOST_PP_NODE_67)
#                            define CPPCMS_BOOST_PP_NODE_65(p) CPPCMS_BOOST_PP_IIF(p(65), 65, 66)
#                            define CPPCMS_BOOST_PP_NODE_67(p) CPPCMS_BOOST_PP_IIF(p(67), 67, 68)
#                        define CPPCMS_BOOST_PP_NODE_70(p) CPPCMS_BOOST_PP_IIF(p(70), CPPCMS_BOOST_PP_NODE_69, CPPCMS_BOOST_PP_NODE_71)
#                            define CPPCMS_BOOST_PP_NODE_69(p) CPPCMS_BOOST_PP_IIF(p(69), 69, 70)
#                            define CPPCMS_BOOST_PP_NODE_71(p) CPPCMS_BOOST_PP_IIF(p(71), 71, 72)
#                    define CPPCMS_BOOST_PP_NODE_76(p) CPPCMS_BOOST_PP_IIF(p(76), CPPCMS_BOOST_PP_NODE_74, CPPCMS_BOOST_PP_NODE_78)
#                        define CPPCMS_BOOST_PP_NODE_74(p) CPPCMS_BOOST_PP_IIF(p(74), CPPCMS_BOOST_PP_NODE_73, CPPCMS_BOOST_PP_NODE_75)
#                            define CPPCMS_BOOST_PP_NODE_73(p) CPPCMS_BOOST_PP_IIF(p(73), 73, 74)
#                            define CPPCMS_BOOST_PP_NODE_75(p) CPPCMS_BOOST_PP_IIF(p(75), 75, 76)
#                        define CPPCMS_BOOST_PP_NODE_78(p) CPPCMS_BOOST_PP_IIF(p(78), CPPCMS_BOOST_PP_NODE_77, CPPCMS_BOOST_PP_NODE_79)
#                            define CPPCMS_BOOST_PP_NODE_77(p) CPPCMS_BOOST_PP_IIF(p(77), 77, 78)
#                            define CPPCMS_BOOST_PP_NODE_79(p) CPPCMS_BOOST_PP_IIF(p(79), 79, 80)
#                define CPPCMS_BOOST_PP_NODE_88(p) CPPCMS_BOOST_PP_IIF(p(88), CPPCMS_BOOST_PP_NODE_84, CPPCMS_BOOST_PP_NODE_92)
#                    define CPPCMS_BOOST_PP_NODE_84(p) CPPCMS_BOOST_PP_IIF(p(84), CPPCMS_BOOST_PP_NODE_82, CPPCMS_BOOST_PP_NODE_86)
#                        define CPPCMS_BOOST_PP_NODE_82(p) CPPCMS_BOOST_PP_IIF(p(82), CPPCMS_BOOST_PP_NODE_81, CPPCMS_BOOST_PP_NODE_83)
#                            define CPPCMS_BOOST_PP_NODE_81(p) CPPCMS_BOOST_PP_IIF(p(81), 81, 82)
#                            define CPPCMS_BOOST_PP_NODE_83(p) CPPCMS_BOOST_PP_IIF(p(83), 83, 84)
#                        define CPPCMS_BOOST_PP_NODE_86(p) CPPCMS_BOOST_PP_IIF(p(86), CPPCMS_BOOST_PP_NODE_85, CPPCMS_BOOST_PP_NODE_87)
#                            define CPPCMS_BOOST_PP_NODE_85(p) CPPCMS_BOOST_PP_IIF(p(85), 85, 86)
#                            define CPPCMS_BOOST_PP_NODE_87(p) CPPCMS_BOOST_PP_IIF(p(87), 87, 88)
#                    define CPPCMS_BOOST_PP_NODE_92(p) CPPCMS_BOOST_PP_IIF(p(92), CPPCMS_BOOST_PP_NODE_90, CPPCMS_BOOST_PP_NODE_94)
#                        define CPPCMS_BOOST_PP_NODE_90(p) CPPCMS_BOOST_PP_IIF(p(90), CPPCMS_BOOST_PP_NODE_89, CPPCMS_BOOST_PP_NODE_91)
#                            define CPPCMS_BOOST_PP_NODE_89(p) CPPCMS_BOOST_PP_IIF(p(89), 89, 90)
#                            define CPPCMS_BOOST_PP_NODE_91(p) CPPCMS_BOOST_PP_IIF(p(91), 91, 92)
#                        define CPPCMS_BOOST_PP_NODE_94(p) CPPCMS_BOOST_PP_IIF(p(94), CPPCMS_BOOST_PP_NODE_93, CPPCMS_BOOST_PP_NODE_95)
#                            define CPPCMS_BOOST_PP_NODE_93(p) CPPCMS_BOOST_PP_IIF(p(93), 93, 94)
#                            define CPPCMS_BOOST_PP_NODE_95(p) CPPCMS_BOOST_PP_IIF(p(95), 95, 96)
#            define CPPCMS_BOOST_PP_NODE_112(p) CPPCMS_BOOST_PP_IIF(p(112), CPPCMS_BOOST_PP_NODE_104, CPPCMS_BOOST_PP_NODE_120)
#                define CPPCMS_BOOST_PP_NODE_104(p) CPPCMS_BOOST_PP_IIF(p(104), CPPCMS_BOOST_PP_NODE_100, CPPCMS_BOOST_PP_NODE_108)
#                    define CPPCMS_BOOST_PP_NODE_100(p) CPPCMS_BOOST_PP_IIF(p(100), CPPCMS_BOOST_PP_NODE_98, CPPCMS_BOOST_PP_NODE_102)
#                        define CPPCMS_BOOST_PP_NODE_98(p) CPPCMS_BOOST_PP_IIF(p(98), CPPCMS_BOOST_PP_NODE_97, CPPCMS_BOOST_PP_NODE_99)
#                            define CPPCMS_BOOST_PP_NODE_97(p) CPPCMS_BOOST_PP_IIF(p(97), 97, 98)
#                            define CPPCMS_BOOST_PP_NODE_99(p) CPPCMS_BOOST_PP_IIF(p(99), 99, 100)
#                        define CPPCMS_BOOST_PP_NODE_102(p) CPPCMS_BOOST_PP_IIF(p(102), CPPCMS_BOOST_PP_NODE_101, CPPCMS_BOOST_PP_NODE_103)
#                            define CPPCMS_BOOST_PP_NODE_101(p) CPPCMS_BOOST_PP_IIF(p(101), 101, 102)
#                            define CPPCMS_BOOST_PP_NODE_103(p) CPPCMS_BOOST_PP_IIF(p(103), 103, 104)
#                    define CPPCMS_BOOST_PP_NODE_108(p) CPPCMS_BOOST_PP_IIF(p(108), CPPCMS_BOOST_PP_NODE_106, CPPCMS_BOOST_PP_NODE_110)
#                        define CPPCMS_BOOST_PP_NODE_106(p) CPPCMS_BOOST_PP_IIF(p(106), CPPCMS_BOOST_PP_NODE_105, CPPCMS_BOOST_PP_NODE_107)
#                            define CPPCMS_BOOST_PP_NODE_105(p) CPPCMS_BOOST_PP_IIF(p(105), 105, 106)
#                            define CPPCMS_BOOST_PP_NODE_107(p) CPPCMS_BOOST_PP_IIF(p(107), 107, 108)
#                        define CPPCMS_BOOST_PP_NODE_110(p) CPPCMS_BOOST_PP_IIF(p(110), CPPCMS_BOOST_PP_NODE_109, CPPCMS_BOOST_PP_NODE_111)
#                            define CPPCMS_BOOST_PP_NODE_109(p) CPPCMS_BOOST_PP_IIF(p(109), 109, 110)
#                            define CPPCMS_BOOST_PP_NODE_111(p) CPPCMS_BOOST_PP_IIF(p(111), 111, 112)
#                define CPPCMS_BOOST_PP_NODE_120(p) CPPCMS_BOOST_PP_IIF(p(120), CPPCMS_BOOST_PP_NODE_116, CPPCMS_BOOST_PP_NODE_124)
#                    define CPPCMS_BOOST_PP_NODE_116(p) CPPCMS_BOOST_PP_IIF(p(116), CPPCMS_BOOST_PP_NODE_114, CPPCMS_BOOST_PP_NODE_118)
#                        define CPPCMS_BOOST_PP_NODE_114(p) CPPCMS_BOOST_PP_IIF(p(114), CPPCMS_BOOST_PP_NODE_113, CPPCMS_BOOST_PP_NODE_115)
#                            define CPPCMS_BOOST_PP_NODE_113(p) CPPCMS_BOOST_PP_IIF(p(113), 113, 114)
#                            define CPPCMS_BOOST_PP_NODE_115(p) CPPCMS_BOOST_PP_IIF(p(115), 115, 116)
#                        define CPPCMS_BOOST_PP_NODE_118(p) CPPCMS_BOOST_PP_IIF(p(118), CPPCMS_BOOST_PP_NODE_117, CPPCMS_BOOST_PP_NODE_119)
#                            define CPPCMS_BOOST_PP_NODE_117(p) CPPCMS_BOOST_PP_IIF(p(117), 117, 118)
#                            define CPPCMS_BOOST_PP_NODE_119(p) CPPCMS_BOOST_PP_IIF(p(119), 119, 120)
#                    define CPPCMS_BOOST_PP_NODE_124(p) CPPCMS_BOOST_PP_IIF(p(124), CPPCMS_BOOST_PP_NODE_122, CPPCMS_BOOST_PP_NODE_126)
#                        define CPPCMS_BOOST_PP_NODE_122(p) CPPCMS_BOOST_PP_IIF(p(122), CPPCMS_BOOST_PP_NODE_121, CPPCMS_BOOST_PP_NODE_123)
#                            define CPPCMS_BOOST_PP_NODE_121(p) CPPCMS_BOOST_PP_IIF(p(121), 121, 122)
#                            define CPPCMS_BOOST_PP_NODE_123(p) CPPCMS_BOOST_PP_IIF(p(123), 123, 124)
#                        define CPPCMS_BOOST_PP_NODE_126(p) CPPCMS_BOOST_PP_IIF(p(126), CPPCMS_BOOST_PP_NODE_125, CPPCMS_BOOST_PP_NODE_127)
#                            define CPPCMS_BOOST_PP_NODE_125(p) CPPCMS_BOOST_PP_IIF(p(125), 125, 126)
#                            define CPPCMS_BOOST_PP_NODE_127(p) CPPCMS_BOOST_PP_IIF(p(127), 127, 128)
#    define CPPCMS_BOOST_PP_NODE_192(p) CPPCMS_BOOST_PP_IIF(p(192), CPPCMS_BOOST_PP_NODE_160, CPPCMS_BOOST_PP_NODE_224)
#        define CPPCMS_BOOST_PP_NODE_160(p) CPPCMS_BOOST_PP_IIF(p(160), CPPCMS_BOOST_PP_NODE_144, CPPCMS_BOOST_PP_NODE_176)
#            define CPPCMS_BOOST_PP_NODE_144(p) CPPCMS_BOOST_PP_IIF(p(144), CPPCMS_BOOST_PP_NODE_136, CPPCMS_BOOST_PP_NODE_152)
#                define CPPCMS_BOOST_PP_NODE_136(p) CPPCMS_BOOST_PP_IIF(p(136), CPPCMS_BOOST_PP_NODE_132, CPPCMS_BOOST_PP_NODE_140)
#                    define CPPCMS_BOOST_PP_NODE_132(p) CPPCMS_BOOST_PP_IIF(p(132), CPPCMS_BOOST_PP_NODE_130, CPPCMS_BOOST_PP_NODE_134)
#                        define CPPCMS_BOOST_PP_NODE_130(p) CPPCMS_BOOST_PP_IIF(p(130), CPPCMS_BOOST_PP_NODE_129, CPPCMS_BOOST_PP_NODE_131)
#                            define CPPCMS_BOOST_PP_NODE_129(p) CPPCMS_BOOST_PP_IIF(p(129), 129, 130)
#                            define CPPCMS_BOOST_PP_NODE_131(p) CPPCMS_BOOST_PP_IIF(p(131), 131, 132)
#                        define CPPCMS_BOOST_PP_NODE_134(p) CPPCMS_BOOST_PP_IIF(p(134), CPPCMS_BOOST_PP_NODE_133, CPPCMS_BOOST_PP_NODE_135)
#                            define CPPCMS_BOOST_PP_NODE_133(p) CPPCMS_BOOST_PP_IIF(p(133), 133, 134)
#                            define CPPCMS_BOOST_PP_NODE_135(p) CPPCMS_BOOST_PP_IIF(p(135), 135, 136)
#                    define CPPCMS_BOOST_PP_NODE_140(p) CPPCMS_BOOST_PP_IIF(p(140), CPPCMS_BOOST_PP_NODE_138, CPPCMS_BOOST_PP_NODE_142)
#                        define CPPCMS_BOOST_PP_NODE_138(p) CPPCMS_BOOST_PP_IIF(p(138), CPPCMS_BOOST_PP_NODE_137, CPPCMS_BOOST_PP_NODE_139)
#                            define CPPCMS_BOOST_PP_NODE_137(p) CPPCMS_BOOST_PP_IIF(p(137), 137, 138)
#                            define CPPCMS_BOOST_PP_NODE_139(p) CPPCMS_BOOST_PP_IIF(p(139), 139, 140)
#                        define CPPCMS_BOOST_PP_NODE_142(p) CPPCMS_BOOST_PP_IIF(p(142), CPPCMS_BOOST_PP_NODE_141, CPPCMS_BOOST_PP_NODE_143)
#                            define CPPCMS_BOOST_PP_NODE_141(p) CPPCMS_BOOST_PP_IIF(p(141), 141, 142)
#                            define CPPCMS_BOOST_PP_NODE_143(p) CPPCMS_BOOST_PP_IIF(p(143), 143, 144)
#                define CPPCMS_BOOST_PP_NODE_152(p) CPPCMS_BOOST_PP_IIF(p(152), CPPCMS_BOOST_PP_NODE_148, CPPCMS_BOOST_PP_NODE_156)
#                    define CPPCMS_BOOST_PP_NODE_148(p) CPPCMS_BOOST_PP_IIF(p(148), CPPCMS_BOOST_PP_NODE_146, CPPCMS_BOOST_PP_NODE_150)
#                        define CPPCMS_BOOST_PP_NODE_146(p) CPPCMS_BOOST_PP_IIF(p(146), CPPCMS_BOOST_PP_NODE_145, CPPCMS_BOOST_PP_NODE_147)
#                            define CPPCMS_BOOST_PP_NODE_145(p) CPPCMS_BOOST_PP_IIF(p(145), 145, 146)
#                            define CPPCMS_BOOST_PP_NODE_147(p) CPPCMS_BOOST_PP_IIF(p(147), 147, 148)
#                        define CPPCMS_BOOST_PP_NODE_150(p) CPPCMS_BOOST_PP_IIF(p(150), CPPCMS_BOOST_PP_NODE_149, CPPCMS_BOOST_PP_NODE_151)
#                            define CPPCMS_BOOST_PP_NODE_149(p) CPPCMS_BOOST_PP_IIF(p(149), 149, 150)
#                            define CPPCMS_BOOST_PP_NODE_151(p) CPPCMS_BOOST_PP_IIF(p(151), 151, 152)
#                    define CPPCMS_BOOST_PP_NODE_156(p) CPPCMS_BOOST_PP_IIF(p(156), CPPCMS_BOOST_PP_NODE_154, CPPCMS_BOOST_PP_NODE_158)
#                        define CPPCMS_BOOST_PP_NODE_154(p) CPPCMS_BOOST_PP_IIF(p(154), CPPCMS_BOOST_PP_NODE_153, CPPCMS_BOOST_PP_NODE_155)
#                            define CPPCMS_BOOST_PP_NODE_153(p) CPPCMS_BOOST_PP_IIF(p(153), 153, 154)
#                            define CPPCMS_BOOST_PP_NODE_155(p) CPPCMS_BOOST_PP_IIF(p(155), 155, 156)
#                        define CPPCMS_BOOST_PP_NODE_158(p) CPPCMS_BOOST_PP_IIF(p(158), CPPCMS_BOOST_PP_NODE_157, CPPCMS_BOOST_PP_NODE_159)
#                            define CPPCMS_BOOST_PP_NODE_157(p) CPPCMS_BOOST_PP_IIF(p(157), 157, 158)
#                            define CPPCMS_BOOST_PP_NODE_159(p) CPPCMS_BOOST_PP_IIF(p(159), 159, 160)
#            define CPPCMS_BOOST_PP_NODE_176(p) CPPCMS_BOOST_PP_IIF(p(176), CPPCMS_BOOST_PP_NODE_168, CPPCMS_BOOST_PP_NODE_184)
#                define CPPCMS_BOOST_PP_NODE_168(p) CPPCMS_BOOST_PP_IIF(p(168), CPPCMS_BOOST_PP_NODE_164, CPPCMS_BOOST_PP_NODE_172)
#                    define CPPCMS_BOOST_PP_NODE_164(p) CPPCMS_BOOST_PP_IIF(p(164), CPPCMS_BOOST_PP_NODE_162, CPPCMS_BOOST_PP_NODE_166)
#                        define CPPCMS_BOOST_PP_NODE_162(p) CPPCMS_BOOST_PP_IIF(p(162), CPPCMS_BOOST_PP_NODE_161, CPPCMS_BOOST_PP_NODE_163)
#                            define CPPCMS_BOOST_PP_NODE_161(p) CPPCMS_BOOST_PP_IIF(p(161), 161, 162)
#                            define CPPCMS_BOOST_PP_NODE_163(p) CPPCMS_BOOST_PP_IIF(p(163), 163, 164)
#                        define CPPCMS_BOOST_PP_NODE_166(p) CPPCMS_BOOST_PP_IIF(p(166), CPPCMS_BOOST_PP_NODE_165, CPPCMS_BOOST_PP_NODE_167)
#                            define CPPCMS_BOOST_PP_NODE_165(p) CPPCMS_BOOST_PP_IIF(p(165), 165, 166)
#                            define CPPCMS_BOOST_PP_NODE_167(p) CPPCMS_BOOST_PP_IIF(p(167), 167, 168)
#                    define CPPCMS_BOOST_PP_NODE_172(p) CPPCMS_BOOST_PP_IIF(p(172), CPPCMS_BOOST_PP_NODE_170, CPPCMS_BOOST_PP_NODE_174)
#                        define CPPCMS_BOOST_PP_NODE_170(p) CPPCMS_BOOST_PP_IIF(p(170), CPPCMS_BOOST_PP_NODE_169, CPPCMS_BOOST_PP_NODE_171)
#                            define CPPCMS_BOOST_PP_NODE_169(p) CPPCMS_BOOST_PP_IIF(p(169), 169, 170)
#                            define CPPCMS_BOOST_PP_NODE_171(p) CPPCMS_BOOST_PP_IIF(p(171), 171, 172)
#                        define CPPCMS_BOOST_PP_NODE_174(p) CPPCMS_BOOST_PP_IIF(p(174), CPPCMS_BOOST_PP_NODE_173, CPPCMS_BOOST_PP_NODE_175)
#                            define CPPCMS_BOOST_PP_NODE_173(p) CPPCMS_BOOST_PP_IIF(p(173), 173, 174)
#                            define CPPCMS_BOOST_PP_NODE_175(p) CPPCMS_BOOST_PP_IIF(p(175), 175, 176)
#                define CPPCMS_BOOST_PP_NODE_184(p) CPPCMS_BOOST_PP_IIF(p(184), CPPCMS_BOOST_PP_NODE_180, CPPCMS_BOOST_PP_NODE_188)
#                    define CPPCMS_BOOST_PP_NODE_180(p) CPPCMS_BOOST_PP_IIF(p(180), CPPCMS_BOOST_PP_NODE_178, CPPCMS_BOOST_PP_NODE_182)
#                        define CPPCMS_BOOST_PP_NODE_178(p) CPPCMS_BOOST_PP_IIF(p(178), CPPCMS_BOOST_PP_NODE_177, CPPCMS_BOOST_PP_NODE_179)
#                            define CPPCMS_BOOST_PP_NODE_177(p) CPPCMS_BOOST_PP_IIF(p(177), 177, 178)
#                            define CPPCMS_BOOST_PP_NODE_179(p) CPPCMS_BOOST_PP_IIF(p(179), 179, 180)
#                        define CPPCMS_BOOST_PP_NODE_182(p) CPPCMS_BOOST_PP_IIF(p(182), CPPCMS_BOOST_PP_NODE_181, CPPCMS_BOOST_PP_NODE_183)
#                            define CPPCMS_BOOST_PP_NODE_181(p) CPPCMS_BOOST_PP_IIF(p(181), 181, 182)
#                            define CPPCMS_BOOST_PP_NODE_183(p) CPPCMS_BOOST_PP_IIF(p(183), 183, 184)
#                    define CPPCMS_BOOST_PP_NODE_188(p) CPPCMS_BOOST_PP_IIF(p(188), CPPCMS_BOOST_PP_NODE_186, CPPCMS_BOOST_PP_NODE_190)
#                        define CPPCMS_BOOST_PP_NODE_186(p) CPPCMS_BOOST_PP_IIF(p(186), CPPCMS_BOOST_PP_NODE_185, CPPCMS_BOOST_PP_NODE_187)
#                            define CPPCMS_BOOST_PP_NODE_185(p) CPPCMS_BOOST_PP_IIF(p(185), 185, 186)
#                            define CPPCMS_BOOST_PP_NODE_187(p) CPPCMS_BOOST_PP_IIF(p(187), 187, 188)
#                        define CPPCMS_BOOST_PP_NODE_190(p) CPPCMS_BOOST_PP_IIF(p(190), CPPCMS_BOOST_PP_NODE_189, CPPCMS_BOOST_PP_NODE_191)
#                            define CPPCMS_BOOST_PP_NODE_189(p) CPPCMS_BOOST_PP_IIF(p(189), 189, 190)
#                            define CPPCMS_BOOST_PP_NODE_191(p) CPPCMS_BOOST_PP_IIF(p(191), 191, 192)
#        define CPPCMS_BOOST_PP_NODE_224(p) CPPCMS_BOOST_PP_IIF(p(224), CPPCMS_BOOST_PP_NODE_208, CPPCMS_BOOST_PP_NODE_240)
#            define CPPCMS_BOOST_PP_NODE_208(p) CPPCMS_BOOST_PP_IIF(p(208), CPPCMS_BOOST_PP_NODE_200, CPPCMS_BOOST_PP_NODE_216)
#                define CPPCMS_BOOST_PP_NODE_200(p) CPPCMS_BOOST_PP_IIF(p(200), CPPCMS_BOOST_PP_NODE_196, CPPCMS_BOOST_PP_NODE_204)
#                    define CPPCMS_BOOST_PP_NODE_196(p) CPPCMS_BOOST_PP_IIF(p(196), CPPCMS_BOOST_PP_NODE_194, CPPCMS_BOOST_PP_NODE_198)
#                        define CPPCMS_BOOST_PP_NODE_194(p) CPPCMS_BOOST_PP_IIF(p(194), CPPCMS_BOOST_PP_NODE_193, CPPCMS_BOOST_PP_NODE_195)
#                            define CPPCMS_BOOST_PP_NODE_193(p) CPPCMS_BOOST_PP_IIF(p(193), 193, 194)
#                            define CPPCMS_BOOST_PP_NODE_195(p) CPPCMS_BOOST_PP_IIF(p(195), 195, 196)
#                        define CPPCMS_BOOST_PP_NODE_198(p) CPPCMS_BOOST_PP_IIF(p(198), CPPCMS_BOOST_PP_NODE_197, CPPCMS_BOOST_PP_NODE_199)
#                            define CPPCMS_BOOST_PP_NODE_197(p) CPPCMS_BOOST_PP_IIF(p(197), 197, 198)
#                            define CPPCMS_BOOST_PP_NODE_199(p) CPPCMS_BOOST_PP_IIF(p(199), 199, 200)
#                    define CPPCMS_BOOST_PP_NODE_204(p) CPPCMS_BOOST_PP_IIF(p(204), CPPCMS_BOOST_PP_NODE_202, CPPCMS_BOOST_PP_NODE_206)
#                        define CPPCMS_BOOST_PP_NODE_202(p) CPPCMS_BOOST_PP_IIF(p(202), CPPCMS_BOOST_PP_NODE_201, CPPCMS_BOOST_PP_NODE_203)
#                            define CPPCMS_BOOST_PP_NODE_201(p) CPPCMS_BOOST_PP_IIF(p(201), 201, 202)
#                            define CPPCMS_BOOST_PP_NODE_203(p) CPPCMS_BOOST_PP_IIF(p(203), 203, 204)
#                        define CPPCMS_BOOST_PP_NODE_206(p) CPPCMS_BOOST_PP_IIF(p(206), CPPCMS_BOOST_PP_NODE_205, CPPCMS_BOOST_PP_NODE_207)
#                            define CPPCMS_BOOST_PP_NODE_205(p) CPPCMS_BOOST_PP_IIF(p(205), 205, 206)
#                            define CPPCMS_BOOST_PP_NODE_207(p) CPPCMS_BOOST_PP_IIF(p(207), 207, 208)
#                define CPPCMS_BOOST_PP_NODE_216(p) CPPCMS_BOOST_PP_IIF(p(216), CPPCMS_BOOST_PP_NODE_212, CPPCMS_BOOST_PP_NODE_220)
#                    define CPPCMS_BOOST_PP_NODE_212(p) CPPCMS_BOOST_PP_IIF(p(212), CPPCMS_BOOST_PP_NODE_210, CPPCMS_BOOST_PP_NODE_214)
#                        define CPPCMS_BOOST_PP_NODE_210(p) CPPCMS_BOOST_PP_IIF(p(210), CPPCMS_BOOST_PP_NODE_209, CPPCMS_BOOST_PP_NODE_211)
#                            define CPPCMS_BOOST_PP_NODE_209(p) CPPCMS_BOOST_PP_IIF(p(209), 209, 210)
#                            define CPPCMS_BOOST_PP_NODE_211(p) CPPCMS_BOOST_PP_IIF(p(211), 211, 212)
#                        define CPPCMS_BOOST_PP_NODE_214(p) CPPCMS_BOOST_PP_IIF(p(214), CPPCMS_BOOST_PP_NODE_213, CPPCMS_BOOST_PP_NODE_215)
#                            define CPPCMS_BOOST_PP_NODE_213(p) CPPCMS_BOOST_PP_IIF(p(213), 213, 214)
#                            define CPPCMS_BOOST_PP_NODE_215(p) CPPCMS_BOOST_PP_IIF(p(215), 215, 216)
#                    define CPPCMS_BOOST_PP_NODE_220(p) CPPCMS_BOOST_PP_IIF(p(220), CPPCMS_BOOST_PP_NODE_218, CPPCMS_BOOST_PP_NODE_222)
#                        define CPPCMS_BOOST_PP_NODE_218(p) CPPCMS_BOOST_PP_IIF(p(218), CPPCMS_BOOST_PP_NODE_217, CPPCMS_BOOST_PP_NODE_219)
#                            define CPPCMS_BOOST_PP_NODE_217(p) CPPCMS_BOOST_PP_IIF(p(217), 217, 218)
#                            define CPPCMS_BOOST_PP_NODE_219(p) CPPCMS_BOOST_PP_IIF(p(219), 219, 220)
#                        define CPPCMS_BOOST_PP_NODE_222(p) CPPCMS_BOOST_PP_IIF(p(222), CPPCMS_BOOST_PP_NODE_221, CPPCMS_BOOST_PP_NODE_223)
#                            define CPPCMS_BOOST_PP_NODE_221(p) CPPCMS_BOOST_PP_IIF(p(221), 221, 222)
#                            define CPPCMS_BOOST_PP_NODE_223(p) CPPCMS_BOOST_PP_IIF(p(223), 223, 224)
#            define CPPCMS_BOOST_PP_NODE_240(p) CPPCMS_BOOST_PP_IIF(p(240), CPPCMS_BOOST_PP_NODE_232, CPPCMS_BOOST_PP_NODE_248)
#                define CPPCMS_BOOST_PP_NODE_232(p) CPPCMS_BOOST_PP_IIF(p(232), CPPCMS_BOOST_PP_NODE_228, CPPCMS_BOOST_PP_NODE_236)
#                    define CPPCMS_BOOST_PP_NODE_228(p) CPPCMS_BOOST_PP_IIF(p(228), CPPCMS_BOOST_PP_NODE_226, CPPCMS_BOOST_PP_NODE_230)
#                        define CPPCMS_BOOST_PP_NODE_226(p) CPPCMS_BOOST_PP_IIF(p(226), CPPCMS_BOOST_PP_NODE_225, CPPCMS_BOOST_PP_NODE_227)
#                            define CPPCMS_BOOST_PP_NODE_225(p) CPPCMS_BOOST_PP_IIF(p(225), 225, 226)
#                            define CPPCMS_BOOST_PP_NODE_227(p) CPPCMS_BOOST_PP_IIF(p(227), 227, 228)
#                        define CPPCMS_BOOST_PP_NODE_230(p) CPPCMS_BOOST_PP_IIF(p(230), CPPCMS_BOOST_PP_NODE_229, CPPCMS_BOOST_PP_NODE_231)
#                            define CPPCMS_BOOST_PP_NODE_229(p) CPPCMS_BOOST_PP_IIF(p(229), 229, 230)
#                            define CPPCMS_BOOST_PP_NODE_231(p) CPPCMS_BOOST_PP_IIF(p(231), 231, 232)
#                    define CPPCMS_BOOST_PP_NODE_236(p) CPPCMS_BOOST_PP_IIF(p(236), CPPCMS_BOOST_PP_NODE_234, CPPCMS_BOOST_PP_NODE_238)
#                        define CPPCMS_BOOST_PP_NODE_234(p) CPPCMS_BOOST_PP_IIF(p(234), CPPCMS_BOOST_PP_NODE_233, CPPCMS_BOOST_PP_NODE_235)
#                            define CPPCMS_BOOST_PP_NODE_233(p) CPPCMS_BOOST_PP_IIF(p(233), 233, 234)
#                            define CPPCMS_BOOST_PP_NODE_235(p) CPPCMS_BOOST_PP_IIF(p(235), 235, 236)
#                        define CPPCMS_BOOST_PP_NODE_238(p) CPPCMS_BOOST_PP_IIF(p(238), CPPCMS_BOOST_PP_NODE_237, CPPCMS_BOOST_PP_NODE_239)
#                            define CPPCMS_BOOST_PP_NODE_237(p) CPPCMS_BOOST_PP_IIF(p(237), 237, 238)
#                            define CPPCMS_BOOST_PP_NODE_239(p) CPPCMS_BOOST_PP_IIF(p(239), 239, 240)
#                define CPPCMS_BOOST_PP_NODE_248(p) CPPCMS_BOOST_PP_IIF(p(248), CPPCMS_BOOST_PP_NODE_244, CPPCMS_BOOST_PP_NODE_252)
#                    define CPPCMS_BOOST_PP_NODE_244(p) CPPCMS_BOOST_PP_IIF(p(244), CPPCMS_BOOST_PP_NODE_242, CPPCMS_BOOST_PP_NODE_246)
#                        define CPPCMS_BOOST_PP_NODE_242(p) CPPCMS_BOOST_PP_IIF(p(242), CPPCMS_BOOST_PP_NODE_241, CPPCMS_BOOST_PP_NODE_243)
#                            define CPPCMS_BOOST_PP_NODE_241(p) CPPCMS_BOOST_PP_IIF(p(241), 241, 242)
#                            define CPPCMS_BOOST_PP_NODE_243(p) CPPCMS_BOOST_PP_IIF(p(243), 243, 244)
#                        define CPPCMS_BOOST_PP_NODE_246(p) CPPCMS_BOOST_PP_IIF(p(246), CPPCMS_BOOST_PP_NODE_245, CPPCMS_BOOST_PP_NODE_247)
#                            define CPPCMS_BOOST_PP_NODE_245(p) CPPCMS_BOOST_PP_IIF(p(245), 245, 246)
#                            define CPPCMS_BOOST_PP_NODE_247(p) CPPCMS_BOOST_PP_IIF(p(247), 247, 248)
#                    define CPPCMS_BOOST_PP_NODE_252(p) CPPCMS_BOOST_PP_IIF(p(252), CPPCMS_BOOST_PP_NODE_250, CPPCMS_BOOST_PP_NODE_254)
#                        define CPPCMS_BOOST_PP_NODE_250(p) CPPCMS_BOOST_PP_IIF(p(250), CPPCMS_BOOST_PP_NODE_249, CPPCMS_BOOST_PP_NODE_251)
#                            define CPPCMS_BOOST_PP_NODE_249(p) CPPCMS_BOOST_PP_IIF(p(249), 249, 250)
#                            define CPPCMS_BOOST_PP_NODE_251(p) CPPCMS_BOOST_PP_IIF(p(251), 251, 252)
#                        define CPPCMS_BOOST_PP_NODE_254(p) CPPCMS_BOOST_PP_IIF(p(254), CPPCMS_BOOST_PP_NODE_253, CPPCMS_BOOST_PP_NODE_255)
#                            define CPPCMS_BOOST_PP_NODE_253(p) CPPCMS_BOOST_PP_IIF(p(253), 253, 254)
#                            define CPPCMS_BOOST_PP_NODE_255(p) CPPCMS_BOOST_PP_IIF(p(255), 255, 256)
#
# endif
# endif
