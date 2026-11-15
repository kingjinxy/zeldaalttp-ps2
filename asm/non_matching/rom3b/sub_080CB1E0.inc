	THUMB_FUNC_START sub_080CB1E0
sub_080CB1E0: @ 0x080CB1E0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r4, _080CB250  @ =gRam
	ldr r1, _080CB254  @ =0x00000E75
	add r0, r4, r1
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080CB206
	ldr r5, _080CB258  @ =0x000009B2
	add r0, r4, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080CB270
_080CB206:
	ldr r1, _080CB25C  @ =0x00000FA2
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
	lsl r1, r2, #1
	ldr r2, _080CB260  @ =0x00001192
	add r0, r4, r2
	add r2, r1, r0
	ldrh r0, [r2]
	lsl r0, r0, #16
	lsr r1, r0, #16
	lsr r0, r0, #19
	ldr r5, _080CB264  @ =gUnknown_02007B80
	add r3, r0, r5
	ldr r5, _080CB268  @ =0x0000FFFF
	cmp r1, r5
	beq _080CB23A
	ldrh r1, [r2]
	mov r0, #7
	bic r0, r0, r1
	mov r1, #1
	lsl r1, r1, r0
	ldrb r0, [r3]
	bic r0, r0, r1
	strb r0, [r3]
_080CB23A:
	ldr r1, _080CB258  @ =0x000009B2
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080CB26C
	ldrh r1, [r2]
	add r0, r5, #0
	orr r0, r0, r1
	b _080CB26E
_080CB250:
	.4byte gRam
_080CB254:
	.4byte 0x00000E75
_080CB258:
	.4byte 0x000009B2
_080CB25C:
	.4byte 0x00000FA2
_080CB260:
	.4byte 0x00001192
_080CB264:
	.4byte gUnknown_02007B80
_080CB268:
	.4byte 0x0000FFFF
_080CB26C:
	mov r0, #255
_080CB26E:
	strh r0, [r2]
_080CB270:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CB1E0

	.byte 0x00
	.byte 0x00
