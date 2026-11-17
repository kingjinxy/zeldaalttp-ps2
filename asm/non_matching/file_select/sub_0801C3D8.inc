	THUMB_FUNC_START sub_0801C3D8
sub_0801C3D8: @ 0x0801C3D8
	push {r4-r6,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r6, r4, #0
	add r6, r6, #41
	ldrb r1, [r6]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	beq _0801C412
	ldr r0, [r4, #88]
	cmp r0, #0
	beq _0801C40A
	mov r0, #7
	strb r0, [r4, #20]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_08003870
	b _0801C444
_0801C40A:
	add r0, r4, #0
	bl sub_0801C4C4
	b _0801C444
_0801C412:
	lsl r0, r1, #24
	cmp r0, #0
	beq _0801C444
	add r0, r4, #0
	mov r1, #7
	mov r2, #0
	bl sub_0804411C
	add r1, r0, #0
	cmp r1, #0
	beq _0801C444
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	add r2, r1, #0
	add r2, r2, #43
	strb r0, [r2]
	str r4, [r1, #84]
	strb r5, [r6]
	str r1, [r4, #88]
	str r5, [r4, #100]
	add r1, r4, #0
	add r1, r1, #112
	mov r0, #60
	strh r0, [r1]
_0801C444:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C3D8

	.byte 0x00
	.byte 0x00
