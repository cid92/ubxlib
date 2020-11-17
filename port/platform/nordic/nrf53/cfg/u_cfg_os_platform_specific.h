/*
 * Copyright 2020 u-blox Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _U_CFG_OS_PLATFORM_SPECIFIC_H_
#define _U_CFG_OS_PLATFORM_SPECIFIC_H_

/* No #includes allowed here */

/** @file
 * @brief This header file contains OS configuration information for
 * an NRF5340 PDK board.
 */

/* ----------------------------------------------------------------
 * COMPILE-TIME MACROS FOR NRF5340: OS GENERIC
 * -------------------------------------------------------------- */

#ifndef U_CFG_OS_PRIORITY_MIN
/** The minimum task priority.
 * In Zephyr, as used on this platform, low numbers indicate
 * lower priority.
 */
# define U_CFG_OS_PRIORITY_MIN  0
#endif

#ifndef U_CFG_OS_PRIORITY_MAX
/** The maximum task priority, should be less than or
 * equal to CONFIG_NUM_COOP_PRIORITIES  which default is set to 15 (16-1).
 */
# define U_CFG_OS_PRIORITY_MAX  15
#endif

#ifndef U_CFG_OS_YIELD_MS
/** The amount of time to block for to ensure that a yield
 * occurs. This set to 1 ms for now.
 * //TODO check this!!
 */
# define U_CFG_OS_YIELD_MS 1
#endif

#ifndef U_CFG_OS_APP_TASK_PRIORITY
/** The priority of the task running the examples and tests: should
 * be low but must be higher than the minimum.
 */
# define U_CFG_OS_APP_TASK_PRIORITY (U_CFG_OS_PRIORITY_MIN + 1)
#endif
#endif // _U_CFG_OS_PLATFORM_SPECIFIC_H_

// End of file