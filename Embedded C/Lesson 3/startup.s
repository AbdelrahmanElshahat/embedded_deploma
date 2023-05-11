/* ********Abdelrahman El-Shahat********** */

/* Vector Table */

.section .vectors
.word 0x20001000 /* stack top adress */
.word _reset /*1 reset handler */
.word vector_handler /*2 NMI */
.word vector_handler /*3 HardFault */
.word vector_handler /*4 MemManage */
.word vector_handler /*5 BusFault */
.word vector_handler /*6 UsageFault */
.word vector_handler /*7 Reserved */
.word vector_handler /*8 Reserved */
.word vector_handler /*9 Reserved */
.word vector_handler /*10 Reserved */
.word vector_handler /*11 SVCall */
.word vector_handler /*12 DebugMonitor */
.word vector_handler /*13 Reserved */
.word vector_handler /*14 PendSV */
.word vector_handler /*15 SysTick */
.word vector_handler /*16 IRQ0 */
.word vector_handler /*17 IRQ1 */
.word vector_handler /*18 IRQ2 */
.word vector_handler /*19 IRQ3 .... IRQ67 */


.section .text
_reset:
    bl main
    b .
.thumb_func
vector_handler:
    b _reset
    