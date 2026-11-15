	THUMB_FUNC_START sub_080BA9C8
sub_080BA9C8: @ 0x080BA9C8
	push {r4,r5,lr}
	mov r5, #0
	ldr r4, _080BAA34  @ =gRam
	ldr r1, _080BAA38  @ =0x00000A02
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080BAA3C  @ =0x00000A03
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	mov r0, #128
	lsl r0, r0, #2
	cmp r1, r0
	bne _080BA9EE
	ldr r3, _080BAA40  @ =0x00000F22
	add r1, r4, r3
	mov r0, #252
	strb r0, [r1]
_080BA9EE:
	ldr r0, _080BAA44  @ =0x00000F92
	add r2, r4, r0
	ldr r1, _080BAA48  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #28
	strb r1, [r2]
	ldr r3, _080BAA4C  @ =0x00000EE2
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #56
	bne _080BAA16
	add r3, r3, #64
	add r0, r4, r3
	strb r5, [r0]
	add r0, r1, #2
	strb r0, [r2]
_080BAA16:
	mov r0, #0
	mov r1, #52
	mov r2, #3
	bl sub_080BD874
	ldr r1, _080BAA50  @ =0x000015DC
	add r0, r4, r1
	strb r5, [r0]
	mov r0, #0
	bl sub_080CA58C
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BAA34:
	.4byte gRam
_080BAA38:
	.4byte 0x00000A02
_080BAA3C:
	.4byte 0x00000A03
_080BAA40:
	.4byte 0x00000F22
_080BAA44:
	.4byte 0x00000F92
_080BAA48:
	.4byte 0x00000996
_080BAA4C:
	.4byte 0x00000EE2
_080BAA50:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080BA9C8

