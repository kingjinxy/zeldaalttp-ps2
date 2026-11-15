	THUMB_FUNC_START sub_080C414C
sub_080C414C: @ 0x080C414C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r2, r1, #0
	cmp r1, #249
	beq _080C41F8
	cmp r1, #250
	beq _080C4184
	ldr r0, _080C417C  @ =gRam
	ldr r3, _080C4180  @ =0x00000EB5
	add r0, r0, r3
	add r0, r4, r0
	ldrb r3, [r0]
	cmp r1, r3
	bcc _080C4170
	strb r1, [r0]
_080C4170:
	add r0, r4, #0
	add r1, r2, #0
	bl sub_080C4208
	b _080C4200
	.byte 0x00
	.byte 0x00
_080C417C:
	.4byte gRam
_080C4180:
	.4byte 0x00000EB5
_080C4184:
	add r0, r4, #0
	mov r1, #143
	bl sub_080C52E4
	ldr r2, _080C41DC  @ =gRam
	ldr r1, _080C41E0  @ =0x00000F52
	add r0, r2, r1
	add r0, r4, r0
	mov r3, #0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080C41E4  @ =0x00001152
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r1, _080C41E8  @ =0x00001122
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #8
	strb r1, [r0]
	ldr r1, _080C41EC  @ =0x00001072
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	add r1, r1, #80
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	sub r1, r1, #160
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	ldr r3, _080C41F0  @ =0x00000EA5
	add r0, r2, r3
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r0, _080C41F4  @ =0x000011B2
	add r2, r2, r0
	add r2, r4, r2
	strb r1, [r2]
	b _080C4200
	.byte 0x00
	.byte 0x00
_080C41DC:
	.4byte gRam
_080C41E0:
	.4byte 0x00000F52
_080C41E4:
	.4byte 0x00001152
_080C41E8:
	.4byte 0x00001122
_080C41EC:
	.4byte 0x00001072
_080C41F0:
	.4byte 0x00000EA5
_080C41F4:
	.4byte 0x000011B2
_080C41F8:
	add r0, r4, #0
	mov r1, #227
	bl sub_080C52E4
_080C4200:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C414C

	.byte 0x00
	.byte 0x00
