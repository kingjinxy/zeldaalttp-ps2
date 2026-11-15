	THUMB_FUNC_START sub_080F3080
sub_080F3080: @ 0x080F3080
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _080F30DC  @ =gRam
	ldr r1, _080F30E0  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080F3126
	ldr r0, _080F30E4  @ =0x000009D6
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #32
	bne _080F30FC
	ldr r0, _080F30E8  @ =0x00000F52
	add r1, r2, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F30EC  @ =0x0000180F
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F30F0  @ =0x0000180E
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #182
	lsl r0, r0, #5
	add r1, r2, r0
	mov r0, #87
	strb r0, [r1]
	ldr r0, _080F30F4  @ =0x000016C1
	add r1, r2, r0
	mov r0, #33
	strb r0, [r1]
	ldr r0, _080F30F8  @ =0x00001770
	add r1, r2, r0
	mov r0, #1
	b _080F3124
	.byte 0x00
	.byte 0x00
_080F30DC:
	.4byte gRam
_080F30E0:
	.4byte 0x00000996
_080F30E4:
	.4byte 0x000009D6
_080F30E8:
	.4byte 0x00000F52
_080F30EC:
	.4byte 0x0000180F
_080F30F0:
	.4byte 0x0000180E
_080F30F4:
	.4byte 0x000016C1
_080F30F8:
	.4byte 0x00001770
_080F30FC:
	sub r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F312C  @ =0x000009D7
	add r1, r2, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F3130  @ =0x00000998
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080F3118
	sub r0, r0, #1
	strb r0, [r1]
_080F3118:
	ldr r0, _080F3134  @ =0x00000999
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #31
	beq _080F3126
	add r0, r0, #1
_080F3124:
	strb r0, [r1]
_080F3126:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F312C:
	.4byte 0x000009D7
_080F3130:
	.4byte 0x00000998
_080F3134:
	.4byte 0x00000999
	THUMB_FUNC_END sub_080F3080

