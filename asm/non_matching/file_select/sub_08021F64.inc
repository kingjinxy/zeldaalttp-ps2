	THUMB_FUNC_START sub_08021F64
sub_08021F64: @ 0x08021F64
	push {r4-r6,lr}
	add r4, r0, #0
	bl 0x08003828
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08021FE8
	sub r0, r0, #1
	strb r0, [r4, #23]
	add r0, r4, #0
	bl 0x08002E64
	ldr r6, _08021FBC  @ =gUnknown_0813B974
	add r5, r4, #0
	add r5, r5, #43
	ldrb r0, [r5]
	lsr r0, r0, #3
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4, #44]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _08021FF8
	ldr r2, _08021FC0  @ =gUnknown_03006A30
	ldrb r1, [r4, #24]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	add r1, r4, #0
	bl 0x08003F4C
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r5]
	cmp r1, r0
	beq _08021FC4
	mov r0, #16
	eor r0, r0, r1
	strb r0, [r5]
	b _08021FF8
_08021FBC:
	.4byte gUnknown_0813B974
_08021FC0:
	.4byte gUnknown_03006A30
_08021FC4:
	add r2, r1, #0
	add r2, r2, #8
	mov r3, #31
	and r2, r2, r3
	strb r2, [r5]
	lsr r0, r2, #3
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4, #44]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _08021FF8
	add r0, r2, #0
	sub r0, r0, #16
	and r0, r0, r3
	strb r0, [r5]
	b _08021FF8
_08021FE8:
	mov r0, #10
	strb r0, [r4, #20]
	mov r0, #240
	strb r0, [r4, #23]
	add r0, r4, #0
	mov r1, #32
	bl 0x08003870
_08021FF8:
	add r0, r4, #0
	bl sub_08022734
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08021F64

