#include <stdlib.h>
#include <opentmf/driver.h>

const struct opentmf_driver_info info = {
  version : {
    major : 0,
    minor : 1,
    patch : 0,
    extra : ""
  },
  name : "skeleton",
  description :
    "OpenTMF skeleton driver.\n"
    "\n"
    "This driver is just an example to be used as boilerplate.",
  authors :
    "Reinder Feenstra <reinderfeenstra@gmail.com>",
  license : OPENTMF_LICENSE_CC_ZERO_1_0,
  non_free : OPENTMF_FALSE
};

static size_t __ref_count = 0;

void init()
{
  // Initialize any global resources if required.
}

void fini()
{
  // Finalize global resources allocated in init().
}

int opentmf_drv_init(void** context_data)
{
  if(++__ref_count == 1)
    init();

  // Initialize any context related resources if required.

  return OPENTMF_SUCCESS;
}

void opentmf_drv_fini(void* context_data)
{
  // Finalize context related resources allocated in opentmf_drv_init().

  if(--__ref_count == 0)
    fini();
}

const struct opentmf_driver_info* opentmf_drv_get_info()
{
  return &info;
}
