	THUMB_FUNC_START sub_0802BFC4
sub_0802BFC4: @ 0x0802BFC4
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r6, #8
	ldr r0, _0802C028  @ =gUnknown_02016C50
	mov r9, r0
	ldr r1, _0802C02C  @ =gUnknown_0202A3F0
	mov r8, r1
_0802BFD6:
	lsl r7, r6, #2
	mov r0, r9
	add r5, r7, r0
	ldr r0, [r5]
	cmp r0, #0
	beq _0802C058
	bl sub_0800C984
	cmp r0, #0
	beq _0802C058
	ldr r4, [r5]
	lsl r0, r6, #9
	ldr r1, _0802C030  @ =0x06010000
	add r0, r0, r1
	ldr r1, [r4]
	ldr r2, _0802C034  @ =0x00FFFFFF
	and r1, r1, r2
	ldr r2, _0802C038  @ =0x03000030
	ldr r2, [r2]
	add r1, r1, r2
	ldr r2, [r4, #4]
	bl 0x080009F4
	mov r0, #0
	str r0, [r5]
	ldr r0, [r4]
	cmp r0, #0
	blt _0802C03C
	mov r1, r8
	add r0, r7, r1
	ldrb r0, [r0]
	mov r1, #63
	and r1, r1, r0
	lsl r1, r1, #2
	add r1, r1, r8
	ldrb r2, [r1]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r1]
	b _0802C062
	.byte 0x00
	.byte 0x00
_0802C028:
	.4byte gUnknown_02016C50
_0802C02C:
	.4byte gUnknown_0202A3F0
_0802C030:
	.4byte 0x06010000
_0802C034:
	.4byte 0x00FFFFFF
_0802C038:
	.4byte 0x03000030
_0802C03C:
	ldr r0, [r4, #4]
	ldr r1, _0802C054  @ =0x000001FF
	add r0, r0, r1
	lsr r0, r0, #9
	add r0, r6, r0
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r9
	add r1, r4, #0
	add r1, r1, #8
	str r1, [r0]
	b _0802C062
_0802C054:
	.4byte 0x000001FF
_0802C058:
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #42
	bls _0802BFD6
_0802C062:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802BFC4

	.byte 0x00
	.byte 0x00
