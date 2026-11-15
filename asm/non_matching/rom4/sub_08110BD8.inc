	THUMB_FUNC_START sub_08110BD8
sub_08110BD8: @ 0x08110BD8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r12, r1
	lsl r2, r2, #24
	lsr r7, r2, #24
	ldr r2, _08110C18  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	ldrb r3, [r0]
	mov r0, #8
	and r0, r0, r3
	lsl r0, r0, #24
	asr r5, r0, #24
	cmp r5, #0
	beq _08110C20
	ldr r3, _08110C1C  @ =0x00000FB2
	add r0, r2, r3
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	sub r3, r3, #96
	add r0, r2, r3
	add r0, r4, r0
	b _08110C98
	.byte 0x00
	.byte 0x00
_08110C18:
	.4byte gRam
_08110C1C:
	.4byte 0x00000FB2
_08110C20:
	mov r0, #4
	and r0, r0, r3
	lsl r0, r0, #24
	asr r1, r0, #24
	cmp r1, #0
	beq _08110C3C
	ldr r1, _08110C38  @ =0x00000FB2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #1
	b _08110C70
	.byte 0x00
	.byte 0x00
_08110C38:
	.4byte 0x00000FB2
_08110C3C:
	mov r6, #2
	add r0, r6, #0
	and r0, r0, r3
	lsl r0, r0, #24
	asr r5, r0, #24
	cmp r5, #0
	beq _08110C60
	ldr r3, _08110C5C  @ =0x00000FB2
	add r0, r2, r3
	add r0, r4, r0
	strb r6, [r0]
	sub r3, r3, #96
	add r0, r2, r3
	add r0, r4, r0
	b _08110C98
	.byte 0x00
	.byte 0x00
_08110C5C:
	.4byte 0x00000FB2
_08110C60:
	mov r1, #1
	and r1, r1, r3
	cmp r1, #0
	beq _08110C84
	ldr r1, _08110C7C  @ =0x00000FB2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #3
_08110C70:
	strb r1, [r0]
	ldr r3, _08110C80  @ =0x00000F52
	add r0, r2, r3
	add r0, r4, r0
	strb r5, [r0]
	b _08110C9A
_08110C7C:
	.4byte 0x00000FB2
_08110C80:
	.4byte 0x00000F52
_08110C84:
	ldr r3, _08110CA4  @ =0x00000FB2
	add r0, r2, r3
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, r12
	bne _08110C92
	strb r7, [r3]
_08110C92:
	ldr r3, _08110CA8  @ =0x00000F52
	add r0, r2, r3
	add r0, r0, r8
_08110C98:
	strb r1, [r0]
_08110C9A:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08110CA4:
	.4byte 0x00000FB2
_08110CA8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08110BD8

