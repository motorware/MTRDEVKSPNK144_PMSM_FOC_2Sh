/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : flexTimer_pwm3.c
**     Project     : MTRDEVKSPNK144_PMSM_FOC_2Sh
**     Processor   : S32K142_64
**     Component   : ftm_pwm
**     Version     : Component SDK_S32K1xx_15, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_S32K1xx_15
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-27, 20:12, # CodeGen: 25
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
** @file flexTimer_pwm3.c
** @version 01.00
*/         
/*!
**  @addtogroup flexTimer_pwm3_module flexTimer_pwm3 module documentation
**  @{
*/         

/* Module flexTimer_pwm3.
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 8.4, external symbol defined without a prior
 * declaration.
 * The symbols are declared in the driver header as external; the header is not included
 * by this file.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variable will be used in other source files in application code.
 */

#include "flexTimer_pwm3.h"



/* Fault configuration structure for FTM0 */
ftm_pwm_fault_param_t flexTimer_pwm3_FaultConfig =
{
    false, /* Output pin state on fault */
    false, /* PWM fault interrupt state */
    0U, /* Fault filter value */
    FTM_FAULT_CONTROL_DISABLED,  /* Fault mode */
    {
        {
            false, /* Fault channel state (Enabled/Disabled) */
            false, /* Fault channel filter state (Enabled/Disabled) */
            FTM_POLARITY_LOW, /* Fault channel state (Enabled/Disabled) */
        },
        {
            false, /* Fault channel state (Enabled/Disabled) */
            false, /* Fault channel filter state (Enabled/Disabled) */
            FTM_POLARITY_LOW, /* Fault channel state (Enabled/Disabled) */
        },
        {
            false, /* Fault channel state (Enabled/Disabled) */
            false, /* Fault channel filter state (Enabled/Disabled) */
            FTM_POLARITY_LOW, /* Fault channel state (Enabled/Disabled) */
        },
        {
            false, /* Fault channel state (Enabled/Disabled) */
            false, /* Fault channel filter state (Enabled/Disabled) */
            FTM_POLARITY_LOW, /* Fault channel state (Enabled/Disabled) */
        }
   }
};

/* Independent channels configuration structure for flexTimer_pwm3 */
ftm_independent_ch_param_t flexTimer_pwm3_IndependentChannelsConfig[3] =
{
    {
        0U, /* hwChannelId */
        FTM_POLARITY_HIGH, /* Polarity of the PWM signal */
        0U, /* Duty cycle percent 0-0x8000 */
        false, /* External Trigger */
        FTM_LOW_STATE, /* Safe state of the PWM channel when faults are detected */
        true, /* Enabled/disabled the channel (n+1) output */
        FTM_MAIN_INVERTED, /* Select channel (n+1) output relative to channel (n) */
        true, /* Dead time enabled/disabled */
    },
    {
        2U, /* hwChannelId */
        FTM_POLARITY_HIGH, /* Polarity of the PWM signal */
        0U, /* Duty cycle percent 0-0x8000 */
        false, /* External Trigger */
        FTM_LOW_STATE, /* Safe state of the PWM channel when faults are detected */
        true, /* Enabled/disabled the channel (n+1) output */
        FTM_MAIN_INVERTED, /* Select channel (n+1) output relative to channel (n) */
        true, /* Dead time enabled/disabled */
    },
    {
        4U, /* hwChannelId */
        FTM_POLARITY_HIGH, /* Polarity of the PWM signal */
        0U, /* Duty cycle percent 0-0x8000 */
        false, /* External Trigger */
        FTM_LOW_STATE, /* Safe state of the PWM channel when faults are detected */
        true, /* Enabled/disabled the channel (n+1) output */
        FTM_MAIN_INVERTED, /* Select channel (n+1) output relative to channel (n) */
        true, /* Dead time enabled/disabled */
    }
};


/* PWM configuration for flexTimer_pwm3 */
 ftm_pwm_param_t flexTimer_pwm3_PwmConfig =
{
     3U, /* Number of independent PWM channels */
     0U, /* Number of combined PWM channels */
     FTM_MODE_CEN_ALIGNED_PWM, /* PWM mode */
     32U, /* Dead time value */
     FTM_DEADTIME_DIVID_BY_1, /* Dead time value */
     20000U, /* PWM frequency */
     flexTimer_pwm3_IndependentChannelsConfig, /* Independent PWM channels configuration structure */
     NULL, /* No PWM channels configuration structure */
     &flexTimer_pwm3_FaultConfig /* PWM fault configuration structure */
};

/* Global configuration of flexTimer_pwm3 */
ftm_user_config_t  flexTimer_pwm3_InitConfig =
{
    {
        true,   /* Software trigger state */
        false,  /* Hardware trigger 1 state */
        false,  /* Hardware trigger 2 state */
        false,  /* Hardware trigger 3 state */
        true, /* Max loading point state */
        false, /* Min loading point state */
        FTM_PWM_SYNC, /* Update mode for INVCTRL register */
        FTM_PWM_SYNC, /* Update mode for SWOCTRL register */
        FTM_PWM_SYNC, /* Update mode for OUTMASK register */
        FTM_PWM_SYNC, /* Update mode for CNTIN register */
        true, /* Automatic clear of the trigger*/
        FTM_WAIT_LOADING_POINTS, /* Synchronization point */
    },
     FTM_MODE_CEN_ALIGNED_PWM, /* Mode of operation for FTM */
     FTM_CLOCK_DIVID_BY_1, /* FTM clock prescaler */
     FTM_CLOCK_SOURCE_SYSTEMCLK,   /* FTM clock source */
     FTM_BDM_MODE_11, /* FTM debug mode */
     false, /* Interrupt state */
     false /* Initialization trigger */
};

/* END flexTimer_pwm3. */

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

