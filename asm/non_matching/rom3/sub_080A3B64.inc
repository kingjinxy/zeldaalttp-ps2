	THUMB_FUNC_START sub_080A3B64
sub_080A3B64: @ 0x080A3B64
	push {r4,lr}
	ldr r2, _080A3BA8  @ =gRam
	ldr r3, _080A3BAC  @ =0x00000964
	add r1, r2, r3
	strb r0, [r1]
	ldr r0, _080A3BB0  @ =gUnknown_08169113
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r1, r1, r0
	ldr r0, _080A3BB4  @ =gMagicUsage
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080A3BB8  @ =gUnknown_081690F5
	add r0, r0, r1
	ldrb r1, [r0]
	sub r3, r3, #4
	add r0, r2, r3
	strb r1, [r0]
	ldr r3, _080A3BBC  @ =gMagicMeter
	ldrb r0, [r3]
	cmp r0, #0
	beq _080A3BC0
	sub r1, r0, r1
	lsl r0, r1, #24
	cmp r0, #0
	blt _080A3BC0
	strb r1, [r3]
	mov r0, #1
	b _080A3BE2
	.byte 0x00
	.byte 0x00
_080A3BA8:
	.4byte gRam
_080A3BAC:
	.4byte 0x00000964
_080A3BB0:
	.4byte gUnknown_08169113
_080A3BB4:
	.4byte gMagicUsage
_080A3BB8:
	.4byte gUnknown_081690F5
_080A3BBC:
	.4byte gMagicMeter
_080A3BC0:
	ldr r0, _080A3BE8  @ =0x00000964
	add r4, r2, r0
	mov r0, #0
	ldrsb r0, [r4, r0]
	cmp r0, #3
	beq _080A3BE0
	mov r0, #64
	bl sub_0809E43C
	mov r0, #0
	ldrsb r0, [r4, r0]
	cmp r0, #9
	beq _080A3BE0
	mov r0, #126
	bl sub_080AF4FC
_080A3BE0:
	mov r0, #0
_080A3BE2:
	pop {r4}
	pop {r1}
	bx r1
_080A3BE8:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080A3B64

