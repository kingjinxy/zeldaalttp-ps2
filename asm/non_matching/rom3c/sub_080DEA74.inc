	THUMB_FUNC_START sub_080DEA74
sub_080DEA74: @ 0x080DEA74
	push {r4,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #181
	bl sub_080CA538
	ldr r3, _080DEB10  @ =gRam
	ldr r2, _080DEB14  @ =0x00001052
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #3
	strb r2, [r1]
	ldr r4, _080DEB18  @ =0x00001172
	add r1, r3, r4
	add r1, r0, r1
	strb r2, [r1]
	mov r1, #150
	lsl r1, r1, #4
	add r2, r3, r1
	ldrh r1, [r2]
	add r1, r1, #4
	strh r1, [r2]
	ldr r4, _080DEB1C  @ =0x00000EE2
	add r1, r3, r4
	add r1, r0, r1
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080DEB20  @ =0x00000F02
	add r1, r3, r2
	add r1, r0, r1
	ldr r4, _080DEB24  @ =0x00000961
	add r2, r3, r4
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r1, _080DEB28  @ =0x00000964
	add r2, r3, r1
	ldrh r1, [r2]
	add r1, r1, #16
	strh r1, [r2]
	ldr r4, _080DEB2C  @ =0x00000ED2
	add r1, r3, r4
	add r1, r0, r1
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080DEB30  @ =0x00000EF2
	add r1, r3, r2
	add r1, r0, r1
	ldr r4, _080DEB34  @ =0x00000965
	add r2, r3, r4
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080DEB38  @ =0x00001142
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #4
	strb r2, [r1]
	ldr r4, _080DEB3C  @ =0x00001152
	add r1, r3, r4
	add r1, r0, r1
	mov r2, #244
	strb r2, [r1]
	ldr r2, _080DEB40  @ =0x00000FC2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #23
	strb r2, [r1]
	ldr r4, _080DEB44  @ =0x00001032
	add r3, r3, r4
	add r0, r0, r3
	ldrb r2, [r0]
	mov r1, #238
	and r1, r1, r2
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DEB10:
	.4byte gRam
_080DEB14:
	.4byte 0x00001052
_080DEB18:
	.4byte 0x00001172
_080DEB1C:
	.4byte 0x00000EE2
_080DEB20:
	.4byte 0x00000F02
_080DEB24:
	.4byte 0x00000961
_080DEB28:
	.4byte 0x00000964
_080DEB2C:
	.4byte 0x00000ED2
_080DEB30:
	.4byte 0x00000EF2
_080DEB34:
	.4byte 0x00000965
_080DEB38:
	.4byte 0x00001142
_080DEB3C:
	.4byte 0x00001152
_080DEB40:
	.4byte 0x00000FC2
_080DEB44:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080DEA74

