/**
 * SSAS - Simple Smart Automotive Software
 * Copyright (C) 2021 Parai Wang <parai@foxmail.com>
 */

/* ================================ [ INCLUDES  ] ============================================== */
#include "Mcu.h"
#include "Std_Timer.h"
/* ================================ [ MACROS    ] ============================================== */
/* ================================ [ TYPES     ] ============================================== */
/* ================================ [ DECLARES  ] ============================================== */
extern void Irq_Init(void);
extern void uart_init(void);
extern void Os_PortStartSysTick(void);

void DisableInterrupt(void);
void EnableInterrupt(void);
/* ================================ [ DATAS     ] ============================================== */
/* ================================ [ LOCALS    ] ============================================== */
/* ================================ [ FUNCTIONS ] ============================================== */
void Mcu_Init(const Mcu_ConfigType *ConfigPtr) {
  DisableInterrupt();
  Irq_Init();
  uart_init();
}