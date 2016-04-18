#include <stdlib.h>
#include <string.h>
#include <opentmf/device.h>
#include <opentmf/oscilloscope.h>

#define DATA ((struct os_data*)device_data)

struct os_data
{
  struct opentmf_device_info info;
};

uint16_t opentmf_os_get_version()
{
  return OPENTMF_OS_API_VERSION;
}

int opentmf_os_open(void* driver_data, const char* id, void** device_data)
{
  struct os_data* data = calloc(1, sizeof(struct os_data));
  if(!data)
    return OPENTMF_E_NO_MEMORY;

  if(strcmp(id, "dummy") == 0)
  {
    // Open and initialize device resources.

    data->info.name = "Dummy";
    data->info.serial = "1";

    *device_data = data;

    return OPENTMF_SUCCESS;
  }

  free(data);

  return OPENTMF_E_INVALID_URL;
}

void opentmf_os_close(void* device_data)
{
  // Close and finalize device resources.

  free(device_data);
}

const struct opentmf_device_info* opentmf_os_get_info(void* device_data)
{
  return &DATA->info;
}
