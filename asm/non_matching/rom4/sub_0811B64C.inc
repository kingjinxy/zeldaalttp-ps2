	THUMB_FUNC_START sub_0811B64C
sub_0811B64C: @ 0x0811B64C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_0811B6A4
	ldr r2, _0811B694  @ =gRam
	ldr r1, _0811B698  @ =0x00001853
	add r0, r2, r1
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811B68E
	mov r0, #7
	strb r0, [r1]
	ldr r0, _0811B69C  @ =0x00001855
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	bne _0811B68E
	ldr r1, _0811B6A0  @ =0x00000E15
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_0811B68E:
	pop {r4}
	pop {r0}
	bx r0
_0811B694:
	.4byte gRam
_0811B698:
	.4byte 0x00001853
_0811B69C:
	.4byte 0x00001855
_0811B6A0:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_0811B64C

