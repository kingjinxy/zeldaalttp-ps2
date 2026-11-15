	THUMB_FUNC_START sub_080EA9C8
sub_080EA9C8: @ 0x080EA9C8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r5, _080EAA5C  @ =gRam
	ldr r1, _080EAA60  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r7, #0
	eor r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	ldr r2, _080EAA64  @ =0x000009B2
	add r1, r5, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	orr r0, r0, r1
	cmp r0, #0
	bne _080EAAD2
	mov r0, #11
	add r1, r7, #0
	mov r2, #10
	bl sub_080C9AAC
	add r4, r0, #0
	cmp r4, #0
	blt _080EAAD2
	add r0, r7, #0
	mov r1, #100
	bl sub_080CF140
	ldr r3, _080EAA68  @ =0x00000F82
	add r0, r5, r3
	add r0, r4, r0
	mov r6, #1
	strb r6, [r0]
	bl GetRandomInt
	ldr r1, _080EAA6C  @ =0x0000097D
	add r2, r5, r1
	strb r0, [r2]
	mov r1, #2
	and r1, r1, r0
	cmp r1, #0
	bne _080EAA84
	ldrb r1, [r2]
	ldr r2, _080EAA70  @ =0x00000958
	add r0, r5, r2
	ldrh r2, [r0]
	add r2, r1, r2
	ldr r0, _080EAA74  @ =gUnknown_08177D42
	and r1, r1, r6
	add r1, r1, r0
	ldr r3, _080EAA78  @ =0x00000952
	add r0, r5, r3
	ldrh r3, [r0]
	ldrb r1, [r1]
	add r3, r3, r1
	ldr r1, _080EAA7C  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	add r1, r1, #32
	add r0, r5, r1
	add r0, r4, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080EAA80  @ =0x00000EE2
	add r0, r5, r2
	add r0, r4, r0
	strb r3, [r0]
	add r1, r1, #16
	b _080EAABA
	.byte 0x00
	.byte 0x00
_080EAA5C:
	.4byte gRam
_080EAA60:
	.4byte 0x00000996
_080EAA64:
	.4byte 0x000009B2
_080EAA68:
	.4byte 0x00000F82
_080EAA6C:
	.4byte 0x0000097D
_080EAA70:
	.4byte 0x00000958
_080EAA74:
	.4byte gUnknown_08177D42
_080EAA78:
	.4byte 0x00000952
_080EAA7C:
	.4byte 0x00000ED2
_080EAA80:
	.4byte 0x00000EE2
_080EAA84:
	ldrb r1, [r2]
	ldr r2, _080EAAD8  @ =0x00000952
	add r0, r5, r2
	ldrh r2, [r0]
	add r2, r1, r2
	ldr r0, _080EAADC  @ =gUnknown_08177D42
	and r1, r1, r6
	add r1, r1, r0
	ldr r3, _080EAAE0  @ =0x00000958
	add r0, r5, r3
	ldrh r3, [r0]
	ldrb r1, [r1]
	add r3, r3, r1
	ldr r1, _080EAAE4  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	add r1, r1, #32
	add r0, r5, r1
	add r0, r4, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080EAAE8  @ =0x00000ED2
	add r0, r5, r2
	add r0, r4, r0
	strb r3, [r0]
	sub r1, r1, #16
_080EAABA:
	add r0, r5, r1
	add r0, r4, r0
	lsr r3, r3, #8
	strb r3, [r0]
	lsl r0, r4, #24
	lsr r0, r0, #24
	mov r1, #32
	bl sub_080C35FC
	add r0, r7, #0
	bl sub_080EAC54
_080EAAD2:
	pop {r4-r7}
	pop {r0}
	bx r0
_080EAAD8:
	.4byte 0x00000952
_080EAADC:
	.4byte gUnknown_08177D42
_080EAAE0:
	.4byte 0x00000958
_080EAAE4:
	.4byte 0x00000EE2
_080EAAE8:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_080EA9C8

