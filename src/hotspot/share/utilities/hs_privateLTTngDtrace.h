#include "utilities/lttng.hpp"

#define HS_PRIVATE_SAFEPOINT_BEGIN_WRAPPER() \
HS_PRIVATE_SAFEPOINT_BEGIN();tracepoint(hs_private, safepoint__begin)

#define HS_PRIVATE_SAFEPOINT_END_WRAPPER() \
HS_PRIVATE_SAFEPOINT_END();tracepoint(hs_private, safepoint__end)

#define HS_PRIVATE_CMS_INITMARK_BEGIN_WRAPPER() \
HS_PRIVATE_CMS_INITMARK_BEGIN();tracepoint(hs_private, cms__initmark__begin)

#define HS_PRIVATE_CMS_INITMARK_END_WRAPPER() \
HS_PRIVATE_CMS_INITMARK_END();tracepoint(hs_private, cms__initmark__end)

#define HS_PRIVATE_CMS_REMARK_BEGIN_WRAPPER() \
HS_PRIVATE_CMS_REMARK_BEGIN();tracepoint(hs_private, cms__remark__begin)

#define HS_PRIVATE_CMS_REMARK_END_WRAPPER() \
HS_PRIVATE_CMS_REMARK_END();tracepoint(hs_private, cms__remark__end)

