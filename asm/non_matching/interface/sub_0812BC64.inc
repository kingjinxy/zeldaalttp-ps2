	THUMB_FUNC_START sub_0812BC64
sub_0812BC64: @ 0x0812BC64
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	lsl r1, r1, #24
	lsr r5, r1, #24
	cmp r2, #0
	bne _0812BCC0
	ldr r0, _0812BC80  @ =gUnknown_0300016C
	ldr r0, [r0]
	cmp r0, #0
	beq _0812BC84
	add r4, r0, #0
	b _0812BCA0
	.byte 0x00
	.byte 0x00
_0812BC80:
	.4byte gUnknown_0300016C
_0812BC84:
	ldr r0, _0812BCB8  @ =gUnknown_03000168
	ldr r1, [r0]
	cmp r1, #0
	beq _0812BCD6
	ldrb r0, [r1, #1]
	cmp r0, #1
	bne _0812BC98
	ldrb r0, [r1, #8]
	cmp r5, r0
	bcc _0812BCD6
_0812BC98:
	add r4, r1, #0
	add r0, r4, #0
	bl sub_0812BA6C
_0812BCA0:
	ldr r1, _0812BCBC  @ =gUnknown_0300016C
	add r0, r4, #0
	bl sub_0812ADC0
	mov r0, #1
	strb r0, [r4, #1]
	strb r5, [r4, #8]
	add r0, r4, #0
	bl sub_0812ADF4
	b _0812BCF2
	.byte 0x00
	.byte 0x00
_0812BCB8:
	.4byte gUnknown_03000168
_0812BCBC:
	.4byte gUnknown_0300016C
_0812BCC0:
	lsl r0, r2, #4
	sub r0, r0, r2
	lsl r0, r0, #3
	ldr r1, _0812BCDC  @ =gUnknown_03001A30
	add r4, r0, r1
	ldrb r0, [r4, #1]
	cmp r0, #1
	bne _0812BCE0
	ldrb r0, [r4, #8]
	cmp r5, r0
	bcs _0812BCE0
_0812BCD6:
	mov r0, #0
	b _0812BCF4
	.byte 0x00
	.byte 0x00
_0812BCDC:
	.4byte gUnknown_03001A30
_0812BCE0:
	ldrb r0, [r4, #1]
	cmp r0, #0
	beq _0812BCEC
	add r0, r4, #0
	bl sub_0812BA6C
_0812BCEC:
	mov r0, #1
	strb r0, [r4, #1]
	strb r5, [r4, #8]
_0812BCF2:
	add r0, r4, #0
_0812BCF4:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812BC64

	.byte 0x00
	.byte 0x00
