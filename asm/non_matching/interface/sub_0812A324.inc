	THUMB_FUNC_START sub_0812A324
sub_0812A324: @ 0x0812A324
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r9, r1
	lsl r0, r0, #16
	lsr r7, r0, #16
	ldr r3, _0812A38C  @ =gUnknown_08198C94
	lsl r0, r7, #2
	add r0, r0, r3
	ldr r1, [r0]
	mov r0, #255
	lsl r0, r0, #16
	and r0, r0, r1
	lsr r6, r0, #16
	add r4, r1, #0
	mov r0, #128
	mov r8, r0
	ldr r1, _0812A390  @ =gUnknown_030000C8
	lsl r0, r6, #1
	add r2, r0, r1
	mov r0, #0
	ldrsh r1, [r2, r0]
	mov r0, #1
	neg r0, r0
	cmp r1, r0
	beq _0812A3B0
	mov r0, #128
	lsl r0, r0, #21
	and r0, r0, r4
	cmp r0, #0
	beq _0812A36C
	add r0, r1, #0
	cmp r7, r0
	bne _0812A36C
	b _0812A46A
_0812A36C:
	mov r1, #0
	ldrsh r0, [r2, r1]
	lsl r0, r0, #2
	add r0, r0, r3
	ldr r1, [r0]
	mov r0, #128
	lsl r0, r0, #19
	and r0, r0, r4
	cmp r0, #0
	bne _0812A394
	lsr r2, r4, #25
	mov r0, #1
	bic r0, r0, r2
	add r2, r0, #0
	b _0812A396
	.byte 0x00
	.byte 0x00
_0812A38C:
	.4byte gUnknown_08198C94
_0812A390:
	.4byte gUnknown_030000C8
_0812A394:
	mov r2, #2
_0812A396:
	mov r0, #128
	lsl r0, r0, #19
	and r0, r0, r1
	cmp r0, #0
	bne _0812A3AC
	lsr r1, r1, #25
	mov r0, #1
	bic r0, r0, r1
	cmp r2, r0
	blt _0812A46A
	b _0812A3B0
_0812A3AC:
	cmp r2, #1
	ble _0812A46A
_0812A3B0:
	lsl r0, r4, #16
	lsr r2, r0, #16
	mov r0, #128
	lsl r0, r0, #20
	and r0, r0, r4
	cmp r0, #0
	beq _0812A3FE
	ldr r5, _0812A3D8  @ =gUnknown_03000105
	ldrb r3, [r5]
	add r1, r3, #0
	cmp r1, #2
	bne _0812A3E0
	add r0, r2, #2
	lsl r0, r0, #16
	lsr r2, r0, #16
	ldr r1, _0812A3DC  @ =gUnknown_03000104
	mov r0, #0
	strb r0, [r1]
	b _0812A3FE
	.byte 0x00
	.byte 0x00
_0812A3D8:
	.4byte gUnknown_03000105
_0812A3DC:
	.4byte gUnknown_03000104
_0812A3E0:
	cmp r1, #1
	bne _0812A3F4
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	ldr r0, _0812A3F0  @ =gUnknown_03000104
	b _0812A3F8
	.byte 0x00
	.byte 0x00
_0812A3F0:
	.4byte gUnknown_03000104
_0812A3F4:
	ldr r0, _0812A478  @ =gUnknown_03000104
	mov r1, #1
_0812A3F8:
	strb r1, [r0]
	add r0, r3, #1
	strb r0, [r5]
_0812A3FE:
	add r0, r6, #0
	mov r1, #0
	bl sub_0812C73C
	ldr r1, _0812A47C  @ =gUnknown_030000C8
	lsl r0, r6, #1
	add r0, r0, r1
	strh r7, [r0]
	ldr r0, _0812A480  @ =gUnknown_030000F0
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
	mov r0, #128
	lsl r0, r0, #17
	and r0, r0, r4
	cmp r0, #0
	beq _0812A440
	mov r0, r9
	bl sub_0812A258
	add r2, r0, #0
	lsl r2, r2, #24
	lsr r2, r2, #24
	add r0, r6, #0
	mov r1, #1
	bl sub_0812C8DC
	mov r0, r9
	bl sub_0812A2AC
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
_0812A440:
	mov r0, #128
	lsl r0, r0, #22
	and r0, r0, r4
	cmp r0, #0
	beq _0812A45C
	mov r0, r9
	bl sub_0812A2E8
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, r8
	mul r1, r0, r1
	lsr r1, r1, #7
	mov r8, r1
_0812A45C:
	mov r0, r8
	lsl r2, r0, #24
	lsr r2, r2, #24
	add r0, r6, #0
	mov r1, #1
	bl sub_0812C884
_0812A46A:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812A478:
	.4byte gUnknown_03000104
_0812A47C:
	.4byte gUnknown_030000C8
_0812A480:
	.4byte gUnknown_030000F0
	THUMB_FUNC_END sub_0812A324

