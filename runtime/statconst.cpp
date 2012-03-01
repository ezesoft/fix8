//-----------------------------------------------------------------------------------------
#if 0

Fix8 is released under the New BSD License.

Copyright (c) 2010-12, David L. Dight <fix@fix8.org>
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are
permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of
	 	conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list
	 	of conditions and the following disclaimer in the documentation and/or other
		materials provided with the distribution.
    * Neither the name of the author nor the names of its contributors may be used to
	 	endorse or promote products derived from this software without specific prior
		written permission.
    * Products derived from this software may not be called "Fix8", nor can "Fix8" appear
	   in their name without written permission from fix8.org

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
OR  IMPLIED  WARRANTIES,  INCLUDING,  BUT  NOT  LIMITED  TO ,  THE  IMPLIED  WARRANTIES  OF
MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE ARE  DISCLAIMED. IN  NO EVENT  SHALL
THE  COPYRIGHT  OWNER OR  CONTRIBUTORS BE  LIABLE  FOR  ANY DIRECT,  INDIRECT,  INCIDENTAL,
SPECIAL,  EXEMPLARY, OR CONSEQUENTIAL  DAMAGES (INCLUDING,  BUT NOT LIMITED TO, PROCUREMENT
OF SUBSTITUTE  GOODS OR SERVICES; LOSS OF USE, DATA,  OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED  AND ON ANY THEORY OF LIABILITY, WHETHER  IN CONTRACT, STRICT  LIABILITY, OR
TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#endif
//-----------------------------------------------------------------------------------------
#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <iterator>
#include <memory>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <bitset>

#include <strings.h>
#include <regex.h>

#include <f8includes.hpp>

//-------------------------------------------------------------------------------------------------
using namespace FIX8;
using namespace std;

//-------------------------------------------------------------------------------------------------
const Tickval::ticks Tickval::noticks;
const Tickval::ticks Tickval::thousand;
const Tickval::ticks Tickval::million;
const Tickval::ticks Tickval::billion;

//-------------------------------------------------------------------------------------------------
const int RegExp::MaxErrLen_;
const int RegMatch::SubLimit_;

//-------------------------------------------------------------------------------------------------
const int XmlEntity::MaxDepth;

//-------------------------------------------------------------------------------------------------
const unsigned Logger::rotation_default, Logger::max_rotation;

//-------------------------------------------------------------------------------------------------
const unsigned Session::default_retry_interval, Session::default_login_retries;

//-------------------------------------------------------------------------------------------------
const unsigned MemoryPool::default_page_sz;

//-------------------------------------------------------------------------------------------------
template<const unsigned short field> const size_t Field<UTCTimestamp, field>::_sec_only;
template<const unsigned short field> const size_t Field<UTCTimestamp, field>::_with_ms;

//-------------------------------------------------------------------------------------------------
const size_t FIXReader::_max_msg_len, FIXReader::_chksum_sz;

//-------------------------------------------------------------------------------------------------
const size_t Persister::MaxMsgLen;

