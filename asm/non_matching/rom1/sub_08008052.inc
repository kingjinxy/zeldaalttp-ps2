	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08008052
sub_08008052: @ 0X08008052
	ldr r2, [r2, #40]
	ldrb r2, [r2, #10]
	strb r2, [r1, #11]
	movs r2, #2
	b.n _08008082
_0800805C:
	bl 0x8007968
	beq.n _08008068
	eors r2, r2
	strb r2, [r0, #7]
	b.n _08008184
_08008068:
	bl 0x800777c
	bne.n _08008094
	push {r0}
	mov r1, sl
	ldr r0, [r1, #40]
	bl 0x80019e4
	pop {r0}
	cmp r1, #24
	beq.n _08008094
	eors r1, r1
	movs r2, #1
_08008082:
	str r1, [r0, #24]
	mov r1, sl
	strb r2, [r1, #5]
	bl 0x80078b0
	movs r2, #98
	bl 0x80031ac
	pop {pc}
_08008094:
	mov r1, sl
	ldr r2, [r1, #40]
	movs r3, #42
	ldrb r2, [r2, r3]
	movs r3, #128
	orrs r2, r3
	.syntax unified
	.thumb
