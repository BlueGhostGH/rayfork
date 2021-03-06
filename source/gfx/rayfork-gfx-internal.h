#include "rayfork-context.h"
#include "rayfork-gfx-internal-string-utils.h"

RF_INTERNAL rf_gfx_context* rf__global_gfx_context_ptr;

#define rf_ctx   (*rf__global_gfx_context_ptr)
#define rf_gfx   (rf_ctx.gfx_backend_data)
#define rf_gl    (rf_gfx.gl)
#define rf_batch (*(rf_ctx.current_batch))