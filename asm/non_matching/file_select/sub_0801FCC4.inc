	THUMB_FUNC_START sub_0801FCC4
sub_0801FCC4: @ 0x0801FCC4
	push {r4-r7,lr}
	add r7, r0, #0
	lsl r1, r1, #24
	lsr r6, r1, #24
	add r0, r0, #43
	ldrb r3, [r0]
	add r0, r3, #4
	mov r1, #24
	and r0, r0, r1
	lsr r5, r0, #3
	add r2, r7, #0
	add r2, r2, #42
	ldrb r4, [r2]
	mov r0, #28
	and r0, r0, r4
	cmp r0, r6
	bne _0801FD14
	mov r0, #7
	and r3, r3, r0
	cmp r3, #4
	beq _0801FCF8
	mov r0, #3
	and r0, r0, r4
	cmp r5, r0
	beq _0801FD20
	b _0801FD06
_0801FCF8:
	mov r1, #3
	add r0, r1, #0
	and r0, r0, r4
	sub r0, r5, r0
	and r0, r0, r1
	cmp r0, #1
	ble _0801FD20
_0801FD06:
	add r0, r6, r5
	strb r0, [r2]
	ldrb r1, [r2]
	add r0, r7, #0
	bl 0x08003870
	b _0801FD20
_0801FD14:
	add r0, r6, r5
	strb r0, [r2]
	ldrb r1, [r2]
	add r0, r7, #0
	bl 0x08003870
_0801FD20:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801FCC4

	.byte 0x00
	.byte 0x00
