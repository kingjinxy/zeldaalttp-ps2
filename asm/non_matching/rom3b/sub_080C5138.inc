	THUMB_FUNC_START sub_080C5138
sub_080C5138: @ 0x080C5138
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _080C5174  @ =gRam
	ldr r1, _080C5178  @ =0x00000F92
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C515C
	ldr r1, _080C517C  @ =0x00000DB8
	add r4, r7, r1
	mov r5, #0
	strb r0, [r4]
	add r0, r6, #0
	bl sub_080C2534
	strb r5, [r4]
_080C515C:
	ldr r1, _080C5180  @ =0x000009B2
	add r0, r7, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080C5188
	ldr r1, _080C5184  @ =0x00000F82
	add r0, r7, r1
	add r0, r6, r0
	ldrb r4, [r0]
	b _080C518A
_080C5174:
	.4byte gRam
_080C5178:
	.4byte 0x00000F92
_080C517C:
	.4byte 0x00000DB8
_080C5180:
	.4byte 0x000009B2
_080C5184:
	.4byte 0x00000F82
_080C5188:
	mov r4, #0
_080C518A:
	ldr r0, _080C51A4  @ =gUnknown_081720BC
	add r0, r4, r0
	ldrb r1, [r0]
	add r0, r6, #0
	bl sub_080CF0AC
	add r0, r6, #0
	bl sub_080C6E3C
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C51A4:
	.4byte gUnknown_081720BC
	THUMB_FUNC_END sub_080C5138

