#ifndef COMPILE_TIME_UTIL_CODE_INC_CNT_H_
#define COMPILE_TIME_UTIL_CODE_INC_CNT_H_

#define MAKECNT(Name) class Name{};

template<unsigned int n>
struct int_val
{
	static const unsigned int val = n;
};

template<class CounterID,int lower_unit_bit_value, int value_after_making_this_bit_zero>
int_val<value_after_making_this_bit_zero> eval(CounterID, int_val<lower_unit_bit_value>, int_val<value_after_making_this_bit_zero>);


#define GETCNT(CounterID) \
decltype(\
	eval(CounterID(), int_val<1>(),\
	eval(CounterID(), int_val<2>(),\
	eval(CounterID(), int_val<4>(),\
	eval(CounterID(), int_val<8>(),\
	eval(CounterID(), int_val<16>(),\
	eval(CounterID(), int_val<32>(), \
	eval(CounterID(), int_val<64>(), \
	eval(CounterID(), int_val<128>(), \
	eval(CounterID(), int_val<256>(), \
		int_val<0>()))))))))))::val\

#define INCCNT(CounterID) \
int_val<GETCNT(CounterID) + 1> eval(CounterID, int_val<(GETCNT(CounterID) + 1) & ~(GETCNT(CounterID))>,\
								int_val<(GETCNT(CounterID) + 1) & (GETCNT(CounterID))>)


#endif  // COMPILE_TIME_UTIL_CODE_INC_CNT_H_
