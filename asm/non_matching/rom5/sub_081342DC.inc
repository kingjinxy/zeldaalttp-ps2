	THUMB_FUNC_START sub_081342DC
sub_081342DC: @ 0x081342DC
	push {r4-r6,lr}
	add r5, r1, #0
	ldrb r1, [r5]
	mov r0, #128
	tst r0, r1
	beq _08134314
	ldr r4, [r5, #32]
	cmp r4, #0
	beq _08134312
	mov r6, #0
_081342F0:
	ldrb r0, [r4]
	cmp r0, #0
	beq _0813430A
	ldrb r0, [r4, #1]
	mov r3, #7
	and r0, r0, r3
	beq _08134308
	ldr r3, _0813431C  @ =gUnknown_03007FF0
	ldr r3, [r3]
	ldr r3, [r3, #44]
	bl sub_08134074+0x258
_08134308:
	strb r6, [r4]
_0813430A:
	str r6, [r4, #44]
	ldr r4, [r4, #52]
	cmp r4, #0
	bne _081342F0
_08134312:
	str r4, [r5, #32]
_08134314:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0813431C:
	.4byte gUnknown_03007FF0
	THUMB_FUNC_END sub_081342DC

