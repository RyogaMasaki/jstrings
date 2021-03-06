/*!
 * \author Damian Rogers (damian@sudden-desu.net)
 * \version 1.1
 * \date 2019.12.01
 * \copyright MIT License
 */

#ifndef ENC_SHIFTJIS_H
#define ENC_SHIFTJIS_H
#include "encoding.h"

namespace encodings
{

class encoding_shiftjis : public encoding
{
public:
	encoding_shiftjis() : encoding(2){};
	u8 is_valid(u8 const *data);
	~encoding_shiftjis(){};
};

} // namespace encodings
#endif // ENC_SHIFTJIS_H
