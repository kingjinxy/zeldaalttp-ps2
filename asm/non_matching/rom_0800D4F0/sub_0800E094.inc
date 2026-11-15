	THUMB_FUNC_START sub_0800E094
sub_0800E094: @ 0x0800E094
	push {r4-r7,lr}
	add r5, r0, #0
	ldr r1, _0800E0D0  @ =gUnknown_03005E10
	ldr r0, _0800E0D4  @ =gLCDRegisterBuffer
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #9
	and r0, r0, r1
	cmp r0, #0
	beq _0800E130
	ldr r0, _0800E0D8  @ =gUnknown_0201EF00
	mov r1, #3
	ldrsb r1, [r0, r1]
	add r0, r0, #12
	add r1, r1, r0
	ldrb r2, [r1]
	cmp r2, #255
	bne _0800E0DC
	add r1, r5, #0
	add r1, r1, #249
	mov r0, #3
	strb r0, [r1]
	mov r0, #130
	lsl r0, r0, #1
	add r1, r5, r0
	mov r0, #1
	b _0800E108
	.byte 0x00
	.byte 0x00
_0800E0D0:
	.4byte gUnknown_03005E10
_0800E0D4:
	.4byte gLCDRegisterBuffer
_0800E0D8:
	.4byte gUnknown_0201EF00
_0800E0DC:
	ldrh r0, [r5, #6]
	mov r1, #255
	lsl r1, r1, #8
	and r1, r1, r0
	orr r1, r1, r2
	strh r1, [r5, #6]
	add r4, r5, #0
	add r4, r4, #24
	add r0, r4, #0
	bl sub_0800ED7C
	ldr r1, _0800E120  @ =gUnknown_08137D5F
	add r0, r4, #0
	bl sub_0800EDB8
	add r1, r5, #0
	add r1, r1, #249
	mov r0, #1
	strb r0, [r1]
	ldr r2, _0800E124  @ =0x00000107
	add r1, r5, r2
	mov r0, #3
_0800E108:
	strb r0, [r1]
	ldr r2, _0800E128  @ =gUnknown_02000000
	ldr r0, _0800E12C  @ =gUnknown_0201EF00
	ldrb r1, [r0, #3]
	strb r1, [r2, #1]
	mov r1, #3
	strb r1, [r2]
	mov r1, #20
	bl zero_memory
	b _0800E1C4
	.byte 0x00
	.byte 0x00
_0800E120:
	.4byte gUnknown_08137D5F
_0800E124:
	.4byte 0x00000107
_0800E128:
	.4byte gUnknown_02000000
_0800E12C:
	.4byte gUnknown_0201EF00
_0800E130:
	mov r0, #240
	and r0, r0, r1
	lsr r4, r0, #4
	cmp r4, #0
	beq _0800E1C4
	ldr r0, _0800E1CC  @ =gUnknown_0201EF00
	mov r1, #2
	ldrsb r1, [r0, r1]
	add r5, r0, #0
	cmp r1, #1
	ble _0800E1C4
	mov r3, #1
	mov r1, #2
	ldrsb r1, [r5, r1]
	ldr r7, _0800E1D0  @ =gUnknown_08427434
	cmp r3, r1
	bge _0800E174
	ldrb r0, [r5, #8]
	ldrb r2, [r5, #9]
	cmp r0, r2
	bne _0800E174
	add r2, r1, #0
	add r6, r5, #0
	add r6, r6, #8
_0800E160:
	add r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, r2
	bge _0800E174
	add r1, r3, r6
	ldrb r0, [r5, #8]
	ldrb r1, [r1]
	cmp r0, r1
	beq _0800E160
_0800E174:
	mov r2, #2
	ldrsb r2, [r5, r2]
	sub r0, r2, #1
	lsl r0, r0, #2
	add r0, r0, r7
	sub r1, r3, #1
	mul r1, r2, r1
	mov r2, #3
	ldrsb r2, [r5, r2]
	ldr r0, [r0]
	add r0, r0, r1
	add r0, r0, r2
	ldrb r1, [r0]
	mov r3, #0
	mov r0, #1
	and r0, r0, r4
	cmp r0, #0
	bne _0800E1AE
	mov r2, #1
_0800E19A:
	lsr r4, r4, #1
	add r0, r3, #2
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, #7
	bhi _0800E1AE
	add r0, r4, #0
	and r0, r0, r2
	cmp r0, #0
	beq _0800E19A
_0800E1AE:
	asr r1, r1, r3
	mov r0, #3
	and r1, r1, r0
	mov r0, #3
	ldrsb r0, [r5, r0]
	cmp r1, r0
	beq _0800E1C4
	strb r1, [r5, #3]
	mov r0, #61
	bl play_sound
_0800E1C4:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800E1CC:
	.4byte gUnknown_0201EF00
_0800E1D0:
	.4byte gUnknown_08427434
	THUMB_FUNC_END sub_0800E094

