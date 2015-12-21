%package -n patterns-sailfish-device-adaptation-fp3
Summary: Jolla HW Adaptation fp3
Requires: droid-hal-fp3
Requires: droid-hal-fp3-img-boot
Requires: droid-hal-fp3-img-recovery
Requires: droid-hal-fp3-kernel-dtbo
#Requires: droid-hal-fp3-tools

Requires: droid-config-fp3-sailfish
Requires: droid-config-fp3-pulseaudio-settings
Requires: droid-config-fp3-policy-settings
Requires: droid-config-fp3-preinit-plugin
Requires: droid-config-fp3-flashing
Requires: droid-config-fp3-bluez5
Requires: droid-hal-version-fp3

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Bluetooth
Requires: bluebinder

# Telephony
Requires: ofono-ril-binder-plugin
Requires: dummy_netd

# NFC
Requires: nfcd-binder-plugin

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# For hybris devices with droidmedia, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

Requires: miniaudiopolicy

# For camera dummy audioflinger is needed
Requires: audiosystem-passthrough-dummy-af

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# Fingerprint support
Requires: sailfish-fpd-community
Requires: sailfish-devicelock-fpd
Requires: droid-fake-crypt

# For GPS
Requires: geoclue-provider-hybris

# For FM radio
#Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
#Requires: jolla-mediaplayer-radio

# For suspend to work with enabled Wi-Fi on newer Qualcomm devices
Requires: sailfish-connman-plugin-suspend

%description -n patterns-sailfish-device-adaptation-fp3
Pattern with packages for fp3 HW Adaptation

%files -n patterns-sailfish-device-adaptation-fp3
