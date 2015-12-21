# These and other macros are documented in
# ../droid-configs-device/droid-configs.inc
%define rpm_device fp3
%define device FP3
%define device_pretty Fairphone 3
%define rpm_vendor fairphone
%define vendor fairphone
%define vendor_pretty Fairphone

# Adjust this for your device
%define pixel_ratio 1.75

# Community HW adaptations need this
%define community_adaptation 1

%define out_of_image_files 1

%define android_version_major 10

# For bluez5
%define ofono_enable_plugins bluez5,hfp_ag_bluez5
%define ofono_disable_plugins bluez4,dun_gw_bluez4,hfp_ag_bluez4,hfp_bluez4,dun_gw_bluez5,hfp_bluez5

Provides: ofono-configs
Obsoletes: ofono-configs-mer

Provides: usb-moded-configs
Obsoletes: usb-moded-defaults

%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-fp3.inc
%include patterns/patterns-sailfish-device-configuration-fp3.inc
