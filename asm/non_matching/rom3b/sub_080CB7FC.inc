	THUMB_FUNC_START sub_080CB7FC
sub_080CB7FC: @ 0x080CB7FC
	push {r4-r7,lr}
	lsl r1, r1, #24
	lsr r6, r1, #24
	ldr r7, _080CB890  @ =gRam
	ldr r1, _080CB894  @ =0x00000D1B
	add r4, r7, r1
	add r4, r6, r4
	ldrb r1, [r0]
	strb r1, [r4]
	sub r0, r0, #2
	ldr r3, _080CB898  @ =0x00000D5B
	add r2, r7, r3
	add r2, r6, r2
	ldrb r1, [r0]
	lsr r1, r1, #7
	strb r1, [r2]
	ldr r5, _080CB89C  @ =0x00000D33
	add r2, r7, r5
	add r2, r6, r2
	ldrb r1, [r0]
	lsl r1, r1, #4
	strb r1, [r2]
	ldr r1, _080CB8A0  @ =0x00000D3B
	add r3, r7, r1
	add r3, r6, r3
	ldr r2, _080CB8A4  @ =0x000015F5
	add r1, r7, r2
	ldrb r2, [r1]
	ldrb r1, [r0]
	lsr r1, r1, #4
	mov r5, #1
	mov r12, r5
	and r1, r1, r5
	add r2, r2, r1
	strb r2, [r3]
	add r0, r0, #1
	ldr r2, _080CB8A8  @ =0x00000D23
	add r1, r7, r2
	add r5, r6, r1
	ldrb r1, [r0]
	lsl r1, r1, #4
	strb r1, [r5]
	ldr r3, _080CB8AC  @ =0x00000D2B
	add r1, r7, r3
	add r1, r6, r1
	ldr r3, _080CB8B0  @ =0x000015F4
	add r2, r7, r3
	ldrb r0, [r0]
	lsr r0, r0, #4
	mov r3, r12
	and r0, r0, r3
	ldrb r2, [r2]
	add r0, r0, r2
	strb r0, [r1]
	add r0, r6, #0
	bl sub_080CBE5C
	ldrb r4, [r4]
	add r0, r4, #0
	sub r0, r0, #10
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _080CB882
	add r0, r4, #0
	cmp r0, #16
	bne _080CB8B8
_080CB882:
	ldr r5, _080CB8B4  @ =0x00000D4B
	add r0, r7, r5
	add r0, r6, r0
	mov r1, #160
	strb r1, [r0]
	b _080CB8CC
	.byte 0x00
	.byte 0x00
_080CB890:
	.4byte gRam
_080CB894:
	.4byte 0x00000D1B
_080CB898:
	.4byte 0x00000D5B
_080CB89C:
	.4byte 0x00000D33
_080CB8A0:
	.4byte 0x00000D3B
_080CB8A4:
	.4byte 0x000015F5
_080CB8A8:
	.4byte 0x00000D23
_080CB8AC:
	.4byte 0x00000D2B
_080CB8B0:
	.4byte 0x000015F4
_080CB8B4:
	.4byte 0x00000D4B
_080CB8B8:
	cmp r0, #3
	bne _080CB8CC
	ldr r1, _080CB8D4  @ =0x00000D4B
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #255
	strb r1, [r0]
	ldrb r0, [r5]
	sub r0, r0, #8
	strb r0, [r5]
_080CB8CC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CB8D4:
	.4byte 0x00000D4B
	THUMB_FUNC_END sub_080CB7FC

