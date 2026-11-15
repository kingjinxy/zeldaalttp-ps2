	.syntax unified
	THUMB_FUNC_START sub_08008010
sub_08008010: @ 0X08008010
	ldr r1, [r1, #40]
	movs r2, #61
	ldrb r2, [r1, r2]
	orrs r2, r2
	bne.n _08008094
	movs r2, #113
	ldrb r3, [r1, r2]
	orrs r3, r3
	beq.n _0800802A
	eors r3, r3
	strb r3, [r1, r2]
	ldr r1, [r1, #108]
	b.n _08008184
_0800802A:
	bl 0x8007804
	bne.n _0800803A
	mov r1, sl
	ldr r1, [r1, #40]
	bl 0x8007840
	beq.n _0800805C
_0800803A:
	eors r2, r2
	strb r2, [r0, #7]
	ldrb r2, [r1, #26]
	lsrs r2, r2, #1
	bcs.n _08008046
	.syntax unified
	.thumb
