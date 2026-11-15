	THUMB_FUNC_START sub_08119AEC
sub_08119AEC: @ 0x08119AEC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _08119B64  @ =gRam
	ldr r2, _08119B68  @ =0x0000183C
	add r0, r1, r2
	add r0, r5, r0
	ldrb r3, [r0]
	mov r2, #128
	add r0, r3, #0
	and r0, r0, r2
	add r4, r1, #0
	cmp r0, #0
	beq _08119B0A
	b _08119C1C
_08119B0A:
	ldr r6, _08119B6C  @ =0x00000FA2
	add r0, r4, r6
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #8
	bhi _08119B18
	b _08119C84
_08119B18:
	ldr r1, _08119B70  @ =0x00001142
	add r0, r4, r1
	add r0, r3, r0
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08119B2A
	b _08119C84
_08119B2A:
	ldr r2, _08119B74  @ =0x00001172
	add r0, r4, r2
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08119B38
	b _08119C84
_08119B38:
	ldr r6, _08119B78  @ =0x00000E75
	add r0, r4, r6
	add r0, r3, r0
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08119B4A
	b _08119C84
_08119B4A:
	ldr r1, _08119B7C  @ =0x00000DF7
	add r0, r4, r1
	add r1, r5, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _08119B80
	ldrb r2, [r1]
	mov r6, #255
	lsl r6, r6, #8
	add r0, r6, #0
	orr r2, r2, r0
	b _08119B82
_08119B64:
	.4byte gRam
_08119B68:
	.4byte 0x0000183C
_08119B6C:
	.4byte 0x00000FA2
_08119B70:
	.4byte 0x00001142
_08119B74:
	.4byte 0x00001172
_08119B78:
	.4byte 0x00000E75
_08119B7C:
	.4byte 0x00000DF7
_08119B80:
	ldrb r2, [r1]
_08119B82:
	ldr r1, _08119BCC  @ =0x00000EE2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r6, _08119BD0  @ =0x00000F02
	add r0, r4, r6
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r0, r2, #16
	asr r0, r0, #16
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r2, r0, #16
	ldr r1, _08119BD4  @ =0x00000DCF
	add r0, r4, r1
	add r0, r5, r0
	strb r2, [r0]
	ldr r6, _08119BD8  @ =0x00000DE3
	add r0, r4, r6
	add r0, r5, r0
	lsr r1, r2, #8
	strb r1, [r0]
	ldr r1, _08119BDC  @ =0x00000DED
	add r0, r4, r1
	add r1, r5, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _08119BE0
	ldrb r2, [r1]
	mov r6, #255
	lsl r6, r6, #8
	add r0, r6, #0
	orr r2, r2, r0
	b _08119BE2
_08119BCC:
	.4byte 0x00000EE2
_08119BD0:
	.4byte 0x00000F02
_08119BD4:
	.4byte 0x00000DCF
_08119BD8:
	.4byte 0x00000DE3
_08119BDC:
	.4byte 0x00000DED
_08119BE0:
	ldrb r2, [r1]
_08119BE2:
	ldr r1, _08119C64  @ =0x00000ED2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r6, _08119C68  @ =0x00001142
	add r0, r4, r6
	add r0, r3, r0
	ldrb r0, [r0]
	sub r1, r1, r0
	ldr r6, _08119C6C  @ =0x00000EF2
	add r0, r4, r6
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r0, r2, #16
	asr r0, r0, #16
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r2, r0, #16
	ldr r1, _08119C70  @ =0x00000DC5
	add r0, r4, r1
	add r0, r5, r0
	strb r2, [r0]
	ldr r6, _08119C74  @ =0x00000DD9
	add r0, r4, r6
	add r0, r5, r0
	lsr r1, r2, #8
	strb r1, [r0]
_08119C1C:
	ldr r1, _08119C78  @ =0x000009AD
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08119C5C
	ldr r2, _08119C7C  @ =0x00001844
	add r0, r4, r2
	add r2, r5, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08119C5C
	mov r0, #2
	strb r0, [r2]
	ldr r6, _08119C80  @ =0x00000E29
	add r0, r4, r6
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r0, #9
	beq _08119C84
	mov r0, #8
	and r1, r1, r0
	cmp r1, #0
	beq _08119C5C
	mov r0, #160
	strb r0, [r2]
_08119C5C:
	add r0, r5, #0
	bl sub_08119C98
	b _08119C8E
_08119C64:
	.4byte 0x00000ED2
_08119C68:
	.4byte 0x00001142
_08119C6C:
	.4byte 0x00000EF2
_08119C70:
	.4byte 0x00000DC5
_08119C74:
	.4byte 0x00000DD9
_08119C78:
	.4byte 0x000009AD
_08119C7C:
	.4byte 0x00001844
_08119C80:
	.4byte 0x00000E29
_08119C84:
	ldr r1, _08119C94  @ =0x00000E15
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
_08119C8E:
	pop {r4-r6}
	pop {r0}
	bx r0
_08119C94:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_08119AEC

