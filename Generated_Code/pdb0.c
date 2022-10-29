/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : pdb0.c
**     Project     : MTRDEVKSPNK144_PMSM_FOC_2Sh
**     Processor   : S32K142_64
**     Component   : pdb
**     Version     : Component SDK_S32K1xx_15, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_S32K1xx_15
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-27, 09:51, # CodeGen: 2
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc. 
**     Copyright 2016-2017 NXP 
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file pdb0.c
** @version 01.00
*/         
/*!
**  @addtogroup pdb0_module pdb0 module documentation
**  @{
*/         

/* MODULE pdb0.
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files that user initialize
 * to use this module.
 */

#include "pdb0.h"

const pdb_adc_pretrigger_config_t pdb0_AdcTrigInitConfig0 = {
  .adcPreTriggerIdx = 0U,
  .preTriggerEnable = true,
  .preTriggerOutputEnable = true,
  .preTriggerBackToBackEnable = false,
};

const pdb_timer_config_t pdb0_InitConfig0 = {
  .loadValueMode = PDB_LOAD_VAL_IMMEDIATELY,
  .seqErrIntEnable = true,
  .clkPreDiv = PDB_CLK_PREDIV_BY_1,
  .clkPreMultFactor = PDB_CLK_PREMULT_FACT_AS_1,
  .triggerInput = PDB_TRIGGER_IN0,
  .continuousModeEnable = false,
  .dmaEnable = false,
  .intEnable = false,
  .instanceBackToBackEnable = false,
};


/* END pdb0. */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the Freescale S32K series of microcontrollers.
**
** ###################################################################
*/

