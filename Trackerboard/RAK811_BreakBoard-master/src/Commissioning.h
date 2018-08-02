/*
 / _____)             _              | |
( (____  _____ ____ _| |_ _____  ____| |__
 \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 _____) ) ____| | | || |_| ____( (___| | | |
(______/|_____)_|_|_| \__)_____)\____)_| |_|
    (C)2015 Semtech

Description: End device commissioning parameters

License: Revised BSD License, see LICENSE.TXT file include in the project

Maintainer: Miguel Luis and Gregory Cristian
*/
#ifndef __LORA_COMMISSIONING_H__
#define __LORA_COMMISSIONING_H__

/*!
 * When set to 1 the application uses the Over-the-Air activation procedure
 * When set to 0 the application uses the Personalization activation procedure
 */
#define OVER_THE_AIR_ACTIVATION                     0

/*!
 * Indicates if the end-device is to be connected to a private or public network
 */
#define LORAWAN_PUBLIC_NETWORK                      true

/*!
 * IEEE Organizationally Unique Identifier ( OUI ) (big endian)
 * \remark This is unique to a company or organization
 */
#define IEEE_OUI                                    0x60, 0xC5, 0xA8

/*!
 * Mote device IEEE EUI (big endian)
 *
 * \remark In this application the value is automatically generated by calling
 *         BoardGetUniqueId function
 */
#define LORAWAN_DEVICE_EUI                         { 0x00, 0xD3, 0x39, 0xC5, 0x5D, 0x85, 0x2A, 0xB0 }

/*!
 * Application IEEE EUI (big endian)
 */
#define LORAWAN_APPLICATION_EUI                     { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x01, 0x09, 0x97 }
                                                     //70b3d57ef00046a4   70B3D57E D0007DFA
/*!
 * AES encryption/decryption cipher application key
 */
#define LORAWAN_APPLICATION_KEY                     { 0x1E, 0x58, 0x3D, 0x40, 0x04, 0xE9, 0xF7, 0x5B, 0xC6, 0x6C, 0x97, 0x2A, 0x82, 0x19, 0x15, 0x44 }
                                                     //a6b08140dae1d795ebfa5a6dee1f4dbd    09A503D6256F9EF612A15181F583880A
/*!
 * Current network ID
 */
#define LORAWAN_NETWORK_ID                          ( uint32_t )0

/*!
 * Device address on the network (big endian)
 *
 * \remark In this application the value is automatically generated using
 *         a pseudo random generator seeded with a value derived from
 *         BoardUniqueId value if LORAWAN_DEVICE_ADDRESS is set to 0
 */
 #define LORAWAN_DEVICE_ADDRESS                      ( uint32_t )0x26021B79


/*!
 * AES encryption/decryption cipher network session key
 */
#define LORAWAN_NWKSKEY                             { 0x59, 0x76, 0x36, 0xD2, 0x3E, 0x5A, 0x8D, 0x47, 0x5A, 0xC5, 0xBA, 0x3A, 0xC3, 0x1B, 0x07, 0xD8 }
/*!
 * AES encryption/decryption cipher application session key
 */
#define LORAWAN_APPSKEY                             { 0x5E, 0x22, 0x3F, 0xCF, 0xEF, 0xA8, 0xAE, 0x72, 0x5A, 0xDC, 0x15, 0xA3, 0x50, 0xCB, 0xD0, 0x45 }
#endif // __LORA_COMMISSIONING_H__
