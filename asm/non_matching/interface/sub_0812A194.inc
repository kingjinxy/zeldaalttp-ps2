	THUMB_FUNC_START sub_0812A194
sub_0812A194: @ 0x0812A194
	push {r4-r6,lr}
	mov r5, #0
	mov r6, #128
	lsl r6, r6, #13
_0812A19C:
	ldr r0, _0812A1C4  @ =gUnknown_03000108
	lsl r1, r5, #3
	add r4, r1, r0
	ldrb r0, [r4, #4]
	cmp r0, #0
	bne _0812A1C8
	add r0, r5, #0
	add r0, r0, #16
	bl sub_0812C64C
	cmp r0, #0
	beq _0812A1BC
	lsr r0, r6, #16
	mov r1, #0
	bl sub_0812C764
_0812A1BC:
	mov r0, #1
	neg r0, r0
	str r0, [r4]
	b _0812A1CC
_0812A1C4:
	.4byte gUnknown_03000108
_0812A1C8:
	mov r0, #0
	strb r0, [r4, #4]
_0812A1CC:
	mov r0, #128
	lsl r0, r0, #9
	add r6, r6, r0
	add r5, r5, #1
	cmp r5, #1
	ble _0812A19C
	mov r5, #0
	ldr r4, _0812A1EC  @ =gUnknown_030000C8
_0812A1DC:
	ldr r0, _0812A1F0  @ =gUnknown_030000F0
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _0812A1F4
	mov r0, #0
	strb r0, [r1]
	b _0812A202
_0812A1EC:
	.4byte gUnknown_030000C8
_0812A1F0:
	.4byte gUnknown_030000F0
_0812A1F4:
	add r0, r5, #0
	bl sub_0812C64C
	cmp r0, #0
	bne _0812A202
	ldr r0, _0812A230  @ =0x0000FFFF
	strh r0, [r4]
_0812A202:
	add r4, r4, #2
	add r5, r5, #1
	cmp r5, #18
	ble _0812A1DC
	ldr r2, _0812A234  @ =gUnknown_03000104
	ldrb r0, [r2]
	cmp r0, #1
	bne _0812A240
	ldr r1, _0812A238  @ =gUnknown_03000103
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #36
	bls _0812A24A
	mov r0, #0
	strb r0, [r2]
	strb r0, [r1]
	ldr r1, _0812A23C  @ =gUnknown_03000105
	strb r0, [r1]
	b _0812A24A
	.byte 0x00
	.byte 0x00
_0812A230:
	.4byte 0x0000FFFF
_0812A234:
	.4byte gUnknown_03000104
_0812A238:
	.4byte gUnknown_03000103
_0812A23C:
	.4byte gUnknown_03000105
_0812A240:
	ldr r0, _0812A250  @ =gUnknown_03000103
	mov r1, #0
	strb r1, [r0]
	ldr r0, _0812A254  @ =gUnknown_03000105
	strb r1, [r0]
_0812A24A:
	pop {r4-r6}
	pop {r0}
	bx r0
_0812A250:
	.4byte gUnknown_03000103
_0812A254:
	.4byte gUnknown_03000105
	THUMB_FUNC_END sub_0812A194

