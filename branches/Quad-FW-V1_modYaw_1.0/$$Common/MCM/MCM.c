#include "MCM\MCMLocal.h"

//**********************************************************************
//**********************************************************************
//**********************************************************************
void	MCMSet(MCMData*		MCData)
	{
	//----------------------------------------
	float	TF	= _MC_OCMax * MCData->F;
	float	TB	= _MC_OCMax * MCData->B;
	//-------------------
	float	TL	= _MC_OCMax * MCData->L;
	float	TR	= _MC_OCMax * MCData->R;
	//----------------------------------------
	if (TF < 0)					TF 	=  0;
	else if (TF > _MC_OCMax)	TF 	= _MC_OCMax;
	//-------------------
	if (TB < 0)					TB 	=  0;
	else if (TB > _MC_OCMax)	TB 	= _MC_OCMax;
	//-------------------
	if (TL < 0)					TL 	=  0;
	else if (TL > _MC_OCMax)	TL 	= _MC_OCMax;
	//-------------------
	if (TR < 0)					TR 	=  0;
	else if (TR > _MC_OCMax)	TR 	= _MC_OCMax;
	//----------------------------------------
	// Set duty cycle(s))
	//----------------------------------------
	OC1RS	= _MC_Base_Value + (uint)TF;
	OC2RS	= _MC_Base_Value + (uint)TB;
	//-------------------
	OC3RS	= _MC_Base_Value + (uint)TL;
	OC4RS	= _MC_Base_Value + (uint)TR;
	}
//**********************************************************************
//**********************************************************************
//**********************************************************************

