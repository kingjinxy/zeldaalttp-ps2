	THUMB_FUNC_START sub_080F96C4
sub_080F96C4: @ 0x080F96C4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080F977C  @ =gRam
	ldr r1, _080F9780  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F96DE
	b _080F981A
_080F96DE:
	ldr r4, _080F9784  @ =gUnknown_0817A322
	bl GetRandomInt
	mov r1, #7
	and r1, r1, r0
	add r1, r1, r4
	ldrb r4, [r1]
	ldr r2, _080F9788  @ =0x00000FB2
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, r4
	bne _080F96FA
	b _080F981A
_080F96FA:
	ldr r1, _080F978C  @ =0x00000F62
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	mov r8, r0
	sub r2, r2, #64
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	mov r12, r0
	lsl r7, r0, #8
	ldr r0, _080F9790  @ =gUnknown_0817A2FE
	add r0, r4, r0
	mov r1, r8
	orr r1, r1, r7
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080F9794  @ =gUnknown_0817A307
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r3, r1, #16
	ldr r1, _080F9798  @ =0x00000F82
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _080F979C  @ =0x00001082
	add r0, r6, r2
	add r0, r5, r0
	ldrb r2, [r0]
	lsl r2, r2, #8
	ldr r0, _080F97A0  @ =gUnknown_0817A310
	add r0, r4, r0
	orr r1, r1, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080F97A4  @ =gUnknown_0817A319
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r2, r1, #16
	ldr r4, _080F97A8  @ =0x000009AC
	add r0, r6, r4
	ldrb r0, [r0]
	add r4, r6, #0
	cmp r0, #26
	bne _080F97DC
	mov r3, r8
	orr r3, r3, r7
	mov r0, r12
	cmp r0, #0
	bne _080F97B0
	ldr r1, _080F97AC  @ =0x00000F02
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F97C4
	add r0, r3, #0
	add r0, r0, #192
	b _080F97C0
_080F977C:
	.4byte gRam
_080F9780:
	.4byte 0x00000FC2
_080F9784:
	.4byte gUnknown_0817A322
_080F9788:
	.4byte 0x00000FB2
_080F978C:
	.4byte 0x00000F62
_080F9790:
	.4byte gUnknown_0817A2FE
_080F9794:
	.4byte gUnknown_0817A307
_080F9798:
	.4byte 0x00000F82
_080F979C:
	.4byte 0x00001082
_080F97A0:
	.4byte gUnknown_0817A310
_080F97A4:
	.4byte gUnknown_0817A319
_080F97A8:
	.4byte 0x000009AC
_080F97AC:
	.4byte 0x00000F02
_080F97B0:
	ldr r2, _080F9824  @ =0x00000F02
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F97C4
	add r0, r3, #0
	sub r0, r0, #192
_080F97C0:
	lsl r0, r0, #16
	lsr r3, r0, #16
_080F97C4:
	ldr r1, _080F9828  @ =gRam
	ldr r4, _080F982C  @ =0x00000F82
	add r0, r1, r4
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r4, _080F9830  @ =0x00001082
	add r0, r1, r4
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	add r4, r1, #0
_080F97DC:
	ldr r1, _080F9834  @ =gUnknown_0200F318
	add r0, r5, r1
	strb r3, [r0]
	ldr r0, _080F9838  @ =gUnknown_0200F31E
	add r1, r5, r0
	lsr r0, r3, #8
	strb r0, [r1]
	ldr r1, _080F983C  @ =gUnknown_0200F324
	add r0, r5, r1
	strb r2, [r0]
	ldr r0, _080F9840  @ =gUnknown_0200F32A
	add r1, r5, r0
	lsr r0, r2, #8
	strb r0, [r1]
	ldr r2, _080F9844  @ =0x00000F52
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080C351C
	ldr r1, _080F9848  @ =0x00001152
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #241
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080F9BB8
_080F981A:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080F9824:
	.4byte 0x00000F02
_080F9828:
	.4byte gRam
_080F982C:
	.4byte 0x00000F82
_080F9830:
	.4byte 0x00001082
_080F9834:
	.4byte gUnknown_0200F318
_080F9838:
	.4byte gUnknown_0200F31E
_080F983C:
	.4byte gUnknown_0200F324
_080F9840:
	.4byte gUnknown_0200F32A
_080F9844:
	.4byte 0x00000F52
_080F9848:
	.4byte 0x00001152
	THUMB_FUNC_END sub_080F96C4

