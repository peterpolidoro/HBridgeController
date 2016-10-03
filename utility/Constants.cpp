// ----------------------------------------------------------------------------
// Constants.cpp
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#include "Constants.h"


namespace h_bridge_controller
{
namespace constants
{
CONSTANT_STRING(device_name,"h_bridge_controller");

CONSTANT_STRING(firmware_name,"HBridgeController");
// Use semantic versioning http://semver.org/
const modular_server::FirmwareInfo firmware_info =
  {
    .name_ptr=&firmware_name,
    .version_major=1,
    .version_minor=0,
    .version_patch=0,
  };

CONSTANT_STRING(hardware_name,"h_bridge_controller");

// Units

// Fields
CONSTANT_STRING(polarity_reversed_field_name,"polarity_reversed");

// Parameters
CONSTANT_STRING(channel_parameter_name,"channel");

CONSTANT_STRING(polarity_parameter_name,"polarity");
CONSTANT_STRING(polarity_positive,"+");
CONSTANT_STRING(polarity_negative,"-");
const modular_server::SubsetMemberType polarity_ptr_subset[POLARITY_SUBSET_LENGTH] =
  {
    {.cs_ptr=&polarity_positive},
    {.cs_ptr=&polarity_negative},
  };

// Methods
CONSTANT_STRING(set_channel_on_method_name,"setChannelOn");
CONSTANT_STRING(set_channel_off_method_name,"setChannelOff");

// Errors
}
}
