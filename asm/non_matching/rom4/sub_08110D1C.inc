	THUMB_FUNC_START sub_08110D1C
sub_08110D1C: @ 0x08110D1C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _08110D70  @ =gRam
	ldr r3, _08110D74  @ =0x00000F52
	add r1, r2, r3
	add r6, r0, r1
	mov r7, #0
	mov r5, #1
	mov r12, r5
	mov r1, r12
	strb r1, [r6]
	ldr r3, _08110D78  @ =0x00000545
	add r4, r2, r3
	ldr r3, _08110D7C  @ =gUnknown_0817D4D0
	ldr r5, _08110D80  @ =0x00000FB2
	add r1, r2, r5
	add r5, r0, r1
	ldrb r0, [r5]
	add r0, r0, r3
	ldrb r1, [r4]
	ldrb r3, [r0]
	and r3, r3, r1
	mov r8, r2
	cmp r3, #0
	beq _08110DB0
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r8
	strb r3, [r0]
	mov r0, #8
	and r0, r0, r3
	lsl r0, r0, #24
	asr r4, r0, #24
	cmp r4, #0
	beq _08110D84
	strb r7, [r5]
	strb r7, [r6]
	b _08110DB0
	.byte 0x00
	.byte 0x00
_08110D70:
	.4byte gRam
_08110D74:
	.4byte 0x00000F52
_08110D78:
	.4byte 0x00000545
_08110D7C:
	.4byte gUnknown_0817D4D0
_08110D80:
	.4byte 0x00000FB2
_08110D84:
	mov r0, #4
	and r0, r0, r3
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	beq _08110D98
	mov r0, r12
	strb r0, [r5]
	strb r4, [r6]
	b _08110DB0
_08110D98:
	mov r4, #2
	and r3, r3, r4
	lsl r0, r3, #24
	asr r1, r0, #24
	cmp r1, #0
	beq _08110DAA
	strb r4, [r5]
	strb r2, [r6]
	b _08110DB0
_08110DAA:
	mov r0, #3
	strb r0, [r5]
	strb r1, [r6]
_08110DB0:
	ldr r1, _08110DC4  @ =0x00001783
	add r1, r1, r8
	mov r0, #1
	strb r0, [r1]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08110DC4:
	.4byte 0x00001783
	THUMB_FUNC_END sub_08110D1C

