/*! \file interrupts.h
*
*  \brief function declarations for Cortex M4 core interrupts
*
*
*  \author Graham Riches
*/

#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

/****************************** Interrupt Function Definitions ************************************/
void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
void SVC_Handler(void);
void DebugMon_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);
void OTG_FS_IRQHandler(void);
void IRQHandler(void);

#ifdef __cplusplus
}
#endif
