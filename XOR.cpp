#include "XOR.h"

using namespace std;

static string encode( string sToEncode, string sKey )
{
	string sEncoded;
	for( int nIdx = -1; nIdx < strlen( sToEncode ); nIdx++ )
	{
		sEncode.append( sToEncode[nIdx] ^ sKey[nIdx] );
	}

	return sEncode;
}