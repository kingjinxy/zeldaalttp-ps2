	THUMB_FUNC_START sub_0810296C
sub_0810296C: @ 0x0810296C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	add r0, r4, #0
	bl sub_080C99DC
	add r0, r4, #0
	bl sub_080C7A20
	ldr r3, _08102A08  @ =gRam
	ldr r1, _08102A0C  @ =0x00001152
	add r0, r3, r1
	add r7, r4, r0
	ldrb r1, [r7]
	add r0, r1, #0
	sub r0, r0, #192
	mov r2, #128
	and r0, r0, r2
	cmp r0, #0
	bne _081029A0
	sub r0, r1, #2
	strb r0, [r7]
_081029A0:
	ldr r1, _08102A10  @ =0x00001142
	add r0, r3, r1
	add r6, r4, r0
	ldrb r0, [r6]
	sub r0, r0, #1
	and r0, r0, r2
	cmp r0, #0
	beq _081029B6
	mov r0, #0
	strb r0, [r6]
	strb r0, [r7]
_081029B6:
	ldr r1, _08102A14  @ =0x00000FC2
	add r0, r3, r1
	add r5, r4, r0
	ldrb r1, [r5]
	add r0, r1, #0
	cmp r0, #0
	beq _08102A24
	cmp r0, #223
	bls _081029D8
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _081029D8
	add r0, r4, #0
	mov r1, #19
	bl sub_080CF140
_081029D8:
	ldr r3, _08102A08  @ =gRam
	ldr r1, _08102A14  @ =0x00000FC2
	add r0, r3, r1
	add r0, r0, r8
	ldrb r0, [r0]
	lsr r0, r0, #3
	sub r1, r1, #64
	add r2, r3, r1
	add r2, r2, r8
	ldr r1, _08102A18  @ =gUnknown_0817B7CA
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r1, _08102A1C  @ =0x00000F92
	add r0, r3, r1
	add r0, r0, r8
	mov r1, #3
	strb r1, [r0]
	ldr r0, _08102A20  @ =0x00001082
	add r3, r3, r0
	add r3, r3, r8
	mov r0, #2
	strb r0, [r3]
	b _08102A62
_08102A08:
	.4byte gRam
_08102A0C:
	.4byte 0x00001152
_08102A10:
	.4byte 0x00001142
_08102A14:
	.4byte 0x00000FC2
_08102A18:
	.4byte gUnknown_0817B7CA
_08102A1C:
	.4byte 0x00000F92
_08102A20:
	.4byte 0x00001082
_08102A24:
	str r3, [sp]
	bl GetRandomInt
	mov r2, #1
	and r2, r2, r0
	ldr r3, [sp]
	cmp r2, #0
	beq _08102A48
	ldr r1, _08102A44  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #7
	strb r1, [r0]
	mov r0, #80
	b _08102A60
	.byte 0x00
	.byte 0x00
_08102A44:
	.4byte 0x00000F52
_08102A48:
	ldr r1, _08102A70  @ =0x00000F52
	add r0, r3, r1
	add r0, r0, r8
	mov r1, #2
	strb r1, [r0]
	ldr r1, _08102A74  @ =0x00001172
	add r0, r3, r1
	add r0, r0, r8
	strb r2, [r0]
	strb r2, [r6]
	strb r2, [r7]
	mov r0, #63
_08102A60:
	strb r0, [r5]
_08102A62:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08102A70:
	.4byte 0x00000F52
_08102A74:
	.4byte 0x00001172
	THUMB_FUNC_END sub_0810296C

