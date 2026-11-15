	THUMB_FUNC_START sub_0803AE00
sub_0803AE00: @ 0x0803AE00
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	add r0, r2, #0
	add r1, r7, #0
	add r1, r1, #8
	strb r0, [r1]
	ldr r0, [r7]
	ldrb r1, [r0, #8]
	cmp r1, #6
	bne _0803AE68
	ldr r0, [r7]
	ldrb r1, [r0, #9]
	cmp r1, #0
	bne _0803AE68
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, _0803AE64  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_0804C448
	b _0803AEA4
	.byte 0x00
	.byte 0x00
_0803AE64:
	.4byte gUnknown_03006A30
_0803AE68:
	ldr r0, [r7, #4]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldr r1, _0803AEA8  @ =gUnknown_03006A30
	ldr r3, [r7]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r1, [r2]
	bl sub_0804C448
_0803AEA4:
	mov r0, #2
	b _0803AEAC
_0803AEA8:
	.4byte gUnknown_03006A30
_0803AEAC:
	add sp, sp, #12
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803AE00

