#define RDA_BT_IOCTL_MAGIC						'u'
#define RDA_WIFI_POWER_ON_IOCTL                            _IO(RDA_BT_IOCTL_MAGIC ,0x10)
#define RDA_WIFI_POWER_OFF_IOCTL                           _IO(RDA_BT_IOCTL_MAGIC ,0x11)
#define RDA_WIFI_STA_MODE_IOCTL                _IO(RDA_BT_IOCTL_MAGIC ,0x20)
#define RDA_WIFI_SOFTAP_MODE_IOCTL             _IO(RDA_BT_IOCTL_MAGIC ,0x21)
