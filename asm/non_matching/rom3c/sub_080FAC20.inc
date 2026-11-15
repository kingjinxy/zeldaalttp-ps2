	THUMB_FUNC_START sub_080FAC20
sub_080FAC20: @ 0x080FAC20
	push {r4-r6,lr}
	add r2, r0, #0
	lsl r2, r2, #24
	lsr r2, r2, #24
	lsl r1, r1, #24
	lsr r6, r1, #24
	mov r0, #182
	add r1, r2, #0
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	blt _080FACC2
	ldr r3, _080FACCC  @ =gRam
	ldr r1, _080FACD0  @ =0x00001082
	add r0, r3, r1
	add r0, r5, r0
	ldr r1, _080FACD4  @ =gUnknown_0200EC04
	add r2, r6, r1
	ldrb r1, [r2]
	mov r4, #0
	strb r1, [r0]
	ldr r1, _080FACD8  @ =0x00000FB2
	add r0, r3, r1
	add r0, r5, r0
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r2, _080FACDC  @ =gUnknown_0200EBA0
	add r0, r6, r2
	ldrb r1, [r0]
	add r2, r2, #20
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #2
	ldr r2, _080FACE0  @ =0x00000ED2
	add r0, r3, r2
	add r0, r5, r0
	strb r1, [r0]
	add r2, r2, #32
	add r0, r3, r2
	add r0, r5, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080FACE4  @ =gUnknown_0200EBC8
	add r0, r6, r1
	ldrb r1, [r0]
	ldr r2, _080FACE8  @ =gUnknown_0200EBDC
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #2
	ldr r2, _080FACEC  @ =0x00000EE2
	add r0, r3, r2
	add r0, r5, r0
	strb r1, [r0]
	add r2, r2, #32
	add r0, r3, r2
	add r0, r5, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080FACF0  @ =0x000010F2
	add r2, r3, r0
	add r2, r5, r2
	mov r1, #161
	lsl r1, r1, #4
	add r0, r3, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r1, _080FACF4  @ =0x00001172
	add r0, r3, r1
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	mov r0, #2
	strb r0, [r2]
	ldr r2, _080FACF8  @ =0x00001719
	add r3, r3, r2
	strb r4, [r3]
_080FACC2:
	add r0, r5, #0
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080FACCC:
	.4byte gRam
_080FACD0:
	.4byte 0x00001082
_080FACD4:
	.4byte gUnknown_0200EC04
_080FACD8:
	.4byte 0x00000FB2
_080FACDC:
	.4byte gUnknown_0200EBA0
_080FACE0:
	.4byte 0x00000ED2
_080FACE4:
	.4byte gUnknown_0200EBC8
_080FACE8:
	.4byte gUnknown_0200EBDC
_080FACEC:
	.4byte 0x00000EE2
_080FACF0:
	.4byte 0x000010F2
_080FACF4:
	.4byte 0x00001172
_080FACF8:
	.4byte 0x00001719
	THUMB_FUNC_END sub_080FAC20

