	THUMB_FUNC_START sub_08107C48
sub_08107C48: @ 0x08107C48
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _08107C6C  @ =gRam
	ldr r1, _08107C70  @ =0x00000F22
	add r0, r2, r1
	add r0, r3, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08107C78
	ldr r0, _08107C74  @ =0x00001052
	add r1, r2, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	b _08107C82
_08107C6C:
	.4byte gRam
_08107C70:
	.4byte 0x00000F22
_08107C74:
	.4byte 0x00001052
_08107C78:
	ldr r0, _08107CA0  @ =0x00001052
	add r1, r2, r0
	add r1, r3, r1
	ldrb r0, [r1]
	sub r0, r0, #1
_08107C82:
	strb r0, [r1]
	ldr r1, _08107CA0  @ =0x00001052
	add r0, r2, r1
	add r0, r3, r0
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _08107C9C
	add r0, r3, #0
	mov r1, #13
	bl sub_080CF0AC
_08107C9C:
	pop {r0}
	bx r0
_08107CA0:
	.4byte 0x00001052
	THUMB_FUNC_END sub_08107C48

