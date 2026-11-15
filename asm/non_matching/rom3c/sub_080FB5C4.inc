	THUMB_FUNC_START sub_080FB5C4
sub_080FB5C4: @ 0x080FB5C4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080FB670  @ =gRam
	ldr r1, _080FB674  @ =0x00001142
	add r0, r5, r1
	add r0, r4, r0
	ldr r2, _080FB678  @ =0x00000FE2
	add r1, r5, r2
	add r6, r4, r1
	ldrb r1, [r0]
	ldrb r0, [r6]
	orr r0, r0, r1
	cmp r0, #0
	bne _080FB6B6
	mov r1, #161
	lsl r1, r1, #4
	add r0, r5, r1
	ldr r2, _080FB67C  @ =0x000010F2
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080FB6B6
	ldr r1, _080FB680  @ =0x000016F6
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #128
	beq _080FB6B6
	ldr r2, _080FB684  @ =0x0000178A
	add r0, r5, r2
	ldrb r1, [r0]
	mov r0, #10
	and r0, r0, r1
	cmp r0, #0
	beq _080FB6B6
	bl sub_080C3C98
	add r0, r4, #0
	bl sub_080FB6C8
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FB6B6
	ldr r0, _080FB688  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _080FB68C  @ =0x00000F12
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	mov r1, #32
	strb r1, [r6]
	ldr r2, _080FB690  @ =0x00001152
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _080FB694  @ =0x000010A2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	ldr r2, _080FB698  @ =0x00000F72
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	mov r2, #1
	eor r0, r0, r2
	strb r0, [r1]
	cmp r0, #0
	beq _080FB6A0
	ldr r1, _080FB69C  @ =0x000010E2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #255
	b _080FB6A8
_080FB670:
	.4byte gRam
_080FB674:
	.4byte 0x00001142
_080FB678:
	.4byte 0x00000FE2
_080FB67C:
	.4byte 0x000010F2
_080FB680:
	.4byte 0x000016F6
_080FB684:
	.4byte 0x0000178A
_080FB688:
	.4byte 0x00000F22
_080FB68C:
	.4byte 0x00000F12
_080FB690:
	.4byte 0x00001152
_080FB694:
	.4byte 0x000010A2
_080FB698:
	.4byte 0x00000F72
_080FB69C:
	.4byte 0x000010E2
_080FB6A0:
	ldr r2, _080FB6BC  @ =0x000010E2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #64
_080FB6A8:
	strb r1, [r0]
	ldr r0, _080FB6C0  @ =gRam
	ldr r1, _080FB6C4  @ =0x00001082
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_080FB6B6:
	pop {r4-r6}
	pop {r0}
	bx r0
_080FB6BC:
	.4byte 0x000010E2
_080FB6C0:
	.4byte gRam
_080FB6C4:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080FB5C4

