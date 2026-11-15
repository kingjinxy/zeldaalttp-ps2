	THUMB_FUNC_START sub_0802CFBC
sub_0802CFBC: @ 0x0802CFBC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _0802CFEC  @ =gUnknown_03000420
	ldrh r0, [r1, #34]
	add r3, r0, #0
	cmp r3, #0
	beq _0802CFF6
	cmp r3, #1
	bne _0802CFF0
	mov r0, #0
	str r0, [r1, #28]
	str r0, [r1, #20]
	strh r0, [r1, #34]
	ldrh r0, [r1, #32]
	cmp r0, #0
	beq _0802CFE6
	ldr r0, [r1, #24]
	str r0, [r1, #20]
_0802CFE6:
	strb r3, [r1, #2]
	b _0802D010
	.byte 0x00
	.byte 0x00
_0802CFEC:
	.4byte gUnknown_03000420
_0802CFF0:
	sub r0, r0, #1
	strh r0, [r1, #34]
	b _0802D010
_0802CFF6:
	ldrh r0, [r1, #32]
	add r2, r0, #0
	cmp r2, #0
	beq _0802D010
	cmp r2, #1
	bne _0802D00C
	str r3, [r1, #24]
	str r3, [r1, #20]
	strh r3, [r1, #32]
	strb r2, [r1, #2]
	b _0802D010
_0802D00C:
	sub r0, r0, #1
	strh r0, [r1, #32]
_0802D010:
	bl sub_0802CF70
	bl sub_0802D104
	ldr r6, _0802D0E4  @ =gUnknown_03006C80
	ldr r1, _0802D0E8  @ =gLCDRegisterBuffer
	add r0, r6, #0
	add r0, r0, #100
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r0, [r0]
	bl sub_0802D190
	ldr r4, _0802D0EC  @ =gUnknown_03000420
	ldr r5, _0802D0F0  @ =gUnknown_03006730
	ldr r2, [r5]
	ldrb r1, [r2, #28]
	ldrb r0, [r4, #12]
	cmp r0, r1
	beq _0802D04E
	strb r1, [r4, #12]
	ldrb r0, [r2, #15]
	mov r1, #2
	and r1, r1, r0
	strb r1, [r4, #14]
	bl sub_0802D7E8
	bl sub_0802D820
	mov r0, #1
	strb r0, [r4, #2]
_0802D04E:
	ldr r0, [r5]
	ldrb r0, [r0, #15]
	mov r1, #2
	and r1, r1, r0
	lsl r0, r1, #24
	lsr r0, r0, #24
	ldrb r2, [r4, #14]
	cmp r0, r2
	beq _0802D066
	strb r1, [r4, #14]
	bl sub_0802D7E8
_0802D066:
	bl sub_0802CE98
	mov r5, #0
	ldrb r0, [r6]
	cmp r5, r0
	bcs _0802D0D4
	add r4, r4, #36
	mov r8, r4
	mov r9, r6
	ldr r1, _0802D0F4  @ =gUnknown_03006A58
	mov r10, r1
	ldr r7, _0802D0F8  @ =gUnknown_0201ED90
_0802D07E:
	lsl r0, r5, #1
	mov r2, r8
	add r1, r0, r2
	ldrh r1, [r1]
	add r6, r0, #0
	cmp r1, #0
	bne _0802D0BC
	ldr r1, _0802D0FC  @ =gUnknown_03006CE8
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #3
	bls _0802D0BC
	lsl r0, r5, #3
	add r0, r0, r5
	lsl r0, r0, #4
	add r0, r0, r10
	ldr r4, [r0]
	add r0, r4, #0
	mov r1, #21
	mov r2, #0
	bl sub_0804CB38
	ldr r0, _0802D100  @ =0x00000303
	bl sub_0800D6A4
	ldrb r0, [r4, #10]
	add r0, r0, #1
	str r0, [r7, #8]
	mov r0, #250
	lsl r0, r0, #1
	str r0, [r7, #16]
_0802D0BC:
	mov r2, r8
	add r0, r6, r2
	ldrh r1, [r0]
	sub r1, r1, #1
	strh r1, [r0]
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, r9
	ldrb r0, [r0]
	cmp r5, r0
	bcc _0802D07E
_0802D0D4:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802D0E4:
	.4byte gUnknown_03006C80
_0802D0E8:
	.4byte gLCDRegisterBuffer
_0802D0EC:
	.4byte gUnknown_03000420
_0802D0F0:
	.4byte gUnknown_03006730
_0802D0F4:
	.4byte gUnknown_03006A58
_0802D0F8:
	.4byte gUnknown_0201ED90
_0802D0FC:
	.4byte gUnknown_03006CE8
_0802D100:
	.4byte 0x00000303
	THUMB_FUNC_END sub_0802CFBC

