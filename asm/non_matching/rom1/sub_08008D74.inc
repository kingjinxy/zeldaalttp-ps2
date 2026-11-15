	.syntax unified
	THUMB_FUNC_START sub_08008D74
sub_08008D74: @ 0X08008D74
	push {r4, r5, r6, r7, lr}
	ldr r0, [pc, #320]
	ldr r2, [pc, #320]
	ldrb r2, [r2, #0]
	cmp r2, #0
	beq.n sub_08008D8C
	subs r2, #4
	ldr r3, [pc, #316]
	ldr r2, [r3, r2]
	ldr r3, [pc, #316]
	mov lr, r3
	bx r2
	.syntax unified
	.thumb
