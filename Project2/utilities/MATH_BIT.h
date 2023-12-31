#ifndef MATH_BIT_H_
#define MATH_BIT_H_



#define  SET_BIT(VAR,BIT_NO)            (VAR|=(1<<BIT_NO))

#define CLR_BIT(VAR,BIT_NO)            (VAR&=(~(1<<BIT_NO)))

#define TOGGLE_BIT(VAR,BIT_NO)         (VAR^=(1<<BIT_NO))

#define GET_BIT(VAR,BIT_NO)            ((VAR&(1<<BIT_NO))>>BIT_NO)

#endif


