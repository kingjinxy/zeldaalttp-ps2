	THUMB_FUNC_START sub_08018F5C
sub_08018F5C: @ 0x08018F5C
	push {r4-r6,lr}
	add r5, r0, #0
	ldrb r2, [r5, #11]
	lsl r0, r2, #3
	add r0, r0, r2
	lsl r0, r0, #4
	ldr r1, _08018FCC  @ =gUnknown_03006A30
	add r4, r0, r1
	ldr r3, [r4, #40]
	ldrb r0, [r4, #5]
	cmp r0, #0
	beq _08018FE6
	ldr r1, [r5, #84]
	add r1, r1, #117
	add r0, r2, #4
	ldrb r2, [r1]
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r3, #0
	add r0, r0, #41
	ldrb r0, [r0]
	cmp r0, #0
	beq _08018FEC
	add r2, r3, #0
	add r2, r2, #42
	ldrb r1, [r2]
	mov r6, #2
	add r0, r6, #0
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _08018FD0
	strb r0, [r4, #5]
	add r1, r3, #0
	add r1, r1, #61
	mov r0, #254
	strb r0, [r1]
	add r0, r3, #0
	add r0, r0, #66
	strb r6, [r0]
	ldrb r0, [r2]
	mov r1, #4
	eor r0, r0, r1
	lsl r0, r0, #2
	add r1, r3, #0
	add r1, r1, #62
	strb r0, [r1]
	ldr r1, [r5, #84]
	add r1, r1, #117
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	strb r0, [r1]
	b _08018FEC
	.byte 0x00
	.byte 0x00
_08018FCC:
	.4byte gUnknown_03006A30
_08018FD0:
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r0, #2
	bne _08018FEC
	ldr r0, [r5, #84]
	add r0, r0, #117
	ldrb r1, [r0]
	mov r2, #8
	orr r1, r1, r2
	strb r1, [r0]
	b _08018FEC
_08018FE6:
	ldrb r0, [r5, #20]
	sub r0, r0, #1
	strb r0, [r5, #20]
_08018FEC:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08018F5C

	.byte 0x00
	.byte 0x00
