	THUMB_FUNC_START sub_0802C3F0
sub_0802C3F0: @ 0x0802C3F0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	lsl r1, r1, #16
	lsr r6, r1, #16
	add r0, r0, #69
	ldrb r4, [r0]
	add r0, r4, r6
	lsl r0, r0, #16
	lsr r3, r0, #16
	lsl r0, r6, #16
	cmp r0, #0
	bge _0802C42C
	ldr r2, _0802C428  @ =gUnknown_03006A30
	ldrb r1, [r5, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	ldrb r1, [r0, #7]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0802C42C
	add r0, r4, #0
	b _0802C4E8
	.byte 0x00
	.byte 0x00
_0802C428:
	.4byte gUnknown_03006A30
_0802C42C:
	lsl r0, r3, #16
	asr r4, r0, #16
	ldr r1, _0802C448  @ =gUnknown_03006C80
	add r0, r1, #0
	add r0, r0, #100
	ldrb r2, [r5, #10]
	add r0, r0, r2
	ldrb r2, [r0]
	lsl r0, r2, #3
	add r7, r1, #0
	cmp r4, r0
	blt _0802C44C
	add r3, r0, #0
	b _0802C452
_0802C448:
	.4byte gUnknown_03006C80
_0802C44C:
	cmp r4, #0
	bge _0802C452
	mov r3, #0
_0802C452:
	add r0, r5, #0
	add r0, r0, #69
	strb r3, [r0]
	add r2, r7, #0
	ldrb r1, [r5, #10]
	mov r4, #96
	add r4, r4, r2
	mov r8, r4
	add r1, r1, r8
	strb r3, [r1]
	lsl r1, r6, #16
	add r6, r0, #0
	cmp r1, #0
	bge _0802C478
	add r1, r2, #0
	add r1, r1, #36
	mov r0, #0
	strb r0, [r1]
	b _0802C4E2
_0802C478:
	mov r4, #1
	add r0, r5, #0
	mov r1, #7
	bl sub_08003E10
	add r0, r7, #0
	add r0, r0, #36
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802C4E2
	mov r3, #0
	ldrb r0, [r7]
	cmp r3, r0
	bcs _0802C4CA
	mov r2, r8
	ldrb r1, [r2]
	add r0, r7, #0
	add r0, r0, #100
	ldrb r0, [r0]
	lsl r0, r0, #3
	cmp r1, r0
	bne _0802C4E2
_0802C4A4:
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _0802C4F4  @ =gUnknown_03006C80
	ldrb r0, [r2]
	cmp r3, r0
	bcs _0802C4CA
	add r0, r2, #0
	add r0, r0, #96
	add r0, r3, r0
	ldrb r1, [r0]
	add r0, r2, #0
	add r0, r0, #100
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #3
	cmp r1, r0
	beq _0802C4A4
	mov r4, #0
_0802C4CA:
	cmp r4, #0
	beq _0802C4E2
	ldr r0, _0802C4F4  @ =gUnknown_03006C80
	add r0, r0, #36
	mov r1, #1
	strb r1, [r0]
	mov r0, #62
	bl play_sound
	mov r0, #1
	bl sub_0800D6A4
_0802C4E2:
	bl sub_0802CF20
	ldrb r0, [r6]
_0802C4E8:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0802C4F4:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0802C3F0

