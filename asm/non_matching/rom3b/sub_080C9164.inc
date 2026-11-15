	THUMB_FUNC_START sub_080C9164
sub_080C9164: @ 0x080C9164
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r7, r2, #0
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r9, r1
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C9240
	bl sub_0809E3CC
	cmp r0, #0
	bne _080C9240
	ldr r5, _080C921C  @ =gRam
	ldr r1, _080C9220  @ =0x00001702
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #2
	beq _080C9240
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	ldr r3, _080C9224  @ =0x000016D5
	add r0, r5, r3
	ldrb r1, [r0]
	lsr r1, r1, #1
	ldr r0, _080C9228  @ =gUnknown_08172759
	add r0, r1, r0
	mov r2, #0
	ldrsb r2, [r0, r2]
	ldr r3, _080C922C  @ =0x0000097D
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mul r2, r0, r2
	ldr r0, _080C9230  @ =gUnknown_0817275D
	add r1, r1, r0
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	sub r3, r3, #1
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mul r0, r1, r0
	add r2, r2, r0
	cmp r2, #0
	bge _080C9240
	ldr r1, _080C9234  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080C9238  @ =0x000010E2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080C9240
	ldr r3, _080C923C  @ =0x00000546
	add r0, r5, r3
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080C9240
	add r0, r4, #0
	mov r1, r9
	mov r2, #0
	bl sub_080C9564
	mov r0, #32
	strb r0, [r6]
	cmp r7, #0
	beq _080C9218
	mov r1, #3
	mov r0, r8
	eor r0, r0, r1
	strb r0, [r7]
_080C9218:
	mov r0, #1
	b _080C9252
_080C921C:
	.4byte gRam
_080C9220:
	.4byte 0x00001702
_080C9224:
	.4byte 0x000016D5
_080C9228:
	.4byte gUnknown_08172759
_080C922C:
	.4byte 0x0000097D
_080C9230:
	.4byte gUnknown_0817275D
_080C9234:
	.4byte gUnknown_03003E70
_080C9238:
	.4byte 0x000010E2
_080C923C:
	.4byte 0x00000546
_080C9240:
	cmp r7, #0
	beq _080C9250
	ldr r0, _080C9260  @ =gRam
	ldr r1, _080C9264  @ =0x00000FB2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r7]
_080C9250:
	mov r0, #0
_080C9252:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C9260:
	.4byte gRam
_080C9264:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080C9164

