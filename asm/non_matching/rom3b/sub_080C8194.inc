	THUMB_FUNC_START sub_080C8194
sub_080C8194: @ 0x080C8194
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080C81CC  @ =gRam
	ldr r1, _080C81D0  @ =0x00000E65
	add r0, r2, r1
	add r0, r4, r0
	mov r3, #171
	lsl r3, r3, #4
	add r1, r2, r3
	ldrh r1, [r1]
	strb r1, [r0]
	ldr r1, _080C81D4  @ =0x0000140C
	add r0, r2, r1
	add r3, r4, r0
	ldrb r0, [r3]
	add r5, r2, #0
	cmp r0, #3
	bne _080C81DC
	ldr r2, _080C81D8  @ =0x00001032
	add r0, r5, r2
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #239
	and r1, r1, r2
	strb r1, [r0]
	b _080C8200
	.byte 0x00
	.byte 0x00
_080C81CC:
	.4byte gRam
_080C81D0:
	.4byte 0x00000E65
_080C81D4:
	.4byte 0x0000140C
_080C81D8:
	.4byte 0x00001032
_080C81DC:
	ldr r1, _080C8340  @ =0x00000FC2
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080C8200
	sub r1, r1, #64
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r1, #4
	cmp r0, #6
	bne _080C81F8
	mov r1, #8
_080C81F8:
	strb r1, [r2]
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
_080C8200:
	mov r3, #150
	lsl r3, r3, #4
	add r2, r5, r3
	mov r0, #0
	strb r0, [r2]
	ldr r1, _080C8344  @ =0x000010E2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #62
	bhi _080C8228
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080C8228
	mov r0, #1
	strb r0, [r2]
_080C8228:
	ldr r2, _080C8348  @ =0x000016D5
	add r0, r5, r2
	ldrb r3, [r0]
	lsl r0, r3, #25
	ldr r3, _080C834C  @ =0x0000140C
	add r1, r5, r3
	add r1, r4, r1
	lsr r0, r0, #24
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _080C8350  @ =0x000016C4
	add r0, r5, r1
	ldrb r1, [r0]
	sub r2, r2, #16
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #150
	lsl r0, r0, #4
	add r6, r5, r0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r0, _080C8354  @ =gUnknown_08172484
	add r0, r3, r0
	ldrb r2, [r0]
	ldr r0, _080C8358  @ =gUnknown_08172494
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	add r1, r1, r2
	ldr r2, _080C835C  @ =0x00000EE2
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	add r2, r2, #32
	add r0, r5, r2
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080C8360  @ =0x00001142
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080C8364  @ =gUnknown_081724A4
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080C8368  @ =0x000016D4
	add r1, r5, r2
	ldrb r0, [r1]
	mov r2, #0
	cmp r0, #5
	bhi _080C82A8
	add r2, r0, #0
_080C82A8:
	ldr r3, _080C836C  @ =0x000016C8
	add r0, r5, r3
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r1, r1, #16
	mov r0, #128
	lsl r0, r0, #9
	add r1, r1, r0
	ldr r0, _080C8370  @ =gUnknown_081724B4
	add r0, r2, r0
	lsr r1, r1, #16
	ldrb r0, [r0]
	add r1, r1, r0
	strb r1, [r6]
	lsr r1, r1, #8
	ldr r3, _080C8374  @ =0x0000097C
	add r2, r5, r3
	strb r1, [r2]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r5, r1
	ldrb r0, [r0]
	ldr r3, _080C8378  @ =0x000016C1
	add r1, r5, r3
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	lsl r1, r1, #8
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #0
	ldrsb r1, [r6, r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	mov r1, #128
	lsl r1, r1, #12
	add r0, r0, r1
	lsr r0, r0, #16
	ldrb r1, [r2]
	lsl r1, r1, #8
	sub r0, r0, r1
	ldr r2, _080C837C  @ =0x00000ED2
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
	ldr r3, _080C8380  @ =0x00000EF2
	add r1, r5, r3
	add r1, r4, r1
	lsr r0, r0, #8
	strb r0, [r1]
	ldr r0, _080C8384  @ =0x000010F2
	add r1, r5, r0
	add r1, r4, r1
	mov r2, #161
	lsl r2, r2, #4
	add r0, r5, r2
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C3214
	add r0, r4, #0
	bl sub_080C8388
	pop {r4-r6}
	pop {r0}
	bx r0
_080C8340:
	.4byte 0x00000FC2
_080C8344:
	.4byte 0x000010E2
_080C8348:
	.4byte 0x000016D5
_080C834C:
	.4byte 0x0000140C
_080C8350:
	.4byte 0x000016C4
_080C8354:
	.4byte gUnknown_08172484
_080C8358:
	.4byte gUnknown_08172494
_080C835C:
	.4byte 0x00000EE2
_080C8360:
	.4byte 0x00001142
_080C8364:
	.4byte gUnknown_081724A4
_080C8368:
	.4byte 0x000016D4
_080C836C:
	.4byte 0x000016C8
_080C8370:
	.4byte gUnknown_081724B4
_080C8374:
	.4byte 0x0000097C
_080C8378:
	.4byte 0x000016C1
_080C837C:
	.4byte 0x00000ED2
_080C8380:
	.4byte 0x00000EF2
_080C8384:
	.4byte 0x000010F2
	THUMB_FUNC_END sub_080C8194

