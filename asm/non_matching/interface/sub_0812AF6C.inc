	THUMB_FUNC_START sub_0812AF6C
sub_0812AF6C: @ 0x0812AF6C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _0812AFC0  @ =gUnknown_03000174
	ldrb r1, [r2]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r5, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0812B00C
	cmp r0, #0
	ble _0812AFCC
	ldr r0, _0812AFC4  @ =gUnknown_03000170
	ldr r6, [r0]
	cmp r6, #0
	beq _0812B00C
	add r7, r2, #0
_0812AF90:
	add r4, r6, #0
	ldr r6, [r4, #108]
	add r0, r4, #0
	ldr r1, _0812AFC4  @ =gUnknown_03000170
	bl sub_0812ADC0
	add r0, r4, #0
	ldr r1, _0812AFC8  @ =gUnknown_0300016C
	bl sub_0812ADDC
	lsl r0, r5, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r5, r0, #24
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	cmp r6, #0
	beq _0812B00C
	lsl r0, r5, #24
	cmp r0, #0
	bgt _0812AF90
	b _0812B00C
_0812AFC0:
	.4byte gUnknown_03000174
_0812AFC4:
	.4byte gUnknown_03000170
_0812AFC8:
	.4byte gUnknown_0300016C
_0812AFCC:
	neg r0, r0
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r6, r2, #0
	b _0812AFF6
_0812AFD6:
	add r0, r4, #0
	ldr r1, _0812B014  @ =gUnknown_03000168
	bl sub_0812ADC0
	mov r0, #0
	strb r0, [r4, #1]
	add r0, r4, #0
	ldr r1, _0812B018  @ =gUnknown_03000170
	bl sub_0812ADDC
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldrb r0, [r6]
	sub r0, r0, #1
	strb r0, [r6]
_0812AFF6:
	lsl r0, r5, #24
	asr r5, r0, #24
	cmp r5, #0
	ble _0812B00C
	mov r0, #0
	mov r1, #255
	bl sub_0812BC64
	add r4, r0, #0
	cmp r4, #0
	bne _0812AFD6
_0812B00C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812B014:
	.4byte gUnknown_03000168
_0812B018:
	.4byte gUnknown_03000170
	THUMB_FUNC_END sub_0812AF6C

