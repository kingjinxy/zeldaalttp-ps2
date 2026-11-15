	THUMB_FUNC_START sub_08047D34
sub_08047D34: @ 0x08047D34
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #113
	ldrb r1, [r1]
	ldrb r2, [r3]
	add r1, r1, r2
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #112
	ldrb r0, [r1]
	cmp r0, #0
	bne _08047D74
	b _08047E96
_08047D74:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	cmp r0, #192
	bne _08047E04
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #113
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #114
	ldrb r1, [r2]
	mov r2, #1
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #114
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldr r1, [r7]
	ldr r3, [r1, #84]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #112
	ldr r2, _08047E00  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #11]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r3, [r2]
	add r2, r3, #0
	ldrb r3, [r1]
	add r1, r2, #0
	eor r1, r1, r3
	add r2, r0, #0
	add r0, r0, #112
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _08047E96
_08047E00:
	.4byte gUnknown_08137B10
_08047E04:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	cmp r0, #64
	bne _08047E96
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #113
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #114
	ldrb r1, [r2]
	mov r2, #1
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #114
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldr r1, [r7]
	ldr r3, [r1, #84]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #112
	ldr r2, _08047EA0  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #11]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r3, [r2]
	add r2, r3, #0
	ldrb r3, [r1]
	add r1, r2, #0
	eor r1, r1, r3
	add r2, r0, #0
	add r0, r0, #112
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_08047E96:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08047EA0:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_08047D34

