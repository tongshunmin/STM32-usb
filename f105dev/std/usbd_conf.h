/**
  ******************************************************************************
  * @file    usbd_conf.h
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    09-November-2015
  * @brief   USB Device configuration file
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2015 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USBD_CONF__H__
#define __USBD_CONF__H__

/* Includes ------------------------------------------------------------------*/
#include "usb_conf.h"

/** @defgroup USB_CONF_Exported_Defines
  * @{
  */


#define USBD_CFG_MAX_NUM           1
#define USBD_ITF_MAX_NUM           1

#define USB_MAX_STR_DESC_SIZ       255

#define USBD_SELF_POWERED



#define USBD_DYNAMIC_DESCRIPTOR_CHANGE_ENABLED

/** @defgroup USB_String_Descriptors
  * @{
  */


/** @defgroup USB_HID_Class_Layer_Parameter
  * @{
  */
#define HID_IN_EP1                    0x81
#define HID_IN_EP2                   	0x85
#define HID_OUT_EP1                   0x02
#define HID_OUT_EP2                   0x06

#define HID_IN_PACKET1                0x40//0x20
#define HID_IN_PACKET2                0x40
#define HID_OUT_PACKET1               0x40//0x20
#define HID_OUT_PACKET2               0x40

/**
  * @}
  */
/** @defgroup USB_CONF_Exported_Types
  * @{
  */
/**
  * @}
  */


/** @defgroup USB_CONF_Exported_Macros
  * @{
  */
/**
  * @}
  */

/** @defgroup USB_CONF_Exported_Variables
  * @{
  */
/**
  * @}
  */

/** @defgroup USB_CONF_Exported_FunctionsPrototype
  * @{
  */
/**
  * @}
  */


#endif /* __USBD_CONF__H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

