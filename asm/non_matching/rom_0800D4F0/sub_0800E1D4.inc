	THUMB_FUNC_START sub_0800E1D4
sub_0800E1D4: @ 0x0800E1D4
	push {r4,r5,lr}
	add r4, r0, #0
	mov r0, #130
	lsl r0, r0, #1
	add r1, r4, r0
	ldrb r0, [r1]
	add r5, r0, #0
	cmp r5, #0
	beq _0800E1F8
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0800E238
	add r1, r4, #0
	add r1, r1, #249
	mov r0, #5
	b _0800E236
_0800E1F8:
	ldr r1, _0800E224  @ =gUnknown_03005E10
	ldr r0, _0800E228  @ =gLCDRegisterBuffer
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #243
	and r0, r0, r1
	cmp r0, #0
	beq _0800E22C
	mov r0, #66
	bl play_sound
	mov r1, #134
	lsl r1, r1, #1
	add r0, r4, r1
	strb r5, [r0]
	add r1, r4, #0
	add r1, r1, #249
	mov r0, #5
	b _0800E236
	.byte 0x00
	.byte 0x00
_0800E224:
	.4byte gUnknown_03005E10
_0800E228:
	.4byte gLCDRegisterBuffer
_0800E22C:
	mov r0, #134
	lsl r0, r0, #1
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
_0800E236:
	strb r0, [r1]
_0800E238:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0800E1D4

	.byte 0x00
	.byte 0x00
