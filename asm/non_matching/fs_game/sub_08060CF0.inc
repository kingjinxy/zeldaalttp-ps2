	THUMB_FUNC_START sub_08060CF0
sub_08060CF0: @ 0x08060CF0
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, _08060DE4  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #4]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl 0x0800238C
	ldr r0, [r7]
	ldr r1, [r7, #4]
	add r2, r1, #0
	add r1, r1, #42
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #127
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #27]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #32
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #192
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	ldr r0, _08060DE4  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	mov r2, #16
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08060DE8
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	lsr r1, r0, #1
	add r0, r1, #0
	add r1, r0, #4
	add r2, r1, #0
	lsl r0, r2, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl 0x08003870
	b _08060DFE
_08060DE4:
	.4byte gUnknown_03006A30
_08060DE8:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	lsr r1, r0, #1
	add r2, r1, #0
	lsl r0, r2, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl 0x08003870
_08060DFE:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08060CF0

	.byte 0x00
	.byte 0x00
