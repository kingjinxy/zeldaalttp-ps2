	THUMB_FUNC_START sub_080B1880
sub_080B1880: @ 0x080B1880
	push {lr}
	bl sub_080B054C
	mov r0, #29
	mov r1, #1
	bl sub_080BEA28
	ldr r1, _080B18AC  @ =gHeartsFiller
	mov r0, #56
	strb r0, [r1]
	ldr r1, _080B18B0  @ =gRam
	ldr r0, _080B18B4  @ =0x000009AD
	add r2, r1, r0
	ldrb r0, [r2]
	add r0, r0, #1
	mov r3, #0
	strb r0, [r2]
	ldr r0, _080B18B8  @ =0x00000A4C
	add r1, r1, r0
	strh r3, [r1]
	pop {r0}
	bx r0
_080B18AC:
	.4byte gHeartsFiller
_080B18B0:
	.4byte gRam
_080B18B4:
	.4byte 0x000009AD
_080B18B8:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080B1880

