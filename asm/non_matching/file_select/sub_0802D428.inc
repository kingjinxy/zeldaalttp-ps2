	THUMB_FUNC_START sub_0802D428
sub_0802D428: @ 0x0802D428
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r0, _0802D474  @ =gUnknown_03000420
	ldrb r1, [r0, #3]
	lsl r1, r1, #11
	ldr r2, _0802D478  @ =gUnknown_0202D130
	add r1, r1, r2
	add r5, r1, #0
	add r5, r5, #64
	ldrb r4, [r0, #8]
	mov r7, #0
	mov r8, r0
	mov r10, r2
	ldrb r0, [r0, #9]
	cmp r7, r0
	bcs _0802D4DC
	mov r1, #22
	mov r9, r1
_0802D452:
	add r0, r7, #0
	mov r1, #10
	bl __umodsi3
	lsl r0, r0, #16
	lsr r1, r0, #16
	add r3, r1, #0
	lsl r0, r4, #16
	asr r2, r0, #16
	add r6, r0, #0
	cmp r2, #8
	ble _0802D47C
	lsl r0, r1, #1
	add r0, r0, r5
	mov r1, #16
	b _0802D4AA
	.byte 0x00
	.byte 0x00
_0802D474:
	.4byte gUnknown_03000420
_0802D478:
	.4byte gUnknown_0202D130
_0802D47C:
	cmp r2, #0
	ble _0802D4A4
	lsl r0, r1, #1
	add r3, r0, r5
	add r4, r0, #0
	cmp r2, #1
	beq _0802D496
	lsr r1, r6, #31
	add r1, r2, r1
	asr r1, r1, #1
	mov r0, #20
	sub r0, r0, r1
	b _0802D498
_0802D496:
	mov r0, #19
_0802D498:
	strh r0, [r3]
	add r0, r4, r5
	add r0, r0, #64
	mov r1, r9
	strh r1, [r0]
	b _0802D4B2
_0802D4A4:
	lsl r0, r3, #1
	add r0, r0, r5
	mov r1, #20
_0802D4AA:
	strh r1, [r0]
	add r0, r0, #64
	mov r2, r9
	strh r2, [r0]
_0802D4B2:
	ldr r1, _0802D50C  @ =0xFFF80000
	add r0, r6, r1
	lsr r4, r0, #16
	cmp r0, #0
	bge _0802D4BE
	mov r4, #0
_0802D4BE:
	cmp r7, #9
	bne _0802D4CE
	mov r2, r8
	ldrb r0, [r2, #3]
	lsl r0, r0, #11
	add r0, r0, r10
	add r5, r0, #0
	add r5, r5, #128
_0802D4CE:
	add r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
	mov r0, r8
	ldrb r0, [r0, #9]
	cmp r7, r0
	bcc _0802D452
_0802D4DC:
	mov r1, r8
	ldrb r0, [r1, #3]
	lsl r0, r0, #11
	ldr r2, _0802D510  @ =gUnknown_0202D12E
	add r0, r0, r2
	add r5, r0, #0
	add r5, r5, #64
	mov r1, #21
	strh r1, [r5]
	mov r2, r8
	ldrb r0, [r2, #9]
	cmp r0, #10
	bls _0802D4FC
	add r0, r5, #0
	add r0, r0, #64
	strh r1, [r0]
_0802D4FC:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802D50C:
	.4byte 0xFFF80000
_0802D510:
	.4byte gUnknown_0202D12E
	THUMB_FUNC_END sub_0802D428

