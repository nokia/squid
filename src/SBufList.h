#ifndef SQUID_SBUFLIST_H
#define SQUID_SBUFLIST_H

#include "SBuf.h"

#include <list>

typedef std::list<SBuf> SBufList;

/** check for membership
 *
 * \return true if the supplied SBuf is a member of the list
 * \param case_sensitive one of caseSensitive or caseInsensitive
 */
bool IsMember(const SBufList &, const SBuf &, const SBufCaseSensitive isCaseSensitive = caseSensitive);

#endif /* SQUID_SBUFLIST_H */