	THUMB_FUNC_START sub_080CB01C
sub_080CB01C: @ 0x080CB01C
	push {r4,lr}
	ldr r2, _080CB0B0  @ =gRam
	ldr r1, _080CB0B4  @ =0x00001627
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	ldr r3, _080CB0B8  @ =0x00001626
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #36
	add r0, r2, r3
	strb r1, [r0]
	ldr r3, _080CB0BC  @ =0x0000177E
	add r0, r2, r3
	strb r1, [r0]
	ldr r3, _080CB0C0  @ =0x00001610
	add r0, r2, r3
	strb r1, [r0]
	ldr r3, _080CB0C4  @ =0x00000DA6
	add r0, r2, r3
	strb r1, [r0]
	ldr r3, _080CB0C8  @ =0x000015F7
	add r0, r2, r3
	strb r1, [r0]
	ldr r3, _080CB0CC  @ =0x00001898
	add r0, r2, r3
	strb r1, [r0]
	ldr r1, _080CB0D0  @ =0x00001663
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #13
	beq _080CB064
	ldr r3, _080CB0D4  @ =0x00000B5C
	add r1, r2, r3
	mov r0, #254
	strb r0, [r1]
_080CB064:
	ldr r1, _080CB0D8  @ =0x0FFF0000
	ldr r3, _080CB0DC  @ =gUnknown_02006B80
	mov r2, #0
_080CB06A:
	asr r1, r1, #16
	add r0, r1, r3
	strb r2, [r0]
	sub r1, r1, #1
	lsl r1, r1, #16
	cmp r1, #0
	bge _080CB06A
	ldr r1, _080CB0E0  @ =0x01FF0000
	ldr r3, _080CB0E4  @ =gUnknown_02007B80
	mov r2, #0
_080CB07E:
	asr r1, r1, #16
	add r0, r1, r3
	strb r2, [r0]
	sub r1, r1, #1
	lsl r1, r1, #16
	cmp r1, #0
	bge _080CB07E
	mov r1, #7
	ldr r4, _080CB0E8  @ =gRoomEnterId
	mov r3, #255
_080CB092:
	lsl r0, r1, #16
	asr r0, r0, #16
	add r2, r0, r4
	ldrb r1, [r2]
	orr r1, r1, r3
	strb r1, [r2]
	sub r0, r0, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r0, #0
	bge _080CB092
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CB0B0:
	.4byte gRam
_080CB0B4:
	.4byte 0x00001627
_080CB0B8:
	.4byte 0x00001626
_080CB0BC:
	.4byte 0x0000177E
_080CB0C0:
	.4byte 0x00001610
_080CB0C4:
	.4byte 0x00000DA6
_080CB0C8:
	.4byte 0x000015F7
_080CB0CC:
	.4byte 0x00001898
_080CB0D0:
	.4byte 0x00001663
_080CB0D4:
	.4byte 0x00000B5C
_080CB0D8:
	.4byte 0x0FFF0000
_080CB0DC:
	.4byte gUnknown_02006B80
_080CB0E0:
	.4byte 0x01FF0000
_080CB0E4:
	.4byte gUnknown_02007B80
_080CB0E8:
	.4byte gRoomEnterId
	THUMB_FUNC_END sub_080CB01C

