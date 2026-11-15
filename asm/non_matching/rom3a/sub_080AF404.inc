	THUMB_FUNC_START sub_080AF404
sub_080AF404: @ 0x080AF404
	push {r4-r7,lr}
	add r6, r1, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080AF47C  @ =gRam
	ldr r3, _080AF480  @ =0x00000E3D
	add r1, r2, r3
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r6]
	ldr r4, _080AF484  @ =0x00000DC5
	add r3, r2, r4
	add r3, r0, r3
	ldrb r1, [r3]
	mov r7, #150
	lsl r7, r7, #4
	add r5, r2, r7
	strb r1, [r5]
	add r4, r4, #20
	add r1, r2, r4
	add r0, r0, r1
	ldrb r1, [r0]
	add r7, r7, #1
	add r4, r2, r7
	strb r1, [r4]
	mov r7, #0
	ldrsh r1, [r5, r7]
	neg r1, r1
	strh r1, [r5]
	ldrb r1, [r5]
	strb r1, [r3]
	ldrb r1, [r4]
	strb r1, [r0]
	ldr r1, _080AF488  @ =0x000009B2
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080AF4E6
	ldrb r0, [r6]
	cmp r0, #2
	bne _080AF4A0
	ldr r3, _080AF48C  @ =0x00000B74
	add r0, r2, r3
	ldrh r1, [r0]
	add r1, r1, #1
	ldr r4, _080AF490  @ =0x00000964
	add r0, r2, r4
	strh r1, [r0]
	ldr r7, _080AF494  @ =0x00000B76
	add r0, r2, r7
	ldrh r0, [r0]
	sub r4, r0, #1
	ldr r3, _080AF498  @ =0x00000968
	add r0, r2, r3
	strh r4, [r0]
	ldr r7, _080AF49C  @ =0x00000958
	add r0, r2, r7
	b _080AF4C0
_080AF47C:
	.4byte gRam
_080AF480:
	.4byte 0x00000E3D
_080AF484:
	.4byte 0x00000DC5
_080AF488:
	.4byte 0x000009B2
_080AF48C:
	.4byte 0x00000B74
_080AF490:
	.4byte 0x00000964
_080AF494:
	.4byte 0x00000B76
_080AF498:
	.4byte 0x00000968
_080AF49C:
	.4byte 0x00000958
_080AF4A0:
	ldr r1, _080AF4EC  @ =0x00000B78
	add r0, r2, r1
	ldrh r1, [r0]
	add r1, r1, #1
	ldr r3, _080AF4F0  @ =0x00000964
	add r0, r2, r3
	strh r1, [r0]
	ldr r4, _080AF4F4  @ =0x00000B7A
	add r0, r2, r4
	ldrh r0, [r0]
	sub r4, r0, #1
	ldr r7, _080AF4F8  @ =0x00000968
	add r0, r2, r7
	strh r4, [r0]
	sub r3, r3, #18
	add r0, r2, r3
_080AF4C0:
	ldrh r0, [r0]
	ldrh r5, [r5]
	add r0, r0, r5
	lsl r0, r0, #16
	lsl r1, r1, #16
	asr r3, r0, #16
	cmp r0, r1
	ble _080AF4DC
	lsl r0, r4, #16
	asr r0, r0, #16
	cmp r3, r0
	beq _080AF4DC
	cmp r3, r0
	blt _080AF4E6
_080AF4DC:
	mov r4, #150
	lsl r4, r4, #4
	add r1, r2, r4
	mov r0, #0
	strh r0, [r1]
_080AF4E6:
	pop {r4-r7}
	pop {r0}
	bx r0
_080AF4EC:
	.4byte 0x00000B78
_080AF4F0:
	.4byte 0x00000964
_080AF4F4:
	.4byte 0x00000B7A
_080AF4F8:
	.4byte 0x00000968
	THUMB_FUNC_END sub_080AF404

