	THUMB_FUNC_START sub_080DE9D4
sub_080DE9D4: @ 0x080DE9D4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	mov r0, #4
	bl sub_080CF3A0
	add r0, r4, #0
	bl sub_080C58F0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DEA4E
	ldr r5, _080DEA54  @ =gRam
	ldr r0, _080DEA58  @ =0x00001122
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	mov r1, #48
	and r1, r1, r0
	strb r1, [r2]
	ldr r3, _080DEA5C  @ =gUnknown_08176470
	ldr r6, _080DEA60  @ =0x00000996
	add r0, r5, r6
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r6, #3
	and r0, r0, r6
	add r0, r0, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	ldr r0, _080DEA64  @ =0x00001152
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r1, _080DEA68  @ =0x00000FC2
	add r0, r5, r1
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r1, #0
	bne _080DEA40
	ldr r3, _080DEA6C  @ =0x00000FA2
	add r0, r5, r3
	add r0, r4, r0
	strb r1, [r0]
_080DEA40:
	ldr r0, _080DEA70  @ =0x00000F92
	add r1, r5, r0
	add r1, r7, r1
	ldrb r0, [r2]
	lsr r0, r0, #3
	and r0, r0, r6
	strb r0, [r1]
_080DEA4E:
	pop {r4-r7}
	pop {r0}
	bx r0
_080DEA54:
	.4byte gRam
_080DEA58:
	.4byte 0x00001122
_080DEA5C:
	.4byte gUnknown_08176470
_080DEA60:
	.4byte 0x00000996
_080DEA64:
	.4byte 0x00001152
_080DEA68:
	.4byte 0x00000FC2
_080DEA6C:
	.4byte 0x00000FA2
_080DEA70:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080DE9D4

