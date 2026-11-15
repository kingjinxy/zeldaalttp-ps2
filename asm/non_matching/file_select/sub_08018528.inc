	THUMB_FUNC_START sub_08018528
sub_08018528: @ 0x08018528
	mov r12, r0
	ldr r2, _080185C4  @ =gUnknown_03006A30
	ldr r0, [r0, #88]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	mov r3, #0
	mov r1, #65
	strb r1, [r0, #2]
	mov r1, r12
	ldr r0, [r1, #88]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	strb r3, [r0, #10]
	mov r1, r12
	ldr r0, [r1, #88]
	ldrb r0, [r0, #10]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r0, _080185C8  @ =0x0000FFEF
	and r0, r0, r2
	strh r0, [r1, #54]
	mov r0, r12
	ldr r1, [r0, #88]
	mov r0, #192
	lsl r0, r0, #9
	str r0, [r1, #16]
	add r1, r1, #60
	ldrb r2, [r1]
	mov r0, #128
	orr r0, r0, r2
	strb r0, [r1]
	mov r1, r12
	ldr r0, [r1, #88]
	add r0, r0, #61
	mov r1, #220
	strb r1, [r0]
	mov r1, r12
	ldr r0, [r1, #88]
	strh r3, [r0, #58]
	ldr r0, [r1, #88]
	add r1, r1, #120
	ldrb r1, [r1]
	add r0, r0, #46
	strb r1, [r0]
	mov r0, r12
	ldr r1, [r0, #88]
	add r0, r1, #0
	add r0, r0, #42
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r1, r1, #43
	strb r0, [r1]
	mov r1, r12
	add r1, r1, #92
	ldr r0, _080185CC  @ =0x000021FF
	strh r0, [r1]
	mov r1, r12
	ldrb r0, [r1, #20]
	add r0, r0, #1
	strb r0, [r1, #20]
	mov r0, #60
	strb r0, [r1, #24]
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	bne _080185C2
	mov r0, #244
	strb r0, [r1]
_080185C2:
	bx lr
_080185C4:
	.4byte gUnknown_03006A30
_080185C8:
	.4byte 0x0000FFEF
_080185CC:
	.4byte 0x000021FF
	THUMB_FUNC_END sub_08018528

