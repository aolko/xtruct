// Include StdAfx
#include "StdAfx.h"

//////////////////////////////////////////////////////////////////////////////////
// Conditions
//////////////////////////////////////////////////////////////////////////////////


long ExtObject::cCompareDepth(LPVAL params)
{
	return DoComparison(params[0].GetInt(), depth, params[1].GetFloat());
}