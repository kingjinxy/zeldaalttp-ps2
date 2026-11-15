	THUMB_FUNC_START sub_0802E1A8
sub_0802E1A8: @ 0x0802E1A8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r0, _0802E210  @ =gUnknown_02016D60
	ldr r6, [r0, #8]
	mov r2, #8
	ldr r0, _0802E214  @ =gUnknown_03006C80
	mov r12, r0
	ldr r4, _0802E218  @ =gUnknown_0202A3F0
	mov r3, #255
_0802E1C2:
	lsl r1, r2, #24
	asr r1, r1, #24
	lsl r2, r1, #2
	add r2, r2, r4
	ldrb r0, [r2]
	orr r0, r0, r3
	strb r0, [r2]
	ldrb r0, [r2, #1]
	orr r0, r0, r3
	strb r0, [r2, #1]
	add r1, r1, #1
	lsl r1, r1, #24
	lsr r2, r1, #24
	asr r1, r1, #24
	cmp r1, #15
	ble _0802E1C2
	mov r2, #1
	mov r1, r12
	ldrb r1, [r1]
	cmp r2, r1
	bge _0802E25A
_0802E1EC:
	lsl r2, r2, #24
	asr r1, r2, #24
	lsl r0, r1, #2
	add r0, r0, r6
	ldr r7, [r0]
	sub r1, r1, #1
	lsl r1, r1, #24
	lsr r4, r1, #24
	lsl r3, r4, #24
	asr r0, r3, #24
	mov r8, r2
	cmp r0, #0
	blt _0802E240
	lsl r0, r0, #2
	add r0, r0, r6
	lsl r5, r7, #16
	b _0802E238
	.byte 0x00
	.byte 0x00
_0802E210:
	.4byte gUnknown_02016D60
_0802E214:
	.4byte gUnknown_03006C80
_0802E218:
	.4byte gUnknown_0202A3F0
_0802E21C:
	asr r0, r3, #24
	lsl r1, r0, #2
	add r1, r1, r6
	ldr r2, [r1]
	str r2, [r1, #4]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r3, r4, #24
	asr r0, r3, #24
	cmp r0, #0
	blt _0802E240
	lsl r0, r0, #2
	add r0, r0, r6
_0802E238:
	ldrb r1, [r0, #1]
	lsr r0, r5, #24
	cmp r1, r0
	bhi _0802E21C
_0802E240:
	lsl r0, r4, #24
	asr r0, r0, #22
	add r0, r0, r6
	str r7, [r0, #4]
	mov r0, #128
	lsl r0, r0, #17
	add r0, r0, r8
	lsr r2, r0, #24
	asr r0, r0, #24
	mov r3, r12
	ldrb r3, [r3]
	cmp r0, r3
	blt _0802E1EC
_0802E25A:
	mov r0, r12
	ldrb r1, [r0]
	lsl r0, r1, #2
	add r0, r0, r6
	sub r0, r0, #4
	ldrb r0, [r0, #1]
	str r0, [sp]
	mov r2, #0
	cmp r2, r1
	bge _0802E342
	ldr r1, _0802E2B8  @ =gUnknown_03006A30
	add r1, r1, #40
	mov r9, r1
	ldr r3, _0802E2BC  @ =gUnknown_084277F8
	mov r10, r3
	mov r7, #204
	lsl r7, r7, #1
	mov r5, r12
_0802E27E:
	lsl r0, r2, #24
	asr r1, r0, #22
	add r4, r1, r6
	ldrb r1, [r4, #1]
	mov r8, r0
	cmp r1, #0
	bne _0802E2C0
	ldrb r0, [r4]
	mov r1, #255
	mov r2, #0
	bl sub_08063D28
	ldrb r1, [r4]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r9
	ldr r2, [r0]
	strh r7, [r2, #54]
	ldrb r0, [r5, #2]
	cmp r0, #0
	bne _0802E318
	ldrb r2, [r4]
	mov r0, #13
	mov r1, #8
	bl sub_0804C8A8
	b _0802E318
	.byte 0x00
	.byte 0x00
_0802E2B8:
	.4byte gUnknown_03006A30
_0802E2BC:
	.4byte gUnknown_084277F8
_0802E2C0:
	ldrb r3, [r4, #1]
	ldr r1, [sp]
	lsl r0, r1, #24
	asr r0, r0, #24
	cmp r3, r0
	bne _0802E2F8
	ldrb r1, [r4]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	ldr r3, _0802E2F4  @ =gUnknown_03006A30
	add r0, r0, r3
	mov r1, #7
	strb r1, [r0, #12]
	ldrb r1, [r4]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r9
	ldr r2, [r0]
	ldrb r1, [r5]
	lsl r0, r1, #1
	add r0, r0, r1
	add r0, r0, #2
	b _0802E30E
	.byte 0x00
	.byte 0x00
_0802E2F4:
	.4byte gUnknown_03006A30
_0802E2F8:
	ldrb r1, [r4]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r9
	ldr r2, [r0]
	ldrb r1, [r5]
	lsl r0, r1, #1
	add r0, r0, r1
	add r0, r0, r3
	sub r0, r0, #1
_0802E30E:
	lsl r0, r0, #1
	add r0, r0, r10
	ldrh r0, [r0]
	add r0, r0, r7
	strh r0, [r2, #54]
_0802E318:
	mov r0, r8
	asr r4, r0, #24
	lsl r0, r4, #2
	add r0, r0, r6
	ldrb r2, [r0, #1]
	lsl r2, r2, #4
	ldrb r0, [r0]
	orr r2, r2, r0
	lsl r2, r2, #24
	lsr r2, r2, #24
	mov r0, #13
	mov r1, #9
	bl sub_0804C8A8
	add r4, r4, #1
	lsl r4, r4, #24
	lsr r2, r4, #24
	asr r4, r4, #24
	ldrb r1, [r5]
	cmp r4, r1
	blt _0802E27E
_0802E342:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802E1A8

	.byte 0x00
	.byte 0x00
