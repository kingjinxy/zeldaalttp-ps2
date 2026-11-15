	.syntax unified
	THUMB_FUNC_START sub_08009998
sub_08009998: @ 0X08009998
	ldr r3, [pc, #876]
	mov ip, r3
_0800999C:
	push {r4, r5, r6, r7, lr}
	cmp r2, #0
	beq.n _080099FA
	movs r3, #69
	ldrb r3, [r2, r3]
	cmp r3, #0
	beq.n _080099FA
	movs r3, #80
	ldrh r4, [r0, r3]
	ldrh r5, [r2, r3]
	ands r5, r4
	lsrs r4, r5, #14
	beq.n _080099FA
	ldrh r6, [r0, #50]
	.syntax unified
	.thumb
