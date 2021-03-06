
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef ZEPHYR_SYSCALL_LIST_H
#define ZEPHYR_SYSCALL_LIST_H

#define K_SYSCALL_ADC_CHANNEL_SETUP 0
#define K_SYSCALL_ADC_READ 1
#define K_SYSCALL_ADC_READ_ASYNC 2
#define K_SYSCALL_ATOMIC_ADD 3
#define K_SYSCALL_ATOMIC_AND 4
#define K_SYSCALL_ATOMIC_CAS 5
#define K_SYSCALL_ATOMIC_NAND 6
#define K_SYSCALL_ATOMIC_OR 7
#define K_SYSCALL_ATOMIC_PTR_CAS 8
#define K_SYSCALL_ATOMIC_PTR_SET 9
#define K_SYSCALL_ATOMIC_SET 10
#define K_SYSCALL_ATOMIC_SUB 11
#define K_SYSCALL_ATOMIC_XOR 12
#define K_SYSCALL_BBRAM_CHECK_INVALID 13
#define K_SYSCALL_BBRAM_CHECK_POWER 14
#define K_SYSCALL_BBRAM_CHECK_STANDBY_POWER 15
#define K_SYSCALL_BBRAM_GET_SIZE 16
#define K_SYSCALL_BBRAM_READ 17
#define K_SYSCALL_BBRAM_WRITE 18
#define K_SYSCALL_CAN_ADD_RX_FILTER_MSGQ 19
#define K_SYSCALL_CAN_GET_CORE_CLOCK 20
#define K_SYSCALL_CAN_GET_MAX_FILTERS 21
#define K_SYSCALL_CAN_GET_STATE 22
#define K_SYSCALL_CAN_RECOVER 23
#define K_SYSCALL_CAN_REMOVE_RX_FILTER 24
#define K_SYSCALL_CAN_SEND 25
#define K_SYSCALL_CAN_SET_MODE 26
#define K_SYSCALL_CAN_SET_TIMING 27
#define K_SYSCALL_CLOCK_GETTIME 28
#define K_SYSCALL_COUNTER_CANCEL_CHANNEL_ALARM 29
#define K_SYSCALL_COUNTER_GET_FREQUENCY 30
#define K_SYSCALL_COUNTER_GET_GUARD_PERIOD 31
#define K_SYSCALL_COUNTER_GET_MAX_TOP_VALUE 32
#define K_SYSCALL_COUNTER_GET_NUM_OF_CHANNELS 33
#define K_SYSCALL_COUNTER_GET_PENDING_INT 34
#define K_SYSCALL_COUNTER_GET_TOP_VALUE 35
#define K_SYSCALL_COUNTER_GET_VALUE 36
#define K_SYSCALL_COUNTER_IS_COUNTING_UP 37
#define K_SYSCALL_COUNTER_SET_CHANNEL_ALARM 38
#define K_SYSCALL_COUNTER_SET_GUARD_PERIOD 39
#define K_SYSCALL_COUNTER_SET_TOP_VALUE 40
#define K_SYSCALL_COUNTER_START 41
#define K_SYSCALL_COUNTER_STOP 42
#define K_SYSCALL_COUNTER_TICKS_TO_US 43
#define K_SYSCALL_COUNTER_US_TO_TICKS 44
#define K_SYSCALL_DAC_CHANNEL_SETUP 45
#define K_SYSCALL_DAC_WRITE_VALUE 46
#define K_SYSCALL_DEVICE_GET_BINDING 47
#define K_SYSCALL_DEVICE_IS_READY 48
#define K_SYSCALL_DMA_CHAN_FILTER 49
#define K_SYSCALL_DMA_RELEASE_CHANNEL 50
#define K_SYSCALL_DMA_REQUEST_CHANNEL 51
#define K_SYSCALL_DMA_RESUME 52
#define K_SYSCALL_DMA_START 53
#define K_SYSCALL_DMA_STOP 54
#define K_SYSCALL_DMA_SUSPEND 55
#define K_SYSCALL_EC_HOST_CMD_PERIPH_INIT 56
#define K_SYSCALL_EC_HOST_CMD_PERIPH_SEND 57
#define K_SYSCALL_EEPROM_GET_SIZE 58
#define K_SYSCALL_EEPROM_READ 59
#define K_SYSCALL_EEPROM_WRITE 60
#define K_SYSCALL_ENTROPY_GET_ENTROPY 61
#define K_SYSCALL_ESPI_CONFIG 62
#define K_SYSCALL_ESPI_FLASH_ERASE 63
#define K_SYSCALL_ESPI_GET_CHANNEL_STATUS 64
#define K_SYSCALL_ESPI_READ_FLASH 65
#define K_SYSCALL_ESPI_READ_LPC_REQUEST 66
#define K_SYSCALL_ESPI_READ_REQUEST 67
#define K_SYSCALL_ESPI_RECEIVE_OOB 68
#define K_SYSCALL_ESPI_RECEIVE_VWIRE 69
#define K_SYSCALL_ESPI_SAF_ACTIVATE 70
#define K_SYSCALL_ESPI_SAF_CONFIG 71
#define K_SYSCALL_ESPI_SAF_FLASH_ERASE 72
#define K_SYSCALL_ESPI_SAF_FLASH_READ 73
#define K_SYSCALL_ESPI_SAF_FLASH_WRITE 74
#define K_SYSCALL_ESPI_SAF_GET_CHANNEL_STATUS 75
#define K_SYSCALL_ESPI_SAF_SET_PROTECTION_REGIONS 76
#define K_SYSCALL_ESPI_SEND_OOB 77
#define K_SYSCALL_ESPI_SEND_VWIRE 78
#define K_SYSCALL_ESPI_WRITE_FLASH 79
#define K_SYSCALL_ESPI_WRITE_LPC_REQUEST 80
#define K_SYSCALL_ESPI_WRITE_REQUEST 81
#define K_SYSCALL_FLASH_ERASE 82
#define K_SYSCALL_FLASH_GET_PAGE_COUNT 83
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX 84
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS 85
#define K_SYSCALL_FLASH_GET_PARAMETERS 86
#define K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE 87
#define K_SYSCALL_FLASH_READ 88
#define K_SYSCALL_FLASH_READ_JEDEC_ID 89
#define K_SYSCALL_FLASH_SFDP_READ 90
#define K_SYSCALL_FLASH_SIMULATOR_GET_MEMORY 91
#define K_SYSCALL_FLASH_WRITE 92
#define K_SYSCALL_GPIO_GET_PENDING_INT 93
#define K_SYSCALL_GPIO_PIN_CONFIGURE 94
#define K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE 95
#define K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW 96
#define K_SYSCALL_GPIO_PORT_GET_RAW 97
#define K_SYSCALL_GPIO_PORT_SET_BITS_RAW 98
#define K_SYSCALL_GPIO_PORT_SET_MASKED_RAW 99
#define K_SYSCALL_GPIO_PORT_TOGGLE_BITS 100
#define K_SYSCALL_HWINFO_CLEAR_RESET_CAUSE 101
#define K_SYSCALL_HWINFO_GET_DEVICE_ID 102
#define K_SYSCALL_HWINFO_GET_RESET_CAUSE 103
#define K_SYSCALL_HWINFO_GET_SUPPORTED_RESET_CAUSE 104
#define K_SYSCALL_I2C_CONFIGURE 105
#define K_SYSCALL_I2C_GET_CONFIG 106
#define K_SYSCALL_I2C_RECOVER_BUS 107
#define K_SYSCALL_I2C_SLAVE_DRIVER_REGISTER 108
#define K_SYSCALL_I2C_SLAVE_DRIVER_UNREGISTER 109
#define K_SYSCALL_I2C_TRANSFER 110
#define K_SYSCALL_I2S_BUF_READ 111
#define K_SYSCALL_I2S_BUF_WRITE 112
#define K_SYSCALL_I2S_CONFIGURE 113
#define K_SYSCALL_I2S_TRIGGER 114
#define K_SYSCALL_IPM_MAX_DATA_SIZE_GET 115
#define K_SYSCALL_IPM_MAX_ID_VAL_GET 116
#define K_SYSCALL_IPM_SEND 117
#define K_SYSCALL_IPM_SET_ENABLED 118
#define K_SYSCALL_IVSHMEM_GET_ID 119
#define K_SYSCALL_IVSHMEM_GET_MEM 120
#define K_SYSCALL_IVSHMEM_GET_VECTORS 121
#define K_SYSCALL_IVSHMEM_INT_PEER 122
#define K_SYSCALL_IVSHMEM_REGISTER_HANDLER 123
#define K_SYSCALL_KSCAN_CONFIG 124
#define K_SYSCALL_KSCAN_DISABLE_CALLBACK 125
#define K_SYSCALL_KSCAN_ENABLE_CALLBACK 126
#define K_SYSCALL_K_BUSY_WAIT 127
#define K_SYSCALL_K_CONDVAR_BROADCAST 128
#define K_SYSCALL_K_CONDVAR_INIT 129
#define K_SYSCALL_K_CONDVAR_SIGNAL 130
#define K_SYSCALL_K_CONDVAR_WAIT 131
#define K_SYSCALL_K_EVENT_INIT 132
#define K_SYSCALL_K_EVENT_POST 133
#define K_SYSCALL_K_EVENT_SET 134
#define K_SYSCALL_K_EVENT_WAIT 135
#define K_SYSCALL_K_EVENT_WAIT_ALL 136
#define K_SYSCALL_K_FLOAT_DISABLE 137
#define K_SYSCALL_K_FLOAT_ENABLE 138
#define K_SYSCALL_K_FUTEX_WAIT 139
#define K_SYSCALL_K_FUTEX_WAKE 140
#define K_SYSCALL_K_IS_PREEMPT_THREAD 141
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_IN_GET 142
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_OUT_GET 143
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_EVICTION_GET 144
#define K_SYSCALL_K_MEM_PAGING_STATS_GET 145
#define K_SYSCALL_K_MEM_PAGING_THREAD_STATS_GET 146
#define K_SYSCALL_K_MSGQ_ALLOC_INIT 147
#define K_SYSCALL_K_MSGQ_GET 148
#define K_SYSCALL_K_MSGQ_GET_ATTRS 149
#define K_SYSCALL_K_MSGQ_NUM_FREE_GET 150
#define K_SYSCALL_K_MSGQ_NUM_USED_GET 151
#define K_SYSCALL_K_MSGQ_PEEK 152
#define K_SYSCALL_K_MSGQ_PURGE 153
#define K_SYSCALL_K_MSGQ_PUT 154
#define K_SYSCALL_K_MUTEX_INIT 155
#define K_SYSCALL_K_MUTEX_LOCK 156
#define K_SYSCALL_K_MUTEX_UNLOCK 157
#define K_SYSCALL_K_OBJECT_ACCESS_GRANT 158
#define K_SYSCALL_K_OBJECT_ALLOC 159
#define K_SYSCALL_K_OBJECT_RELEASE 160
#define K_SYSCALL_K_PIPE_ALLOC_INIT 161
#define K_SYSCALL_K_PIPE_BUFFER_FLUSH 162
#define K_SYSCALL_K_PIPE_FLUSH 163
#define K_SYSCALL_K_PIPE_GET 164
#define K_SYSCALL_K_PIPE_PUT 165
#define K_SYSCALL_K_PIPE_READ_AVAIL 166
#define K_SYSCALL_K_PIPE_WRITE_AVAIL 167
#define K_SYSCALL_K_POLL 168
#define K_SYSCALL_K_POLL_SIGNAL_CHECK 169
#define K_SYSCALL_K_POLL_SIGNAL_INIT 170
#define K_SYSCALL_K_POLL_SIGNAL_RAISE 171
#define K_SYSCALL_K_POLL_SIGNAL_RESET 172
#define K_SYSCALL_K_QUEUE_ALLOC_APPEND 173
#define K_SYSCALL_K_QUEUE_ALLOC_PREPEND 174
#define K_SYSCALL_K_QUEUE_CANCEL_WAIT 175
#define K_SYSCALL_K_QUEUE_GET 176
#define K_SYSCALL_K_QUEUE_INIT 177
#define K_SYSCALL_K_QUEUE_IS_EMPTY 178
#define K_SYSCALL_K_QUEUE_PEEK_HEAD 179
#define K_SYSCALL_K_QUEUE_PEEK_TAIL 180
#define K_SYSCALL_K_SEM_COUNT_GET 181
#define K_SYSCALL_K_SEM_GIVE 182
#define K_SYSCALL_K_SEM_INIT 183
#define K_SYSCALL_K_SEM_RESET 184
#define K_SYSCALL_K_SEM_TAKE 185
#define K_SYSCALL_K_SLEEP 186
#define K_SYSCALL_K_STACK_ALLOC_INIT 187
#define K_SYSCALL_K_STACK_POP 188
#define K_SYSCALL_K_STACK_PUSH 189
#define K_SYSCALL_K_STR_OUT 190
#define K_SYSCALL_K_THREAD_ABORT 191
#define K_SYSCALL_K_THREAD_CREATE 192
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_GET 193
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_SET 194
#define K_SYSCALL_K_THREAD_DEADLINE_SET 195
#define K_SYSCALL_K_THREAD_JOIN 196
#define K_SYSCALL_K_THREAD_NAME_COPY 197
#define K_SYSCALL_K_THREAD_NAME_SET 198
#define K_SYSCALL_K_THREAD_PRIORITY_GET 199
#define K_SYSCALL_K_THREAD_PRIORITY_SET 200
#define K_SYSCALL_K_THREAD_RESUME 201
#define K_SYSCALL_K_THREAD_STACK_SPACE_GET 202
#define K_SYSCALL_K_THREAD_START 203
#define K_SYSCALL_K_THREAD_SUSPEND 204
#define K_SYSCALL_K_THREAD_TIMEOUT_EXPIRES_TICKS 205
#define K_SYSCALL_K_THREAD_TIMEOUT_REMAINING_TICKS 206
#define K_SYSCALL_K_TIMER_EXPIRES_TICKS 207
#define K_SYSCALL_K_TIMER_REMAINING_TICKS 208
#define K_SYSCALL_K_TIMER_START 209
#define K_SYSCALL_K_TIMER_STATUS_GET 210
#define K_SYSCALL_K_TIMER_STATUS_SYNC 211
#define K_SYSCALL_K_TIMER_STOP 212
#define K_SYSCALL_K_TIMER_USER_DATA_GET 213
#define K_SYSCALL_K_TIMER_USER_DATA_SET 214
#define K_SYSCALL_K_UPTIME_TICKS 215
#define K_SYSCALL_K_USLEEP 216
#define K_SYSCALL_K_WAKEUP 217
#define K_SYSCALL_K_YIELD 218
#define K_SYSCALL_LED_BLINK 219
#define K_SYSCALL_LED_GET_INFO 220
#define K_SYSCALL_LED_OFF 221
#define K_SYSCALL_LED_ON 222
#define K_SYSCALL_LED_SET_BRIGHTNESS 223
#define K_SYSCALL_LED_SET_CHANNEL 224
#define K_SYSCALL_LED_SET_COLOR 225
#define K_SYSCALL_LED_WRITE_CHANNELS 226
#define K_SYSCALL_LOG_BUFFERED_CNT 227
#define K_SYSCALL_LOG_FILTER_SET 228
#define K_SYSCALL_LOG_PANIC 229
#define K_SYSCALL_LOG_PROCESS 230
#define K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT 231
#define K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT 232
#define K_SYSCALL_MBOX_MAX_CHANNELS_GET 233
#define K_SYSCALL_MBOX_MTU_GET 234
#define K_SYSCALL_MBOX_SEND 235
#define K_SYSCALL_MBOX_SET_ENABLED 236
#define K_SYSCALL_MDIO_BUS_DISABLE 237
#define K_SYSCALL_MDIO_BUS_ENABLE 238
#define K_SYSCALL_MDIO_READ 239
#define K_SYSCALL_MDIO_WRITE 240
#define K_SYSCALL_NET_ADDR_NTOP 241
#define K_SYSCALL_NET_ADDR_PTON 242
#define K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX 243
#define K_SYSCALL_NET_IF_GET_BY_INDEX 244
#define K_SYSCALL_NET_IF_IPV4_ADDR_ADD_BY_INDEX 245
#define K_SYSCALL_NET_IF_IPV4_ADDR_LOOKUP_BY_INDEX 246
#define K_SYSCALL_NET_IF_IPV4_ADDR_RM_BY_INDEX 247
#define K_SYSCALL_NET_IF_IPV4_SET_GW_BY_INDEX 248
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_INDEX 249
#define K_SYSCALL_NET_IF_IPV6_ADDR_ADD_BY_INDEX 250
#define K_SYSCALL_NET_IF_IPV6_ADDR_LOOKUP_BY_INDEX 251
#define K_SYSCALL_NET_IF_IPV6_ADDR_RM_BY_INDEX 252
#define K_SYSCALL_NRF_QSPI_NOR_BASE_CLOCK_DIV_FORCE 253
#define K_SYSCALL_PECI_CONFIG 254
#define K_SYSCALL_PECI_DISABLE 255
#define K_SYSCALL_PECI_ENABLE 256
#define K_SYSCALL_PECI_TRANSFER 257
#define K_SYSCALL_PHY_CONFIGURE_LINK 258
#define K_SYSCALL_PHY_GET_LINK_STATE 259
#define K_SYSCALL_PHY_LINK_CALLBACK_SET 260
#define K_SYSCALL_PHY_READ 261
#define K_SYSCALL_PHY_WRITE 262
#define K_SYSCALL_PS2_CONFIG 263
#define K_SYSCALL_PS2_DISABLE_CALLBACK 264
#define K_SYSCALL_PS2_ENABLE_CALLBACK 265
#define K_SYSCALL_PS2_READ 266
#define K_SYSCALL_PS2_WRITE 267
#define K_SYSCALL_PTP_CLOCK_GET 268
#define K_SYSCALL_PWM_GET_CYCLES_PER_SEC 269
#define K_SYSCALL_PWM_PIN_CAPTURE_CYCLES 270
#define K_SYSCALL_PWM_PIN_DISABLE_CAPTURE 271
#define K_SYSCALL_PWM_PIN_ENABLE_CAPTURE 272
#define K_SYSCALL_PWM_PIN_SET_CYCLES 273
#define K_SYSCALL_SENSOR_ATTR_GET 274
#define K_SYSCALL_SENSOR_ATTR_SET 275
#define K_SYSCALL_SENSOR_CHANNEL_GET 276
#define K_SYSCALL_SENSOR_SAMPLE_FETCH 277
#define K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN 278
#define K_SYSCALL_SPI_RELEASE 279
#define K_SYSCALL_SPI_TRANSCEIVE 280
#define K_SYSCALL_SYSCON_GET_BASE 281
#define K_SYSCALL_SYSCON_GET_SIZE 282
#define K_SYSCALL_SYSCON_READ_REG 283
#define K_SYSCALL_SYSCON_WRITE_REG 284
#define K_SYSCALL_SYS_CACHE_DATA_ALL 285
#define K_SYSCALL_SYS_CACHE_DATA_RANGE 286
#define K_SYSCALL_SYS_CACHE_INSTR_ALL 287
#define K_SYSCALL_SYS_CACHE_INSTR_RANGE 288
#define K_SYSCALL_SYS_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET 289
#define K_SYSCALL_SYS_CSRAND_GET 290
#define K_SYSCALL_SYS_RAND32_GET 291
#define K_SYSCALL_SYS_RAND_GET 292
#define K_SYSCALL_UART_CONFIGURE 293
#define K_SYSCALL_UART_CONFIG_GET 294
#define K_SYSCALL_UART_DRV_CMD 295
#define K_SYSCALL_UART_ERR_CHECK 296
#define K_SYSCALL_UART_IRQ_ERR_DISABLE 297
#define K_SYSCALL_UART_IRQ_ERR_ENABLE 298
#define K_SYSCALL_UART_IRQ_IS_PENDING 299
#define K_SYSCALL_UART_IRQ_RX_DISABLE 300
#define K_SYSCALL_UART_IRQ_RX_ENABLE 301
#define K_SYSCALL_UART_IRQ_TX_DISABLE 302
#define K_SYSCALL_UART_IRQ_TX_ENABLE 303
#define K_SYSCALL_UART_IRQ_UPDATE 304
#define K_SYSCALL_UART_LINE_CTRL_GET 305
#define K_SYSCALL_UART_LINE_CTRL_SET 306
#define K_SYSCALL_UART_MUX_FIND 307
#define K_SYSCALL_UART_POLL_IN 308
#define K_SYSCALL_UART_POLL_IN_U16 309
#define K_SYSCALL_UART_POLL_OUT 310
#define K_SYSCALL_UART_POLL_OUT_U16 311
#define K_SYSCALL_UART_RX_DISABLE 312
#define K_SYSCALL_UART_RX_ENABLE 313
#define K_SYSCALL_UART_RX_ENABLE_U16 314
#define K_SYSCALL_UART_TX 315
#define K_SYSCALL_UART_TX_ABORT 316
#define K_SYSCALL_UART_TX_U16 317
#define K_SYSCALL_USER_FAULT 318
#define K_SYSCALL_WDT_DISABLE 319
#define K_SYSCALL_WDT_FEED 320
#define K_SYSCALL_WDT_SETUP 321
#define K_SYSCALL_ZEPHYR_FPUTC 322
#define K_SYSCALL_ZEPHYR_FWRITE 323
#define K_SYSCALL_ZEPHYR_READ_STDIN 324
#define K_SYSCALL_ZEPHYR_WRITE_STDOUT 325
#define K_SYSCALL_ZSOCK_ACCEPT 326
#define K_SYSCALL_ZSOCK_BIND 327
#define K_SYSCALL_ZSOCK_CLOSE 328
#define K_SYSCALL_ZSOCK_CONNECT 329
#define K_SYSCALL_ZSOCK_FCNTL 330
#define K_SYSCALL_ZSOCK_GETHOSTNAME 331
#define K_SYSCALL_ZSOCK_GETSOCKNAME 332
#define K_SYSCALL_ZSOCK_GETSOCKOPT 333
#define K_SYSCALL_ZSOCK_GET_CONTEXT_OBJECT 334
#define K_SYSCALL_ZSOCK_INET_PTON 335
#define K_SYSCALL_ZSOCK_LISTEN 336
#define K_SYSCALL_ZSOCK_POLL 337
#define K_SYSCALL_ZSOCK_RECVFROM 338
#define K_SYSCALL_ZSOCK_SELECT 339
#define K_SYSCALL_ZSOCK_SENDMSG 340
#define K_SYSCALL_ZSOCK_SENDTO 341
#define K_SYSCALL_ZSOCK_SETSOCKOPT 342
#define K_SYSCALL_ZSOCK_SHUTDOWN 343
#define K_SYSCALL_ZSOCK_SOCKET 344
#define K_SYSCALL_ZSOCK_SOCKETPAIR 345
#define K_SYSCALL_Z_CURRENT_GET 346
#define K_SYSCALL_Z_ERRNO 347
#define K_SYSCALL_Z_LOG_HEXDUMP_FROM_USER 348
#define K_SYSCALL_Z_LOG_MSG2_RUNTIME_VCREATE 349
#define K_SYSCALL_Z_LOG_MSG2_STATIC_CREATE 350
#define K_SYSCALL_Z_LOG_STRING_FROM_USER 351
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK 352
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK 353
#define K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL 354
#define K_SYSCALL_BAD 355
#define K_SYSCALL_LIMIT 356


#ifndef _ASMLANGUAGE

#include <stdint.h>

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_SYSCALL_LIST_H */
