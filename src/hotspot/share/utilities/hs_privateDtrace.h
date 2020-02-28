#include "utilities/dtrace.hpp";

#define HS_PRIVATE_SAFEPOINT_BEGIN_WRAPPER (hs_private, safepoint__begin , )\
HS_PRIVATE_SAFEPOINT_BEGIN ()

#define HS_PRIVATE_SAFEPOINT_END_WRAPPER (hs_private, safepoint__end , )\
HS_PRIVATE_SAFEPOINT_END ()

#define HS_PRIVATE_CMS_INITMARK_BEGIN_WRAPPER (hs_private, cms__initmark__begin , )\
HS_PRIVATE_CMS_INITMARK_BEGIN ()

#define HS_PRIVATE_CMS_INITMARK_END_WRAPPER (hs_private, cms__initmark__end , )\
HS_PRIVATE_CMS_INITMARK_END ()

#define HS_PRIVATE_CMS_REMARK_BEGIN_WRAPPER (hs_private, cms__remark__begin , )\
HS_PRIVATE_CMS_REMARK_BEGIN ()

#define HS_PRIVATE_CMS_REMARK_END_WRAPPER (hs_private, cms__remark__end , arg0, arg1, arg2)\
HS_PRIVATE_CMS_REMARK_END (arg0, arg1, arg2)

