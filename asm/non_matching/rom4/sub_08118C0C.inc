	THUMB_FUNC_START sub_08118C0C
sub_08118C0C: @ 0x08118C0C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _08118C3C  @ =gRam
	ldr r1, _08118C40  @ =0x00000E29
	add r0, r5, r1
	add r6, r4, r0
	ldr r1, _08118C44  @ =gUnknown_0817F34E
	ldrb r0, [r6]
	ldrb r1, [r1, #6]
	cmp r0, r1
	bne _08118C2A
	add r0, r4, #0
	bl sub_08122630
_08118C2A:
	ldr r2, _08118C48  @ =0x000009AD
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08118C4C
	add r0, r4, #0
	bl sub_08118D68
	b _08118CC8
_08118C3C:
	.4byte gRam
_08118C40:
	.4byte 0x00000E29
_08118C44:
	.4byte gUnknown_0817F34E
_08118C48:
	.4byte 0x000009AD
_08118C4C:
	ldr r1, _08118C84  @ =0x00000A92
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #23
	bhi _08118C7A
	add r0, r4, #0
	mov r1, #2
	bl sub_080BF880
	lsl r0, r0, #24
	cmp r0, #0
	beq _08118C7A
	ldr r2, _08118C88  @ =0x00001810
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _08118C7A
	ldr r1, _08118C8C  @ =0x00001702
	add r0, r5, r1
	ldrb r2, [r0]
	cmp r2, #0
	beq _08118C90
_08118C7A:
	add r0, r4, #0
	bl sub_08118CE0
	b _08118CC8
	.byte 0x00
	.byte 0x00
_08118C84:
	.4byte 0x00000A92
_08118C88:
	.4byte 0x00001810
_08118C8C:
	.4byte 0x00001702
_08118C90:
	ldr r1, _08118CD0  @ =0x00000E15
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r0, _08118CD4  @ =0x00001718
	add r3, r5, r0
	ldrb r0, [r3]
	sub r0, r0, #25
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _08118CBA
	mov r1, #162
	lsl r1, r1, #4
	add r0, r5, r1
	mov r1, #0
	strh r2, [r0]
	ldr r2, _08118CD8  @ =0x00001885
	add r0, r5, r2
	strb r1, [r0]
	strb r1, [r3]
_08118CBA:
	ldr r1, _08118CDC  @ =0x00001776
	add r0, r5, r1
	mov r1, #3
	strb r1, [r0]
	ldrb r0, [r6]
	bl sub_080A1588
_08118CC8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08118CD0:
	.4byte 0x00000E15
_08118CD4:
	.4byte 0x00001718
_08118CD8:
	.4byte 0x00001885
_08118CDC:
	.4byte 0x00001776
	THUMB_FUNC_END sub_08118C0C

