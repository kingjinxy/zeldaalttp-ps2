	THUMB_FUNC_START sub_08048FB4
sub_08048FB4: @ 0x08048FB4
	push {r4-r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	add r1, r0, #0
	add r1, r1, #124
	add r0, r1, #0
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #158
	bls _08048FD4
	b _080490C8
_08048FD4:
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #62
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	mov r1, #15
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804903C
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r1, [r2]
	lsr r2, r1, #4
	add r1, r2, #0
	mov r2, #1
	eor r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #2
	ldrb r2, [r0, #28]
	mov r3, #251
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
_0804903C:
	ldr r0, [r7]
	mov r1, #144
	lsl r1, r1, #3
	str r1, [r0, #12]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	bne _08049068
	add r5, r7, #0
	add r5, r5, #8
	ldr r6, _08049064  @ =gUnknown_0813F584
	bl sub_0800099C
	mov r1, #15
	and r0, r0, r1
	add r1, r6, r0
	ldrb r0, [r1]
	strb r0, [r5]
	b _0804907A
	.byte 0x00
	.byte 0x00
_08049064:
	.4byte gUnknown_0813F584
_08049068:
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, _080490C4  @ =gUnknown_0813F594
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	sub r2, r3, #1
	add r1, r1, r2
	ldrb r2, [r1]
	strb r2, [r0]
_0804907A:
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _080490C2
	ldr r0, [r7, #4]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r1, [r2]
	mov r2, #16
	eor r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
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
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_080490C2:
	b _0804912A
_080490C4:
	.4byte gUnknown_0813F594
_080490C8:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	cmp r0, #128
	bne _0804912A
	ldr r5, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r4, [r1]
	bl sub_0800099C
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080490F0
	add r1, r4, #2
	add r0, r1, #0
	b _080490F4
_080490F0:
	sub r1, r4, #2
	add r0, r1, #0
_080490F4:
	add r2, r5, #0
	add r1, r5, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r1, [r2]
	mov r2, #31
	and r1, r1, r2
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
_0804912A:
	ldr r1, _0804913C  @ =gUnknown_0813F55C
	ldr r0, [r7]
	bl 0x080098A0
	add sp, sp, #12
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804913C:
	.4byte gUnknown_0813F55C
	THUMB_FUNC_END sub_08048FB4

